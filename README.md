# ESP32 E-Ink Daily Calendar

Projekt kalendarza dziennego na ESP32 z ekranem e-ink 7,5" B/W/R
WFT0583CZ61 800x480.

Urządzenie po połączeniu z Wi-Fi pobiera aktualny czas przez NTP i wyświetla codzienny ekran informacyjny.

## Funkcje

* aktualna data
* dzien tygodnia
* dzien roku
* swieto dnia
* imieniny
* motto dnia
* ciekawostki historyczne z danego dnia
* obsluga ekranu e-ink 7,5" 800x480
* praca bez RTC, synchronizacja czasu przez Wi-Fi
* dane zapisane lokalnie w plikach `.h`

## Hardware

* ESP32
* ekran e-ink 7,5" B/W/R 800x480
* sterownik Waveshare / kompatybilny
* zasilanie USB lub akumulator

## Pliki projektu

* `kalendarz_ciekawostki_v2.ino` — glowny program
* `motta_366_v2_final.h` — motto dnia
* `swieta_dnia_rok.h` — swieto dnia
* `historia_366_pl_ascii_5_na_dzien_rok_w_tekscie.h` — ciekawostki historyczne
* `imieniny_rok.h` — imieniny

## Konfiguracja

W pliku `.ino` nalezy ustawic dane Wi-Fi:

```cpp
const char* ssid = "NAZWA_WIFI";
const char* password = "HASLO_WIFI";
```

Po uruchomieniu ESP32 laczy sie z siecia, pobiera czas i odswieza ekran.

## Status projektu

Projekt jest w wersji roboczej.
Aktualnie nie uzywa modulu RTC. W przyszlosci mozna dodac DS3231 lub PCF8563, aby kalendarz dzialal poprawnie takze bez dostepu do Wi-Fi.

## Planowane funkcje

* obsluga RTC
* tryb oszczedzania energii
* konfiguracja przez plik lub panel WWW
* poprawki ukladu graficznego
* wersja z obudowa do druku 3D

## Licencja

Projekt hobbystyczny / DIY.
Mozesz uzyc, modyfikowac i rozwijac wedlug potrzeb.
