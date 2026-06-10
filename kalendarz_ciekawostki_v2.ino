#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"

#include <WiFi.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "motta_366_v2_final.h"
#include "historia_366_pl_ascii_5_na_dzien_rok_w_tekscie.h"
#include "imieniny_rok.h"
#include "swieta_dnia_rok.h"

/* ================== KONFIGURACJA ================== */
const char* ssid = "WIFI";
const char* password = "Pass";

// 1 = po odswiezeniu ekran i ESP ida spac do nastepnej polnocy.
// Jesli powerbank sie wylacza przy malym poborze pradu, ustaw 0.
#define USE_DEEP_SLEEP 1

// Kalendarz zmienia date dopiero o 00:00.
#define CHANGE_HOUR 0
#define CHANGE_MINUTE 0

#define LOCATION_LAT 52.23
#define LOCATION_LON 21.01

// Korekta minut, jesli chcesz dopasowac wynik np. do Apple Weather.
// Ustaw +1, gdy zrodlo pokazuje minute pozniej; -1, gdy minute wczesniej.
#define SUNRISE_MINUTE_ADJUST 0
#define SUNSET_MINUTE_ADJUST 0

/* ================== TEKSTY ================== */
const char* dniTygodnia[] = {
  "NIEDZIELA", "PONIEDZIALEK", "WTOREK", "SRODA",
  "CZWARTEK", "PIATEK", "SOBOTA"
};

const char* miesiace[] = {
  "STYCZNIA", "LUTEGO", "MARCA", "KWIETNIA", "MAJA", "CZERWCA",
  "LIPCA", "SIERPNIA", "WRZESNIA", "PAZDZIERNIKA", "LISTOPADA", "GRUDNIA"
};

const char* miesiaceNaglowek[] = {
  "STYCZEN", "LUTY", "MARZEC", "KWIECIEN", "MAJ", "CZERWIEC",
  "LIPIEC", "SIERPIEN", "WRZESIEN", "PAZDZIERNIK", "LISTOPAD", "GRUDZIEN"
};

/* ================== DANE ================== */
struct DateInfo {
  int year;
  int month;
  int day;
  int dow;
  int yday;
  int week;
};

DateInfo dateInfo = {2026, 6, 6, 6, 157, 23};

/* ================== DATA ================== */
bool isLeap(int y) {
  return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

int daysInMonth(int y, int m) {
  if (m == 2) return isLeap(y) ? 29 : 28;
  if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
  return 31;
}

time_t makeLocalTime(int y, int m, int d, int hour, int minute, int second) {
  struct tm t;
  memset(&t, 0, sizeof(t));
  t.tm_year = y - 1900;
  t.tm_mon = m - 1;
  t.tm_mday = d;
  t.tm_hour = hour;
  t.tm_min = minute;
  t.tm_sec = second;
  t.tm_isdst = -1;
  return mktime(&t);
}

void fillDateInfoFromTm(struct tm* t) {
  dateInfo.year = t->tm_year + 1900;
  dateInfo.month = t->tm_mon + 1;
  dateInfo.day = t->tm_mday;
  dateInfo.dow = t->tm_wday;
  dateInfo.yday = t->tm_yday + 1;
  dateInfo.week = (t->tm_yday + 7 - ((t->tm_wday + 6) % 7)) / 7 + 1;
}

/* ================== IMIENINY ================== */
const char* nameDay(int month, int day) {
  static char twoNames[64];
  const char* names = imieniny4ForDate(month, day);
  int commaCount = 0;
  int i = 0;

  while (names[i] && i < (int)sizeof(twoNames) - 1) {
    if (names[i] == ',') {
      commaCount++;
      if (commaCount >= 2) break;
    }
    twoNames[i] = names[i];
    i++;
  }

  while (i > 0 && (twoNames[i - 1] == ' ' || twoNames[i - 1] == ',')) i--;
  twoNames[i] = '\0';
  return twoNames;
}

int moonAge(int y, int m, int d) {
  if (m < 3) {
    y--;
    m += 12;
  }
  m++;
  long c = 365.25 * y;
  long e = 30.6 * m;
  long jd = c + e + d - 694039;
  int age = jd % 29;
  if (age < 0) age += 29;
  return age;
}

const char* moonText(int age) {
  if (age <= 1) return "now";
  if (age <= 6) return "rosnie";
  if (age <= 9) return "I kwadra";
  if (age <= 13) return "rosnie";
  if (age <= 16) return "pelnia";
  if (age <= 21) return "maleje";
  if (age <= 24) return "III kwadra";
  return "maleje";
}

double degToRad(double deg) {
  return deg * 3.14159265358979323846 / 180.0;
}

double radToDeg(double rad) {
  return rad * 180.0 / 3.14159265358979323846;
}

int dayOfYearCalc(int y, int m, int d) {
  static const int monthDays[] = {0,31,59,90,120,151,181,212,243,273,304,334};
  int n = monthDays[m - 1] + d;
  if (m > 2 && isLeap(y)) n++;
  return n;
}

int weekdayOfDate(int y, int m, int d) {
  struct tm t;
  memset(&t, 0, sizeof(t));
  t.tm_year = y - 1900;
  t.tm_mon = m - 1;
  t.tm_mday = d;
  time_t ts = mktime(&t);
  localtime_r(&ts, &t);
  return t.tm_wday;
}

int lastSundayOfMonth(int y, int m) {
  int d = daysInMonth(y, m);
  while (weekdayOfDate(y, m, d) != 0) d--;
  return d;
}

int warsawUtcOffset(int y, int m, int d) {
  int march = lastSundayOfMonth(y, 3);
  int october = lastSundayOfMonth(y, 10);
  if (m > 3 && m < 10) return 2;
  if (m == 3 && d >= march) return 2;
  if (m == 10 && d < october) return 2;
  return 1;
}

int calcSunMinutes(int y, int m, int d, bool sunrise) {
  int n = dayOfYearCalc(y, m, d);
  double lngHour = LOCATION_LON / 15.0;
  double t = n + ((sunrise ? 6.0 : 18.0) - lngHour) / 24.0;
  double M = (0.9856 * t) - 3.289;
  double L = M + (1.916 * sin(degToRad(M))) + (0.020 * sin(degToRad(2 * M))) + 282.634;
  while (L < 0) L += 360;
  while (L >= 360) L -= 360;

  double RA = radToDeg(atan(0.91764 * tan(degToRad(L))));
  while (RA < 0) RA += 360;
  while (RA >= 360) RA -= 360;

  double Lquadrant = floor(L / 90.0) * 90.0;
  double RAquadrant = floor(RA / 90.0) * 90.0;
  RA = (RA + Lquadrant - RAquadrant) / 15.0;

  double sinDec = 0.39782 * sin(degToRad(L));
  double cosDec = cos(asin(sinDec));
  double cosH = (cos(degToRad(90.833)) - (sinDec * sin(degToRad(LOCATION_LAT)))) /
                (cosDec * cos(degToRad(LOCATION_LAT)));

  if (cosH > 1 || cosH < -1) return -1;

  double H = sunrise ? (360.0 - radToDeg(acos(cosH))) : radToDeg(acos(cosH));
  H /= 15.0;

  double T = H + RA - (0.06571 * t) - 6.622;
  double UT = T - lngHour;
  while (UT < 0) UT += 24;
  while (UT >= 24) UT -= 24;

  int minutes = (int)((UT + warsawUtcOffset(y, m, d)) * 60.0 + 0.5);
  while (minutes < 0) minutes += 1440;
  while (minutes >= 1440) minutes -= 1440;
  return minutes;
}



int historyDayIndex(int m, int d) {
  const int offsets[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
  int index = offsets[m - 1] + d - 1;
  if (index < 0) index = 0;
  if (index > 365) index = 365;
  return index;
}

void stripCategoryAndYear(const char* src, char* dst, int dstSize) {
  const char* p = src;
  if (*p == '[') {
    const char* close = strchr(p, ']');
    if (close) p = close + 1;
  }
  while (*p == ' ') p++;

  int len = strlen(p);
  while (len > 0 && p[len - 1] == ' ') len--;
  if (len > 7 && p[len - 1] == ')' && p[len - 6] == '(') {
    len -= 7;
    while (len > 0 && p[len - 1] == ' ') len--;
  }

  if (len >= dstSize) len = dstSize - 1;
  strncpy(dst, p, len);
  dst[len] = '\0';
}

void copyWrappedLine(const char* text, int start, int maxChars, char* out, int outSize, int* next) {
  int len = strlen(text);
  while (start < len && text[start] == ' ') start++;

  if (start >= len) {
    out[0] = '\0';
    *next = len;
    return;
  }

  int end = start + maxChars;
  if (end >= len) {
    end = len;
  } else {
    int split = end;
    while (split > start + 10 && text[split] != ' ') split--;
    if (split > start + 10) end = split;
  }

  int count = end - start;
  if (count >= outSize) count = outSize - 1;
  strncpy(out, text + start, count);
  out[count] = '\0';
  *next = end;
}

void drawFactText(int x, int y, const char* text) {
  char clean[112];
  char line[44];
  int next = 0;
  stripCategoryAndYear(text, clean, sizeof(clean));

  copyWrappedLine(clean, 0, 39, line, sizeof(line), &next);
  Paint_DrawString_EN(x, y, line, &Font12, WHITE, BLACK);

  copyWrappedLine(clean, next, 39, line, sizeof(line), &next);
  if (line[0]) {
    if ((int)strlen(clean) > next + 3) {
      int n = strlen(line);
      if (n > 35) n = 35;
      line[n] = '.';
      line[n + 1] = '.';
      line[n + 2] = '.';
      line[n + 3] = '\0';
    }
    Paint_DrawString_EN(x, y + 15, line, &Font12, WHITE, BLACK);
  }
}

void formatTime(char* out, int minutes) {
  if (minutes < 0) {
    strcpy(out, "--:--");
    return;
  }
  sprintf(out, "%02d:%02d", minutes / 60, minutes % 60);
}

int adjustSunMinutes(int minutes, int adjustment) {
  if (minutes < 0) return minutes;
  minutes += adjustment;
  while (minutes < 0) minutes += 1440;
  while (minutes >= 1440) minutes -= 1440;
  return minutes;
}

/* ================== RYSOWANIE POMOCNICZE ================== */
void centerText(int x1, int x2, int y, const char* text, sFONT* font, UWORD bg, UWORD fg) {
  int textW = strlen(text) * font->Width;
  int x = x1 + ((x2 - x1) - textW) / 2;
  if (x < x1) x = x1;
  Paint_DrawString_EN(x, y, text, font, bg, fg);
}

sFONT* fontForWidth(const char* text, int maxWidth) {
  int len = strlen(text);
  if (len * Font20.Width <= maxWidth) return &Font20;
  if (len * Font16.Width <= maxWidth) return &Font16;
  if (len * Font12.Width <= maxWidth) return &Font12;
  return &Font8;
}

void centerNameDay(int x1, int x2, int y, const char* text, UWORD bg, UWORD fg) {
  sFONT* font = fontForWidth(text, x2 - x1);
  int adjustedY = y + (Font20.Height - font->Height) / 2;
  centerText(x1, x2, adjustedY, text, font, bg, fg);
}

void drawRoundHSegment(int x, int y, int w, int t, UWORD color) {
  int r = t / 2;
  Paint_DrawRectangle(x + r, y, x + w - r, y + t, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + w - r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
}

void drawRoundVSegment(int x, int y, int t, int h, UWORD color) {
  int r = t / 2;
  Paint_DrawRectangle(x, y + r, x + t, y + h - r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + h - r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
}

void drawBigDigit(int x, int y, int digit, UWORD color) {
  const int w = 84;
  const int h = 132;
  const int t = 18;
  bool seg[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}
  };

  if (seg[digit][0]) drawRoundHSegment(x + t / 2, y, w - t, t, color);
  if (seg[digit][1]) drawRoundVSegment(x + w - t, y + t / 2, t, h / 2 - t / 2, color);
  if (seg[digit][2]) drawRoundVSegment(x + w - t, y + h / 2, t, h / 2 - t / 2, color);
  if (seg[digit][3]) drawRoundHSegment(x + t / 2, y + h - t, w - t, t, color);
  if (seg[digit][4]) drawRoundVSegment(x, y + h / 2, t, h / 2 - t / 2, color);
  if (seg[digit][5]) drawRoundVSegment(x, y + t / 2, t, h / 2 - t / 2, color);
  if (seg[digit][6]) drawRoundHSegment(x + t / 2, y + h / 2 - t / 2, w - t, t, color);
}

int bigDigitVisibleLeft(int digit) {
  if (digit == 1) return 66;
  if (digit == 3 || digit == 7) return 9;
  return 0;
}

int bigDigitVisibleRight(int digit) {
  return 84;
}

void drawBigNumberCentered(int x1, int x2, int y, int number, UWORD color) {
  const int gap = 18;
  int center = x1 + (x2 - x1) / 2;

  if (number >= 10) {
    int tens = number / 10;
    int ones = number % 10;
    int left1 = bigDigitVisibleLeft(tens);
    int right1 = bigDigitVisibleRight(tens);
    int left2 = bigDigitVisibleLeft(ones);
    int right2 = bigDigitVisibleRight(ones);
    int width1 = right1 - left1;
    int width2 = right2 - left2;
    int visibleW = width1 + gap + width2;
    int visibleX = center - visibleW / 2;
    drawBigDigit(visibleX - left1, y, tens, color);
    drawBigDigit(visibleX + width1 + gap - left2, y, ones, color);
  } else {
    int left = bigDigitVisibleLeft(number);
    int right = bigDigitVisibleRight(number);
    int visibleW = right - left;
    int visibleX = center - visibleW / 2;
    drawBigDigit(visibleX - left, y, number, color);
  }
}

void drawMoonIcon(int x, int y, int age) {
  Paint_DrawCircle(x, y, 12, BLACK, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);

  if (age <= 1) {
    Paint_DrawCircle(x, y, 9, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  } else if (age <= 13) {
    Paint_DrawCircle(x + 4, y, 8, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  } else if (age <= 16) {
    Paint_DrawCircle(x, y, 9, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  } else {
    Paint_DrawCircle(x - 4, y, 8, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  }
}

/* ================== WIFI I CZAS ================== */
bool connectWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  unsigned long start = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - start < 15000) {
    delay(300);
  }
  return WiFi.status() == WL_CONNECTED;
}

void loadTimeFromNtp() {
  configTzTime("CET-1CEST,M3.5.0,M10.5.0/3", "pool.ntp.org", "time.google.com");

  struct tm t;
  if (getLocalTime(&t, 12000)) {
    fillDateInfoFromTm(&t);
  }
}

uint64_t secondsUntilNextChange() {
  time_t now = time(nullptr);
  struct tm t;
  localtime_r(&now, &t);

  time_t target = makeLocalTime(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, CHANGE_HOUR, CHANGE_MINUTE, 0);
  if (now >= target) {
    t.tm_mday += 1;
    mktime(&t);
    target = makeLocalTime(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, CHANGE_HOUR, CHANGE_MINUTE, 0);
  }

  long diff = target - now;
  if (diff < 60) diff = 60;
  return (uint64_t)diff;
}

/* ================== EKRAN ================== */
void drawScreen(UBYTE* black, UBYTE* red) {
  Paint_SelectImage(black);
  Paint_Clear(WHITE);
  Paint_SelectImage(red);
  Paint_Clear(WHITE);

  char buf[96];
  int daysLeft = (isLeap(dateInfo.year) ? 366 : 365) - dateInfo.yday;
  int moon = moonAge(dateInfo.year, dateInfo.month, dateInfo.day);
  int sunrise = calcSunMinutes(dateInfo.year, dateInfo.month, dateInfo.day, true);
  int sunset = calcSunMinutes(dateInfo.year, dateInfo.month, dateInfo.day, false);
  sunrise = adjustSunMinutes(sunrise, SUNRISE_MINUTE_ADJUST);
  sunset = adjustSunMinutes(sunset, SUNSET_MINUTE_ADJUST);
  char sunriseText[8];
  char sunsetText[8];
  formatTime(sunriseText, sunrise);
  formatTime(sunsetText, sunset);
  int dayIndex = historyDayIndex(dateInfo.month, dateInfo.day);
  MottoItem motto = MOTTA_366[dayIndex];
  const HistoryDay* facts = &HISTORIA_366[historyDayIndex(dateInfo.month, dateInfo.day)];

  Paint_SelectImage(red);
  Paint_DrawRectangle(0, 0, 800, 62, RED, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawString_EN(36, 20, dniTygodnia[dateInfo.dow], &Font24, RED, WHITE);
  sprintf(buf, "%d DNI DO KONCA ROKU", daysLeft);
  centerText(245, 505, 24, buf, &Font16, RED, WHITE);
  sprintf(buf, "%s %d", miesiaceNaglowek[dateInfo.month - 1], dateInfo.year);
  centerText(540, 780, 22, buf, &Font20, RED, WHITE);

  Paint_SelectImage(black);
  Paint_DrawLine(392, 86, 392, 378, BLACK, DOT_PIXEL_3X3, LINE_STYLE_SOLID);

  sprintf(buf, "Wschod %s", sunriseText);
  Paint_DrawString_EN(34, 74, buf, &Font12, WHITE, BLACK);
  sprintf(buf, "Zachod %s", sunsetText);
  Paint_DrawString_EN(276, 74, buf, &Font12, WHITE, BLACK);

  drawBigNumberCentered(34, 360, 88, dateInfo.day, BLACK);
  centerText(34, 360, 238, miesiace[dateInfo.month - 1], &Font24, WHITE, BLACK);

  Paint_SelectImage(red);
  const char* specialDay = swietoDniaForDate(dateInfo.month, dateInfo.day);
  centerText(8, 384, 278, specialDay, fontForWidth(specialDay, 376), WHITE, RED);

  Paint_SelectImage(black);
  centerNameDay(8, 384, 307, nameDay(dateInfo.month, dateInfo.day), WHITE, BLACK);
  sprintf(buf, "dzien roku %d  |  tydzien %d", dateInfo.yday, dateInfo.week);
  centerText(34, 360, 334, buf, &Font16, WHITE, BLACK);
  drawMoonIcon(112, 365, moon);
  sprintf(buf, "ksiezyc: %s", moonText(moon));
  Paint_DrawString_EN(136, 357, buf, &Font16, WHITE, BLACK);

  Paint_SelectImage(black);
  Paint_DrawString_EN(442, 96, "CIEKAWOSTKI", &Font20, WHITE, BLACK);
  Paint_SelectImage(red);
  Paint_DrawRectangle(442, 120, 734, 123, RED, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawString_EN(442, 143, "TEGO DNIA", &Font16, WHITE, RED);

  int fy = 172;
  for (int i = 0; i < facts->count && i < 5; i++) {
    Paint_SelectImage(red);
    if (facts->events[i].year > 0) {
      sprintf(buf, "%d", facts->events[i].year);
    } else {
      strcpy(buf, "*");
    }
    Paint_DrawString_EN(442, fy, buf, &Font16, WHITE, RED);

    Paint_SelectImage(black);
    drawFactText(498, fy, facts->events[i].text);
    fy += 42;
  }

  Paint_DrawRectangle(28, 388, 772, 468, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  sprintf(buf, "%s %s", motto.line1, motto.line2);
  centerText(36, 764, 413, buf, &Font20, BLACK, WHITE);
  centerText(36, 764, 443, motto.author, &Font16, BLACK, WHITE);
}

void sleepDisplayAndEsp() {
  EPD_7IN5B_V2_Sleep();
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  btStop();

#if USE_DEEP_SLEEP
  uint64_t seconds = secondsUntilNextChange();
  esp_sleep_enable_timer_wakeup(seconds * 1000000ULL);
  esp_deep_sleep_start();
#else
  uint64_t seconds = secondsUntilNextChange();
  while (seconds > 0) {
    uint64_t step = seconds > 60 ? 60 : seconds;
    delay(step * 1000ULL);
    seconds -= step;
  }
  ESP.restart();
#endif
}

void setup() {
  bool wifiOk = connectWiFi();
  if (wifiOk) {
    loadTimeFromNtp();
  }

  DEV_Module_Init();
  EPD_7IN5B_V2_Init();

  UWORD imageSize = ((EPD_7IN5B_V2_WIDTH + 7) / 8) * EPD_7IN5B_V2_HEIGHT;
  UBYTE* black = (UBYTE*)malloc(imageSize);
  UBYTE* red = (UBYTE*)malloc(imageSize);

  if (black && red) {
    Paint_NewImage(black, EPD_7IN5B_V2_WIDTH, EPD_7IN5B_V2_HEIGHT, 0, WHITE);
    Paint_NewImage(red, EPD_7IN5B_V2_WIDTH, EPD_7IN5B_V2_HEIGHT, 0, WHITE);
    drawScreen(black, red);
    EPD_7IN5B_V2_Display(black, red);
    DEV_Delay_ms(2000);
  }

  free(black);
  free(red);
  sleepDisplayAndEsp();
}

void loop() {}
