# Calendar e-paper ESP32 PL

Polski kalendarz na ESP32 z ekranem e-paper 7,5" 800x480.

Projekt wyświetla codzienny ekran informacyjny z datą, imieninami, świętem dnia, mottem oraz ciekawostkami historycznymi. Całość działa offline po jednorazowym pobraniu aktualnego czasu z Wi-Fi przez NTP. Projekt nie wymaga modułu RTC, choć jego obsługa jest planowana.

Repozytorium: https://github.com/D4NT3-code/Calendar_epaper_esp32_PL

## Funkcje

- data, dzień tygodnia, miesiąc i rok,
- liczba dni do końca roku,
- dzień roku i numer tygodnia,
- godzina wschodu i zachodu słońca,
- święto dnia,
- imieniny,
- faza księżyca,
- motto dnia,
- ciekawostki historyczne z danego dnia,
- obsługa polskich znaków,
- własne fonty dopasowane do ekranu e-paper,
- duże cyfry daty w osobnym stylu,
- dane zapisane lokalnie w pamięci urządzenia,
- automatyczne uśpienie ESP32 po odświeżeniu ekranu.

## Jak to działa

Po uruchomieniu ESP32 łączy się z Wi-Fi, pobiera aktualny czas z serwera NTP, oblicza dane dla bieżącego dnia, rysuje obraz na dwóch buforach ekranu e-paper i odświeża wyświetlacz.

Po odświeżeniu ekran zachowuje obraz bez zasilania, a ESP32 może przejść w tryb deep sleep do następnej zmiany dnia. Dzięki temu projekt nadaje się do pracy jako prosty, energooszczędny kalendarz biurkowy.

## Sprzęt

Projekt był przygotowany pod:

- ESP32,
- ekran e-paper 7,5" 800x480,
- wariant czarno-biało-czerwony,
- sterownik zgodny z plikami `EPD_7in5b_V2`.

## Konfiguracja

Najważniejsze ustawienia znajdują się w pliku:

```text
kalendarz_ciekawostki_v2_polskie_znaki.ino
```

Przed wgraniem ustaw dane Wi-Fi:

```cpp
const char* const WIFI_SSID = "TWOJA_SIEC_WIFI";
const char* const WIFI_PASSWORD = "TWOJE_HASLO_WIFI";
```

Ustaw lokalizację używaną do obliczania wschodu i zachodu słońca:

```cpp
#define LOCATION_LATITUDE 52.23
#define LOCATION_LONGITUDE 21.01
```

Godzina zmiany dnia:

```cpp
#define REFRESH_HOUR 0
#define REFRESH_MINUTE 0
```

Deep sleep:

```cpp
#define ENABLE_DEEP_SLEEP 1
```

Uwaga: przed publikacją projektu na GitHub nie zostawiaj w kodzie prywatnego hasła do Wi-Fi.

## Wgrywanie

1. Otwórz projekt w Arduino IDE.
2. Zainstaluj obsługę płytek ESP32, jeśli nie jest jeszcze dodana.
3. Wybierz odpowiednią płytkę ESP32.
4. Ustaw dane Wi-Fi i lokalizację.
5. Skompiluj projekt.
6. Wgraj program na ESP32.

Jeśli projekt nie mieści się w pamięci programu, wybierz większy schemat partycji, np. wariant z większą przestrzenią na aplikację.

## Najważniejsze pliki

```text
kalendarz_ciekawostki_v2_polskie_znaki.ino  - główny program
date_digits.h                               - duże cyfry daty
fonts.h                                     - deklaracje fontów
font8.cpp / font12.cpp / font16.cpp
font20.cpp / font24.cpp                     - fonty z polskimi znakami
GUI_Paint.cpp / GUI_Paint.h                 - funkcje rysowania
EPD_7in5b_V2.cpp / EPD_7in5b_V2.h           - obsługa ekranu e-paper
historia_366_pl_ascii_5_na_dzien_rok_w_tekscie.h - ciekawostki historyczne
imieniny_rok.h                              - imieniny
swieta_dnia_rok.h                           - święta dnia
motta_366_v2_final.h                        - motto dnia
```

## Dane lokalne

Projekt korzysta z lokalnych tablic danych zapisanych w plikach nagłówkowych. Dzięki temu po pobraniu czasu z NTP nie musi pobierać z internetu treści kalendarza, imienin, świąt, mott ani ciekawostek historycznych.

## Polskie znaki

Projekt ma dodane polskie znaki w używanych fontach bitmapowych. Obsługiwane są między innymi:

```text
ą ć ę ł ń ó ś ź ż
Ą Ć Ę Ł Ń Ó Ś Ź Ż
```

Dzięki temu teksty mogą być przechowywane i wyświetlane w UTF-8.

## Planowane zmiany

- obsługa RTC DS3231,
- dodatkowe ciekawostki astronomiczne,
- konfiguracja przez WWW,
- łatwiejsza konfiguracja Wi-Fi bez edycji kodu,
- dalsza optymalizacja pamięci.

## Status projektu

Projekt jest rozwijany hobbystycznie. Sugestie, pomysły, poprawki oraz propozycje nowych funkcji są mile widziane.

