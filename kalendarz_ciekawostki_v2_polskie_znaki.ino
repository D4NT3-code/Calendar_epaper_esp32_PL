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
#include "date_digits.h"

/* ================== KONFIGURACJA ================== */
const char* const WIFI_SSID = "TP-Link_IoT_FF88";
const char* const WIFI_PASSWORD = "45352164";

// 1 = po odswiezeniu ekran i ESP ida spac do nastepnej polnocy.
// Jesli powerbank sie wylacza przy malym poborze pradu, ustaw 0.
#define ENABLE_DEEP_SLEEP 1

// Kalendarz zmienia date dopiero o 00:00.
#define REFRESH_HOUR 0
#define REFRESH_MINUTE 0

#define LOCATION_LATITUDE 52.23
#define LOCATION_LONGITUDE 21.01

// Korekta minut, jesli chcesz dopasowac wynik np. do Apple Weather.
// Ustaw +1, gdy zrodlo pokazuje minute pozniej; -1, gdy minute wczesniej.
#define SUNRISE_MINUTE_OFFSET 0
#define SUNSET_MINUTE_OFFSET 0

/* ================== TEKSTY ================== */
const char* const WEEKDAY_NAMES[] = {
  "NIEDZIELA", "PONIEDZIAŁEK", "WTOREK", "ŚRODA",
  "CZWARTEK", "PIĄTEK", "SOBOTA"
};

const char* const MONTH_GENITIVE_NAMES[] = {
  "STYCZNIA", "LUTEGO", "MARCA", "KWIETNIA", "MAJA", "CZERWCA",
  "LIPCA", "SIERPNIA", "WRZEŚNIA", "PAŹDZIERNIKA", "LISTOPADA", "GRUDNIA"
};

const char* const MONTH_HEADER_NAMES[] = {
  "STYCZEŃ", "LUTY", "MARZEC", "KWIECIEŃ", "MAJ", "CZERWIEC",
  "LIPIEC", "SIERPIEŃ", "WRZESIEŃ", "PAŹDZIERNIK", "LISTOPAD", "GRUDZIEŃ"
};

/* ================== DANE ================== */
struct CalendarDate {
  int year;
  int month;
  int day;
  int dayOfWeek;
  int dayOfYear;
  int weekOfYear;
};

CalendarDate currentDate = {2026, 6, 6, 6, 157, 23};

/* ================== DATA ================== */
bool isLeapYear(int y) {
  return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

int daysInMonthForYear(int y, int m) {
  if (m == 2) return isLeapYear(y) ? 29 : 28;
  if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
  return 31;
}

time_t makeLocalTimestamp(int y, int m, int d, int hour, int minute, int second) {
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

void updateCurrentDateFromTime(struct tm* t) {
  currentDate.year = t->tm_year + 1900;
  currentDate.month = t->tm_mon + 1;
  currentDate.day = t->tm_mday;
  currentDate.dayOfWeek = t->tm_wday;
  currentDate.dayOfYear = t->tm_yday + 1;
  currentDate.weekOfYear = (t->tm_yday + 7 - ((t->tm_wday + 6) % 7)) / 7 + 1;
}

/* ================== IMIENINY ================== */
const char* displayNameDaysForDate(int month, int day) {
  static char truncatedNameDays[64];
  const char* nameDayText = nameDaysForDate(month, day);
  int commaCount = 0;
  int i = 0;

  while (nameDayText[i] && i < (int)sizeof(truncatedNameDays) - 1) {
    if (nameDayText[i] == ',') {
      commaCount++;
      if (commaCount >= 2) break;
    }
    truncatedNameDays[i] = nameDayText[i];
    i++;
  }

  while (i > 0 && (truncatedNameDays[i - 1] == ' ' || truncatedNameDays[i - 1] == ',')) i--;
  truncatedNameDays[i] = '\0';
  return truncatedNameDays;
}

int calculateMoonAge(int y, int m, int d) {
  if (m < 3) {
    y--;
    m += 12;
  }
  m++;
  long yearDays = 365.25 * y;
  long monthDays = 30.6 * m;
  long julianDay = yearDays + monthDays + d - 694039;
  int age = julianDay % 29;
  if (age < 0) age += 29;
  return age;
}

const char* moonPhaseText(int age) {
  if (age <= 1) return "nów";
  if (age <= 6) return "rośnie";
  if (age <= 9) return "I kwadra";
  if (age <= 13) return "rośnie";
  if (age <= 16) return "pełnia";
  if (age <= 21) return "maleje";
  if (age <= 24) return "III kwadra";
  return "maleje";
}

double degreesToRadians(double deg) {
  return deg * 3.14159265358979323846 / 180.0;
}

double radiansToDegrees(double rad) {
  return rad * 180.0 / 3.14159265358979323846;
}

int calculateDayOfYear(int y, int m, int d) {
  static const int monthDays[] = {0,31,59,90,120,151,181,212,243,273,304,334};
  int n = monthDays[m - 1] + d;
  if (m > 2 && isLeapYear(y)) n++;
  return n;
}

int weekdayForDate(int y, int m, int d) {
  struct tm t;
  memset(&t, 0, sizeof(t));
  t.tm_year = y - 1900;
  t.tm_mon = m - 1;
  t.tm_mday = d;
  time_t ts = mktime(&t);
  localtime_r(&ts, &t);
  return t.tm_wday;
}

int lastSundayInMonth(int y, int m) {
  int d = daysInMonthForYear(y, m);
  while (weekdayForDate(y, m, d) != 0) d--;
  return d;
}

int warsawUtcOffsetHours(int y, int m, int d) {
  int march = lastSundayInMonth(y, 3);
  int october = lastSundayInMonth(y, 10);
  if (m > 3 && m < 10) return 2;
  if (m == 3 && d >= march) return 2;
  if (m == 10 && d < october) return 2;
  return 1;
}

int calculateSunEventMinutes(int y, int m, int d, bool isSunrise) {
  int dayOfYear = calculateDayOfYear(y, m, d);
  double lngHour = LOCATION_LONGITUDE / 15.0;
  double approximateTime = dayOfYear + ((isSunrise ? 6.0 : 18.0) - lngHour) / 24.0;
  double meanAnomaly = (0.9856 * approximateTime) - 3.289;
  double trueLongitude = meanAnomaly + (1.916 * sin(degreesToRadians(meanAnomaly))) +
                         (0.020 * sin(degreesToRadians(2 * meanAnomaly))) + 282.634;
  while (trueLongitude < 0) trueLongitude += 360;
  while (trueLongitude >= 360) trueLongitude -= 360;

  double rightAscension = radiansToDegrees(atan(0.91764 * tan(degreesToRadians(trueLongitude))));
  while (rightAscension < 0) rightAscension += 360;
  while (rightAscension >= 360) rightAscension -= 360;

  double longitudeQuadrant = floor(trueLongitude / 90.0) * 90.0;
  double rightAscensionQuadrant = floor(rightAscension / 90.0) * 90.0;
  rightAscension = (rightAscension + longitudeQuadrant - rightAscensionQuadrant) / 15.0;

  double sinDeclination = 0.39782 * sin(degreesToRadians(trueLongitude));
  double cosDeclination = cos(asin(sinDeclination));
  double cosHourAngle = (cos(degreesToRadians(90.833)) - (sinDeclination * sin(degreesToRadians(LOCATION_LATITUDE)))) /
                        (cosDeclination * cos(degreesToRadians(LOCATION_LATITUDE)));

  if (cosHourAngle > 1 || cosHourAngle < -1) return -1;

  double hourAngle = isSunrise ? (360.0 - radiansToDegrees(acos(cosHourAngle))) : radiansToDegrees(acos(cosHourAngle));
  hourAngle /= 15.0;

  double localMeanTime = hourAngle + rightAscension - (0.06571 * approximateTime) - 6.622;
  double utcHours = localMeanTime - lngHour;
  while (utcHours < 0) utcHours += 24;
  while (utcHours >= 24) utcHours -= 24;

  int minutes = (int)((utcHours + warsawUtcOffsetHours(y, m, d)) * 60.0 + 0.5);
  while (minutes < 0) minutes += 1440;
  while (minutes >= 1440) minutes -= 1440;
  return minutes;
}



int historyIndexForDate(int m, int d) {
  const int offsets[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
  int index = offsets[m - 1] + d - 1;
  if (index < 0) index = 0;
  if (index > 365) index = 365;
  return index;
}

void stripHistoryCategoryAndYear(const char* source, char* destination, int destinationSize) {
  const char* p = source;
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

  if (len >= destinationSize) len = destinationSize - 1;
  strncpy(destination, p, len);
  destination[len] = '\0';
}

int utf8CharacterByteCount(const char* text, int pos, int len) {
  unsigned char c = (unsigned char)text[pos];
  if ((c & 0xE0) == 0xC0 && pos + 1 < len) return 2;
  if ((c & 0xF0) == 0xE0 && pos + 2 < len) return 3;
  if ((c & 0xF8) == 0xF0 && pos + 3 < len) return 4;
  return 1;
}

int utf8ByteOffsetForCharacterCount(const char* text, int maxCharacters) {
  int len = strlen(text);
  int pos = 0;
  int chars = 0;

  while (pos < len && chars < maxCharacters) {
    pos += utf8CharacterByteCount(text, pos, len);
    chars++;
  }

  return pos;
}

void copyWrappedLineToWidth(const char* text, int start, int maxCharacters, char* output, int outputSize, int* next) {
  int len = strlen(text);
  while (start < len && text[start] == ' ') start++;

  if (start >= len) {
    output[0] = '\0';
    *next = len;
    return;
  }

  int end = start;
  int chars = 0;
  while (end < len && chars < maxCharacters) {
    end += utf8CharacterByteCount(text, end, len);
    chars++;
  }

  if (end < len) {
    int split = end;
    while (split > start + 10 && text[split] != ' ') split--;
    if (split > start + 10) end = split;
  }

  int count = end - start;
  if (count >= outputSize) count = outputSize - 1;
  strncpy(output, text + start, count);
  output[count] = '\0';
  *next = end;
}

void drawHistoryEventText(int x, int y, const char* text) {
  char cleanText[192];
  char wrappedLine[128];
  int next = 0;
  stripHistoryCategoryAndYear(text, cleanText, sizeof(cleanText));

  copyWrappedLineToWidth(cleanText, 0, 39, wrappedLine, sizeof(wrappedLine), &next);
  Paint_DrawString_EN(x, y, wrappedLine, &Font12, WHITE, BLACK);

  copyWrappedLineToWidth(cleanText, next, 39, wrappedLine, sizeof(wrappedLine), &next);
  if (wrappedLine[0]) {
    if ((int)strlen(cleanText) > next + 3) {
      int n = utf8ByteOffsetForCharacterCount(wrappedLine, 35);
      wrappedLine[n] = '.';
      wrappedLine[n + 1] = '.';
      wrappedLine[n + 2] = '.';
      wrappedLine[n + 3] = '\0';
    }
    Paint_DrawString_EN(x, y + 15, wrappedLine, &Font12, WHITE, BLACK);
  }
}

void formatClockTime(char* output, int minutes) {
  if (minutes < 0) {
    strcpy(output, "--:--");
    return;
  }
  sprintf(output, "%02d:%02d", minutes / 60, minutes % 60);
}

int applySunMinuteOffset(int minutes, int adjustment) {
  if (minutes < 0) return minutes;
  minutes += adjustment;
  while (minutes < 0) minutes += 1440;
  while (minutes >= 1440) minutes -= 1440;
  return minutes;
}

/* ================== RYSOWANIE POMOCNICZE ================== */
void drawCenteredText(int x1, int x2, int y, const char* text, sFONT* font, UWORD bg, UWORD fg) {
  int textWidth = Paint_TextWidth(text, font);
  int x = x1 + ((x2 - x1) - textWidth) / 2;
  if (x < x1) x = x1;
  Paint_DrawString_EN(x, y, text, font, bg, fg);
}

sFONT* selectFontForWidth(const char* text, int maxTextWidth) {
  if (Paint_TextWidth(text, &Font20) <= maxTextWidth) return &Font20;
  if (Paint_TextWidth(text, &Font16) <= maxTextWidth) return &Font16;
  if (Paint_TextWidth(text, &Font12) <= maxTextWidth) return &Font12;
  return &Font8;
}

void drawCenteredNameDays(int x1, int x2, int y, const char* text, UWORD bg, UWORD fg) {
  sFONT* font = selectFontForWidth(text, x2 - x1);
  int adjustedY = y + (Font20.Height - font->Height) / 2;
  drawCenteredText(x1, x2, adjustedY, text, font, bg, fg);
}

void drawRoundedHorizontalSegment(int x, int y, int w, int t, UWORD color) {
  int r = t / 2;
  Paint_DrawRectangle(x + r, y, x + w - r, y + t, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + w - r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
}

void drawRoundedVerticalSegment(int x, int y, int t, int h, UWORD color) {
  int r = t / 2;
  Paint_DrawRectangle(x, y + r, x + t, y + h - r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawCircle(x + r, y + h - r, r, color, DOT_PIXEL_1X1, DRAW_FILL_FULL);
}

void drawSegmentDigit(int x, int y, int digit, UWORD color) {
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

  if (seg[digit][0]) drawRoundedHorizontalSegment(x + t / 2, y, w - t, t, color);
  if (seg[digit][1]) drawRoundedVerticalSegment(x + w - t, y + t / 2, t, h / 2 - t / 2, color);
  if (seg[digit][2]) drawRoundedVerticalSegment(x + w - t, y + h / 2, t, h / 2 - t / 2, color);
  if (seg[digit][3]) drawRoundedHorizontalSegment(x + t / 2, y + h - t, w - t, t, color);
  if (seg[digit][4]) drawRoundedVerticalSegment(x, y + h / 2, t, h / 2 - t / 2, color);
  if (seg[digit][5]) drawRoundedVerticalSegment(x, y + t / 2, t, h / 2 - t / 2, color);
  if (seg[digit][6]) drawRoundedHorizontalSegment(x + t / 2, y + h / 2 - t / 2, w - t, t, color);
}

int segmentDigitVisibleLeft(int digit) {
  if (digit == 1) return 66;
  if (digit == 3 || digit == 7) return 9;
  return 0;
}

int segmentDigitVisibleRight(int digit) {
  return 84;
}

void drawSegmentNumberCentered(int x1, int x2, int y, int number, UWORD color) {
  const int gap = 18;
  int center = x1 + (x2 - x1) / 2;

  if (number >= 10) {
    int tens = number / 10;
    int ones = number % 10;
    int left1 = segmentDigitVisibleLeft(tens);
    int right1 = segmentDigitVisibleRight(tens);
    int left2 = segmentDigitVisibleLeft(ones);
    int right2 = segmentDigitVisibleRight(ones);
    int width1 = right1 - left1;
    int width2 = right2 - left2;
    int visibleW = width1 + gap + width2;
    int visibleX = center - visibleW / 2;
    drawSegmentDigit(visibleX - left1, y, tens, color);
    drawSegmentDigit(visibleX + width1 + gap - left2, y, ones, color);
  } else {
    int left = segmentDigitVisibleLeft(number);
    int right = segmentDigitVisibleRight(number);
    int visibleW = right - left;
    int visibleX = center - visibleW / 2;
    drawSegmentDigit(visibleX - left, y, number, color);
  }
}

void fillDateDigitRect(int x1, int y1, int x2, int y2, UWORD color) {
  for (int y = y1; y <= y2; y++) {
    Paint_DrawLine(x1, y, x2, y, color, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
  }
}

void drawLargeDateDigit(int x, int y, int digit, UWORD color) {
  if (digit < 0 || digit > 9) return;

  const DateDigitRect* rects = DATE_DIGITS[digit];
  uint16_t count = DATE_DIGIT_COUNTS[digit];
  for (uint16_t i = 0; i < count; i++) {
    fillDateDigitRect(x + rects[i].x1, y + rects[i].y1,
                 x + rects[i].x2, y + rects[i].y2, color);
  }
}

void drawLargeDateNumberCentered(int x1, int x2, int y, int number, UWORD color) {
  static const uint8_t left[10]  = {7, 13, 4, 6, 3, 8, 7, 7, 7, 5};
  static const uint8_t right[10] = {84, 65, 84, 85, 89, 87, 87, 85, 85, 85};
  const int gap = 10;
  int center = x1 + (x2 - x1) / 2;

  if (number >= 10) {
    int tens = number / 10;
    int ones = number % 10;
    int width1 = right[tens] - left[tens] + 1;
    int width2 = right[ones] - left[ones] + 1;
    int visibleW = width1 + gap + width2;
    int visibleX = center - visibleW / 2;
    drawLargeDateDigit(visibleX - left[tens], y, tens, color);
    drawLargeDateDigit(visibleX + width1 + gap - left[ones], y, ones, color);
  } else {
    int visibleW = right[number] - left[number] + 1;
    int visibleX = center - visibleW / 2;
    drawLargeDateDigit(visibleX - left[number], y, number, color);
  }
}

void drawMoonPhaseIcon(int x, int y, int age) {
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
bool connectToWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  unsigned long start = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - start < 15000) {
    delay(300);
  }
  return WiFi.status() == WL_CONNECTED;
}

void syncTimeFromNtp() {
  configTzTime("CET-1CEST,M3.5.0,M10.5.0/3", "pool.ntp.org", "time.google.com");

  struct tm t;
  if (getLocalTime(&t, 12000)) {
    updateCurrentDateFromTime(&t);
  }
}

uint64_t secondsUntilNextRefresh() {
  time_t now = time(nullptr);
  struct tm t;
  localtime_r(&now, &t);

  time_t target = makeLocalTimestamp(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, REFRESH_HOUR, REFRESH_MINUTE, 0);
  if (now >= target) {
    t.tm_mday += 1;
    mktime(&t);
    target = makeLocalTimestamp(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, REFRESH_HOUR, REFRESH_MINUTE, 0);
  }

  long diff = target - now;
  if (diff < 60) diff = 60;
  return (uint64_t)diff;
}

/* ================== EKRAN ================== */
void drawCalendarScreen(UBYTE* blackImage, UBYTE* redImage) {
  Paint_SelectImage(blackImage);
  Paint_Clear(WHITE);
  Paint_SelectImage(redImage);
  Paint_Clear(WHITE);

  char textBuffer[96];
  int daysRemainingInYear = (isLeapYear(currentDate.year) ? 366 : 365) - currentDate.dayOfYear;
  int moonPhaseAge = calculateMoonAge(currentDate.year, currentDate.month, currentDate.day);
  int sunriseMinutes = calculateSunEventMinutes(currentDate.year, currentDate.month, currentDate.day, true);
  int sunsetMinutes = calculateSunEventMinutes(currentDate.year, currentDate.month, currentDate.day, false);
  sunriseMinutes = applySunMinuteOffset(sunriseMinutes, SUNRISE_MINUTE_OFFSET);
  sunsetMinutes = applySunMinuteOffset(sunsetMinutes, SUNSET_MINUTE_OFFSET);
  char sunriseLabel[8];
  char sunsetLabel[8];
  formatClockTime(sunriseLabel, sunriseMinutes);
  formatClockTime(sunsetLabel, sunsetMinutes);
  int calendarDayIndex = historyIndexForDate(currentDate.month, currentDate.day);
  MottoItem dailyMotto = DAILY_MOTTOS[calendarDayIndex];
  const HistoryDay* historyDay = &DAILY_HISTORY[historyIndexForDate(currentDate.month, currentDate.day)];

  Paint_SelectImage(redImage);
  Paint_DrawRectangle(0, 0, 800, 62, RED, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawString_EN(36, 20, WEEKDAY_NAMES[currentDate.dayOfWeek], &Font24, RED, WHITE);
  sprintf(textBuffer, "%d DNI DO KOŃCA ROKU", daysRemainingInYear);
  drawCenteredText(245, 505, 24, textBuffer, &Font16, RED, WHITE);
  sprintf(textBuffer, "%s %d", MONTH_HEADER_NAMES[currentDate.month - 1], currentDate.year);
  drawCenteredText(540, 780, 22, textBuffer, &Font20, RED, WHITE);

  Paint_SelectImage(blackImage);
  Paint_DrawLine(392, 86, 392, 378, BLACK, DOT_PIXEL_3X3, LINE_STYLE_SOLID);

  sprintf(textBuffer, "Wschód %s", sunriseLabel);
  Paint_DrawString_EN(34, 74, textBuffer, &Font12, WHITE, BLACK);
  sprintf(textBuffer, "Zachód %s", sunsetLabel);
  Paint_DrawString_EN(276, 74, textBuffer, &Font12, WHITE, BLACK);

  drawLargeDateNumberCentered(34, 360, 88, currentDate.day, BLACK);
  Paint_DrawRectangle(102, 226, 292, 229, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  drawCenteredText(34, 360, 236, MONTH_GENITIVE_NAMES[currentDate.month - 1], &Font24, WHITE, BLACK);

  Paint_SelectImage(redImage);
  const char* dailyHoliday = dailyHolidayForDate(currentDate.month, currentDate.day);
  drawCenteredText(8, 384, 278, dailyHoliday, selectFontForWidth(dailyHoliday, 376), WHITE, RED);

  Paint_SelectImage(blackImage);
  drawCenteredNameDays(8, 384, 307, displayNameDaysForDate(currentDate.month, currentDate.day), WHITE, BLACK);
  sprintf(textBuffer, "dzień roku %d  |  tydzień %d", currentDate.dayOfYear, currentDate.weekOfYear);
  drawCenteredText(34, 360, 334, textBuffer, &Font16, WHITE, BLACK);
  drawMoonPhaseIcon(112, 365, moonPhaseAge);
  sprintf(textBuffer, "księżyc: %s", moonPhaseText(moonPhaseAge));
  Paint_DrawString_EN(136, 357, textBuffer, &Font16, WHITE, BLACK);

  Paint_SelectImage(blackImage);
  Paint_DrawString_EN(442, 96, "CIEKAWOSTKI", &Font20, WHITE, BLACK);
  Paint_SelectImage(redImage);
  Paint_DrawRectangle(442, 120, 734, 123, RED, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  Paint_DrawString_EN(442, 143, "TEGO DNIA", &Font16, WHITE, RED);

  int factY = 172;
  for (int i = 0; i < historyDay->count && i < 5; i++) {
    Paint_SelectImage(redImage);
    if (historyDay->events[i].year > 0) {
      sprintf(textBuffer, "%d", historyDay->events[i].year);
    } else {
      strcpy(textBuffer, "*");
    }
    Paint_DrawString_EN(442, factY, textBuffer, &Font16, WHITE, RED);

    Paint_SelectImage(blackImage);
    drawHistoryEventText(498, factY, historyDay->events[i].text);
    factY += 42;
  }

  Paint_DrawRectangle(0, 386, 800, 480, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
  sprintf(textBuffer, "%s %s", dailyMotto.line1, dailyMotto.line2);
  drawCenteredText(36, 764, 413, textBuffer, &Font20, BLACK, WHITE);
  drawCenteredText(36, 764, 443, dailyMotto.author, &Font16, BLACK, WHITE);
}

void enterDeepSleep() {
  EPD_7IN5B_V2_Sleep();
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  btStop();

#if ENABLE_DEEP_SLEEP
  uint64_t seconds = secondsUntilNextRefresh();
  esp_sleep_enable_timer_wakeup(seconds * 1000000ULL);
  esp_deep_sleep_start();
#else
  uint64_t seconds = secondsUntilNextRefresh();
  while (seconds > 0) {
    uint64_t step = seconds > 60 ? 60 : seconds;
    delay(step * 1000ULL);
    seconds -= step;
  }
  ESP.restart();
#endif
}

void setup() {
  bool isWifiConnected = connectToWiFi();
  if (isWifiConnected) {
    syncTimeFromNtp();
  }

  DEV_Module_Init();
  EPD_7IN5B_V2_Init();

  UWORD frameBufferSize = ((EPD_7IN5B_V2_WIDTH + 7) / 8) * EPD_7IN5B_V2_HEIGHT;
  UBYTE* blackImage = (UBYTE*)malloc(frameBufferSize);
  UBYTE* redImage = (UBYTE*)malloc(frameBufferSize);

  if (blackImage && redImage) {
    Paint_NewImage(blackImage, EPD_7IN5B_V2_WIDTH, EPD_7IN5B_V2_HEIGHT, 0, WHITE);
    Paint_NewImage(redImage, EPD_7IN5B_V2_WIDTH, EPD_7IN5B_V2_HEIGHT, 0, WHITE);
    drawCalendarScreen(blackImage, redImage);
    EPD_7IN5B_V2_Display(blackImage, redImage);
    DEV_Delay_ms(2000);
  }

  free(blackImage);
  free(redImage);
  enterDeepSleep();
}

void loop() {}
