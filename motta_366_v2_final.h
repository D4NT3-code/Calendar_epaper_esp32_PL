#pragma once

// 366 mott przygotowanych pod ekran: dwie linie + podpis.
// Wersja v2 final: z polskimi znakami, bez duplikatów,
// line1 + spacja + line2 <= 66 znaków.
struct MottoItem { const char* line1; const char* line2; const char* author; };

const MottoItem DAILY_MOTTOS[] = {
  // 001
  {"Lepszy wróbel w garści", "niż gołąb na dachu.", "przysłowie"},
  // 002
  {"Nie od razu Kraków", "zbudowano.", "przysłowie"},
  // 003
  {"Bez pracy", "nie ma kołaczy.", "przysłowie"},
  // 004
  {"Co nagle,", "to po diable.", "przysłowie"},
  // 005
  {"Gdzie zgoda,", "tam siła.", "przysłowie"},
  // 006
  {"Kropla drąży skałę", "wytrwałością.", "przysłowie"},
  // 007
  {"Cierpliwość bywa gorzka,", "ale owoc ma słodki.", "przysłowie"},
  // 008
  {"Kto rano wstaje,", "temu Pan Bóg daje.", "przysłowie"},
  // 009
  {"Nie czyn drugiemu,", "co tobie niemiłe.", "przysłowie"},
  // 010
  {"Zgoda buduje,", "niezgoda rujnuje.", "przysłowie"},
  // 011
  {"Apetyt rośnie", "w miarę jedzenia.", "przysłowie"},
  // 012
  {"Fortuna kołem", "się toczy.", "przysłowie"},
  // 013
  {"Każdy jest kowalem", "swego losu.", "przysłowie"},
  // 014
  {"Mowa jest srebrem,", "milczenie złotem.", "przysłowie"},
  // 015
  {"Potrzeba jest matka", "wynalazków.", "przysłowie"},
  // 016
  {"Prawda sama", "się obroni.", "przysłowie"},
  // 017
  {"Z pustego", "i Salomon nie naleje.", "przysłowie"},
  // 018
  {"Nie ma dymu", "bez ognia.", "przysłowie"},
  // 019
  {"Darowanemu koniowi", "nie zagląda się w zęby.", "przysłowie"},
  // 020
  {"Kto sieje wiatr,", "ten zbiera burze.", "przysłowie"},
  // 021
  {"Nie chwal dnia", "przed zachodem slonca.", "przysłowie"},
  // 022
  {"Co dwie głowy,", "to niejedna.", "przysłowie"},
  // 023
  {"Lepiej pozno", "niż wcale.", "przysłowie"},
  // 024
  {"Nie wszystko złoto,", "co się świeci.", "przysłowie"},
  // 025
  {"Grosz do grosza,", "a będzie kokosza.", "przysłowie"},
  // 026
  {"Cicha woda", "brzegi rwie.", "przysłowie"},
  // 027
  {"Jak sobie pościelesz,", "tak się wyspisz.", "przysłowie"},
  // 028
  {"Kto pod kim dołki kopie,", "sam w nie wpada.", "przysłowie"},
  // 029
  {"Nie szata zdobi", "człowieka.", "przysłowie"},
  // 030
  {"Z kim przystajesz,", "takim się stajesz.", "przysłowie"},
  // 031
  {"Nie porzucaj nadziei,", "cokolwiek się dzieje.", "Kochanowski"},
  // 032
  {"Miej serce", "i patrzaj w serce.", "Mickiewicz"},
  // 033
  {"Szlachetne zdrowie", "docenia się po stracie.", "insp. Kochanowski"},
  // 034
  {"Miło szaleć,", "kiedy czas po temu.", "Kochanowski"},
  // 035
  {"Ojczyzna to wielki", "zbiorowy obowiązek.", "C. K. Norwid"},
  // 036
  {"Nie rzeczy nas martwią,", "lecz sądy o nich.", "Epiktet"},
  // 037
  {"Masz władzę nad umysłem,", "nie nad wydarzeniami.", "insp. Aureliusz"},
  // 038
  {"Najlepsza zemsta:", "nie stać się podobnym.", "Aureliusz"},
  // 039
  {"Życie ma taki kolor,", "jaki nadają mu myśli.", "insp. Aureliusz"},
  // 040
  {"Czas odsłania", "prawdę.", "Seneka"},
  // 041
  {"Nie dla szkoły,", "lecz dla życia się uczymy.", "Seneka"},
  // 042
  {"Trudności wzmacniają", "umysł.", "Seneka"},
  // 043
  {"Kto jest odważny,", "jest wolny.", "Seneka"},
  // 044
  {"Bogaty jest ten,", "kto ma dość.", "stoicy"},
  // 045
  {"Zacznij od tego,", "co zależy od ciebie.", "stoicy"},
  // 046
  {"Nie rzeczy nas ranią,", "lecz nasze sądy.", "insp. Epiktet"},
  // 047
  {"Kto panuje nad sobą,", "ma największą siłę.", "insp. Seneka"},
  // 048
  {"Mało potrzeba temu,", "kto ma umiar.", "insp. stoicy"},
  // 049
  {"Nie zwlekaj z życiem,", "bo czas nie czeka.", "insp. Seneka"},
  // 050
  {"Poznaj siebie,", "a łatwiej poznasz świat.", "insp. Sokrates"},
  // 051
  {"Wszystko płynie,", "nic nie stoi w miejscu.", "insp. Heraklit"},
  // 052
  {"Środek drogi", "uczy równowagi.", "insp. Arystoteles"},
  // 053
  {"Człowiek staje się tym,", "co powtarza.", "insp. Arystoteles"},
  // 054
  {"Spokój zaczyna się tam,", "gdzie kończy się przymus.", "insp. stoicy"},
  // 055
  {"Najważniejsze bywa", "niewidoczne w pośpiechu.", "insp. Mały Książę"},
  // 056
  {"Oswajasz to,", "czemu dajesz czas.", "insp. Mały Książę"},
  // 057
  {"Jedna róża wystarczy,", "jeśli naprawdę ją widzisz.", "insp. Mały Książę"},
  // 058
  {"Dobrze widzi się", "spokojnym sercem.", "insp. Mały Książę"},
  // 059
  {"Droga uczy wtedy,", "gdy nią idziesz.", "motto"},
  // 060
  {"Marzenie potrzebuje", "pierwszego kroku.", "motto"},
  // 061
  {"Nie każdy skarb", "błyszczy od razu.", "motto"},
  // 062
  {"Słuchaj ciszej,", "a usłyszysz więcej.", "motto"},
  // 063
  {"To, czego szukasz,", "czasem wraca do domu.", "motto"},
  // 064
  {"Zrób jedną rzecz", "dobrze.", "motto"},
  // 065
  {"Domykaj zamiast", "dokładać.", "motto"},
  // 066
  {"Mniej pośpiechu,", "więcej uwagi.", "motto"},
  // 067
  {"Dziś wystarczy", "prosty krok.", "motto"},
  // 068
  {"Niech dzień ma miejsce", "na oddech.", "motto"},
  // 069
  {"Spokój też bywa", "decyzją.", "motto"},
  // 070
  {"Mały postęp nadal", "jest postępem.", "motto"},
  // 071
  {"Nie wszystko", "naraz.", "motto"},
  // 072
  {"Zostaw trochę siły", "na jutro.", "motto"},
  // 073
  {"Zadbaj o to,", "co najbliższe.", "motto"},
  // 074
  {"Cisza czasem mówi", "więcej niż odpowiedź.", "motto"},
  // 075
  {"Nie każdy dzień musi", "być wielkim krokiem.", "motto"},
  // 076
  {"Zacznij spokojnie,", "a dalej pójdzie łatwiej.", "motto"},
  // 077
  {"Najpierw oddech,", "potem decyzja.", "motto"},
  // 078
  {"Małe rzeczy robione dobrze", "zmieniają duże sprawy.", "motto"},
  // 079
  {"Nie goń wszystkiego,", "wybierz to, co ważne.", "motto"},
  // 080
  {"Dzień nie musi być szybki,", "by był dobry.", "motto"},
  // 081
  {"Porządek zaczyna się", "od jednej rzeczy.", "motto"},
  // 082
  {"Nie odkładaj życia", "na później.", "motto"},
  // 083
  {"Spokój nie przychodzi sam,", "zrób mu miejsce.", "motto"},
  // 084
  {"Kto pyta,", "nie błądzi tak długo.", "motto"},
  // 085
  {"Najtrudniej zacząć,", "potem droga uczy.", "motto"},
  // 086
  {"Nie wszystko trzeba", "naprawić dziś.", "motto"},
  // 087
  {"Czasem mniej znaczy", "więcej miejsca.", "motto"},
  // 088
  {"Uwaga jest światłem", "dla prostych spraw.", "motto"},
  // 089
  {"Nie każda strata", "jest końcem drogi.", "motto"},
  // 090
  {"Zostaw za sobą to,", "co nie niesie dalej.", "motto"},
  // 091
  {"Niech prostota", "pracuje za ciebie.", "motto"},
  // 092
  {"Dobry rytm", "jest lepszy niż pośpiech.", "motto"},
  // 093
  {"Jedna dobra decyzja", "porządkuje cały dzień.", "motto"},
  // 094
  {"Nie walcz z cieniem,", "zapal światło.", "motto"},
  // 095
  {"Tam, gdzie jest uwaga,", "rośnie sens.", "motto"},
  // 096
  {"Nie każda odpowiedź", "przychodzi od razu.", "motto"},
  // 097
  {"Zaufaj krokowi,", "nie tylko planowi.", "motto"},
  // 098
  {"Dobra droga nie zawsze", "jest najkrótsza.", "motto"},
  // 099
  {"Nie musisz wiedzieć wszystkiego,", "by ruszyć.", "motto"},
  // 100
  {"Kiedy brakuje sił,", "zwolnij, nie rezygnuj.", "motto"},
  // 101
  {"Czasem odwagę widać", "w spokojnym wyborze.", "motto"},
  // 102
  {"Nie karm chaosu", "własną uwagą.", "motto"},
  // 103
  {"Mniej rzeczy,", "więcej miejsca na życie.", "motto"},
  // 104
  {"Dobry początek", "to połowa spokoju.", "motto"},
  // 105
  {"Nie wszystko, co ciche,", "jest puste.", "motto"},
  // 106
  {"Cierpliwość to siła", "bez hałasu.", "motto"},
  // 107
  {"Zmień tempo,", "nie cel.", "motto"},
  // 108
  {"To, co ważne,", "nie zawsze krzyczy.", "motto"},
  // 109
  {"Najpierw zrób miejsce,", "potem dodawaj.", "motto"},
  // 110
  {"Niech dzień będzie prosty,", "ale pełny uwagi.", "motto"},
  // 111
  {"Każdy poranek daje", "nowy margines.", "motto"},
  // 112
  {"Nie licz tylko czasu,", "licz obecność.", "motto"},
  // 113
  {"Drobny ład", "ratuje duży dzień.", "motto"},
  // 114
  {"Myśl jasno,", "działaj spokojnie.", "motto"},
  // 115
  {"Nie przyspieszaj serca", "dla cudzych spraw.", "motto"},
  // 116
  {"Czasem najlepszy plan", "to mniej planów.", "motto"},
  // 117
  {"Zrób mniej,", "ale naprawdę.", "motto"},
  // 118
  {"Niech twoje tak", "ma swój sens.", "motto"},
  // 119
  {"Nie każde nie", "jest porażką.", "motto"},
  // 120
  {"Granica też może", "być troską.", "motto"},
  // 121
  {"Dobra myśl", "potrzebuje ciszy.", "motto"},
  // 122
  {"Zbyt wiele naraz", "gasi uwagę.", "motto"},
  // 123
  {"Nawet mały krok", "zmienia miejsce.", "motto"},
  // 124
  {"Roślina nie spieszy się,", "a jednak rośnie.", "motto"},
  // 125
  {"Korzeń pracuje cicho,", "ale trzyma całość.", "motto"},
  // 126
  {"Każdy liść", "szuka swojego światła.", "motto"},
  // 127
  {"Wilgoć uczy cierpliwości,", "światło uczy miary.", "motto"},
  // 128
  {"Nie przelewaj troski,", "daj korzeniom oddech.", "motto"},
  // 129
  {"Najpierw obserwuj,", "potem podlewaj.", "motto"},
  // 130
  {"Mchy rosną tam,", "gdzie czas zwalnia.", "motto"},
  // 131
  {"Las nie potrzebuje hałasu,", "by być żywy.", "motto"},
  // 132
  {"Cień też jest", "częścią wzrostu.", "motto"},
  // 133
  {"Dobre światło", "nie musi krzyczeć.", "motto"},
  // 134
  {"Nie zgaduj,", "zmierz.", "motto"},
  // 135
  {"Dobry pomiar", "oszczędza domysły.", "motto"},
  // 136
  {"Najpierw schemat,", "potem lutowanie.", "motto"},
  // 137
  {"Prosty układ", "rzadziej zawodzi.", "motto"},
  // 138
  {"Każdy przewód", "lubi mieć opis.", "motto"},
  // 139
  {"Sprawdź masę,", "zanim szukasz błędu.", "motto"},
  // 140
  {"Kod działa lepiej,", "gdy jest prosty.", "motto"},
  // 141
  {"Jedna poprawka naraz", "ułatwia diagnozę.", "motto"},
  // 142
  {"Nie ufaj kablom,", "których nie sprawdziłeś.", "motto"},
  // 143
  {"Najlepszy system", "działa bez uwagi.", "motto"},
  // 144
  {"Cisza nie jest pusta,", "jest pełna śladów.", "motto"},
  // 145
  {"Poranek otwiera drzwi,", "których noc nie widzi.", "motto"},
  // 146
  {"Kropla pamięta drogę", "do kamienia.", "motto"},
  // 147
  {"Mgła nie ukrywa świata,", "tylko go wycisza.", "motto"},
  // 148
  {"Cień pokazuje,", "że światło jest blisko.", "motto"},
  // 149
  {"Niebo mieści się czasem", "w jednej kropli.", "motto"},
  // 150
  {"Najcichsze rzeczy", "zostają najdłużej.", "motto"},
  // 151
  {"Dzień dojrzewa powoli,", "jak owoc.", "motto"},
  // 152
  {"Kamień też pamięta", "dotyk wody.", "motto"},
  // 153
  {"Tam, gdzie milknie pośpiech,", "zaczyna się sens.", "motto"},
  // 154
  {"Oddychaj.", "To też działanie.", "motto"},
  // 155
  {"Mniej szumu.", "Więcej sensu.", "motto"},
  // 156
  {"Zmierz.", "Nie zgaduj.", "motto"},
  // 157
  {"Zwolnij.", "Nie rezygnuj.", "motto"},
  // 158
  {"Patrz uważnie.", "Świat odpowiada.", "motto"},
  // 159
  {"Nie wszystko trzeba", "nazywać od razu.", "motto"},
  // 160
  {"Daj sprawom czas,", "ale nie oddawaj steru.", "motto"},
  // 161
  {"Życie lubi ludzi,", "którzy zaczynają.", "motto"},
  // 162
  {"Nie zgub dnia", "w drobnych alarmach.", "motto"},
  // 163
  {"Czasem cisza", "naprawia więcej niż słowa.", "motto"},
  // 164
  {"Nie czekaj na pewność,", "zrób mały test.", "motto"},
  // 165
  {"Najpierw wersja prosta,", "potem ładna.", "motto"},
  // 166
  {"Dobry projekt", "ma mniej tajemnic.", "motto"},
  // 167
  {"Każdy błąd", "jest śladem przyczyny.", "motto"},
  // 168
  {"Jeśli coś grzeje się,", "szukaj straty.", "motto"},
  // 169
  {"Stabilne zasilanie", "daje spokojny kod.", "motto"},
  // 170
  {"Mniej kabli,", "mniej podejrzen.", "motto"},
  // 171
  {"Opisany przewód", "oszczędza godzinę.", "motto"},
  // 172
  {"Nie naprawiaj wszystkiego", "jednym ruchem.", "motto"},
  // 173
  {"Testuj powoli,", "notuj dokładnie.", "motto"},
  // 174
  {"Światło jest nawozem,", "gdy ma dobrą miarę.", "motto"},
  // 175
  {"Korzenie lubią spokój", "bardziej niż pośpiech.", "motto"},
  // 176
  {"Liść powie więcej", "niż etykieta.", "motto"},
  // 177
  {"Nie każda plama", "jest chorobą.", "motto"},
  // 178
  {"Wilgoć bez ruchu", "szybko staje się ciężka.", "motto"},
  // 179
  {"Roślina prosi ciszej", "niż człowiek.", "motto"},
  // 180
  {"Mech lubi czas,", "nie poganianie.", "motto"},
  // 181
  {"W naturze porządek", "nie zawsze jest prosty.", "motto"},
  // 182
  {"Las składa się", "z cierpliwych szczegółów.", "motto"},
  // 183
  {"Najmniejszy liść", "też szuka nieba.", "motto"},
  // 184
  {"Niech praca będzie", "mniejsza od sensu.", "motto"},
  // 185
  {"Rób swoje,", "ale nie gub siebie.", "motto"},
  // 186
  {"System rośnie dobrze,", "gdy ma proste zasady.", "motto"},
  // 187
  {"Nie dokładaj zadań,", "domykaj zaczęte.", "motto"},
  // 188
  {"Zrób najważniejsze,", "reszta poczeka.", "motto"},
  // 189
  {"Dobra lista", "skraca chaos.", "motto"},
  // 190
  {"Jedno skończone", "waży więcej niż pięć planów.", "motto"},
  // 191
  {"Nie myl ruchu", "z postępem.", "motto"},
  // 192
  {"Praca bez przerwy", "traci ostrość.", "motto"},
  // 193
  {"Najpierw sens,", "potem tempo.", "motto"},
  // 194
  {"Czas nie wraca,", "ale uczy wyboru.", "motto"},
  // 195
  {"Dzień ma tylko tyle,", "ile w nim uwagi.", "motto"},
  // 196
  {"Nie każda minuta", "musi coś udowadniać.", "motto"},
  // 197
  {"Poranek jest szkicem", "całego dnia.", "motto"},
  // 198
  {"Wieczór pokazuje,", "co było naprawdę ważne.", "motto"},
  // 199
  {"Nie oszczędzaj czasu", "na rzeczach bez sensu.", "motto"},
  // 200
  {"Czas lubi tych,", "którzy wybierają.", "motto"},
  // 201
  {"Jedna godzina ciszy", "zmienia cały dzień.", "motto"},
  // 202
  {"Nie wszystko dojrzewa", "w tym samym tempie.", "motto"},
  // 203
  {"Najlepszy moment", "często zaczyna się teraz.", "motto"},
  // 204
  {"Ucz się wolniej,", "ale głębiej.", "motto"},
  // 205
  {"Pytanie jest latarnią", "dla myśli.", "motto"},
  // 206
  {"Nie wierz pierwszej myśli,", "sprawdź drugą.", "motto"},
  // 207
  {"Dane bez uwagi", "są tylko szumem.", "motto"},
  // 208
  {"Każdy wynik", "potrzebuje kontekstu.", "motto"},
  // 209
  {"Niepewność", "to początek badania.", "motto"},
  // 210
  {"Eksperyment lubi", "czyste notatki.", "motto"},
  // 211
  {"Najpierw obserwacja,", "potem teoria.", "motto"},
  // 212
  {"Błąd pomiaru", "też jest informacją.", "motto"},
  // 213
  {"Kto mierzy,", "ten mniej zgaduje.", "motto"},
  // 214
  {"Mniej oczekiwań,", "więcej spokoju.", "motto"},
  // 215
  {"Nie wszystko zależy", "od twojej woli.", "motto"},
  // 216
  {"Wybierz reakcję,", "gdy nie wybierasz zdarzeń.", "motto"},
  // 217
  {"Spokój to trening,", "nie przypadek.", "motto"},
  // 218
  {"Najpierw odróżnij,", "co jest twoje.", "motto"},
  // 219
  {"Nie oddawaj dnia", "cudzym nastrojom.", "motto"},
  // 220
  {"Umiar daje więcej", "niż nadmiar.", "motto"},
  // 221
  {"Człowiek wolny", "nie musi wygrywać wszystkiego.", "motto"},
  // 222
  {"Nie noś jutra", "na dzisiejszych barkach.", "motto"},
  // 223
  {"Siła bywa cicha,", "gdy zna swój cel.", "motto"},
  // 224
  {"Najprostsza droga", "nie zawsze jest łatwa.", "motto"},
  // 225
  {"Prawda nie potrzebuje", "głośnego tonu.", "motto"},
  // 226
  {"Wolność zaczyna się", "od odpowiedzialności.", "motto"},
  // 227
  {"Kto zna granice,", "ma więcej miejsca.", "motto"},
  // 228
  {"Myśl bez ciszy", "szybko staje się echem.", "motto"},
  // 229
  {"Sens rodzi się", "z uważnego wyboru.", "motto"},
  // 230
  {"Nie każde pytanie", "chce szybkiej odpowiedzi.", "motto"},
  // 231
  {"Człowiek rośnie tam,", "gdzie przyjmuje prawdę.", "motto"},
  // 232
  {"Prostota bywa", "najtrudniejsza forma.", "motto"},
  // 233
  {"Nie każda droga", "prowadzi na zewnątrz.", "motto"},
  // 234
  {"Książka jest drzwiami", "bez klamki.", "motto"},
  // 235
  {"Jedno zdanie", "może zapalić dzień.", "motto"},
  // 236
  {"Słowa lubią ciszę", "bardziej niż pośpiech.", "motto"},
  // 237
  {"Czytaj powoli,", "myśl szeroko.", "motto"},
  // 238
  {"Dobra myśl", "wraca po czasie.", "motto"},
  // 239
  {"Opowieść zaczyna się tam,", "gdzie ktoś słucha.", "motto"},
  // 240
  {"Nie każda cisza", "jest końcem rozmowy.", "motto"},
  // 241
  {"Pamięć mieszka", "w małych zdaniach.", "motto"},
  // 242
  {"Krótkie słowo", "może mieć długi cień.", "motto"},
  // 243
  {"Pisz prosto,", "jeśli myśl jest ważna.", "motto"},
  // 244
  {"Zima uczy korzenie", "cierpliwości.", "motto"},
  // 245
  {"Wiosna zaczyna się", "od małego znaku.", "motto"},
  // 246
  {"Lato nie pyta,", "czy jesteś gotowy.", "motto"},
  // 247
  {"Jesień porządkuje", "to, co dojrzało.", "motto"},
  // 248
  {"Deszcz nie przeszkadza", "tym, którzy rosną.", "motto"},
  // 249
  {"Słońce nie wybiera", "tylko ładnych liści.", "motto"},
  // 250
  {"Nasiono zna drogę,", "zanim zobaczy niebo.", "motto"},
  // 251
  {"Gleba pamięta", "każdą troskę.", "motto"},
  // 252
  {"Nie ciągnij rośliny", "za liść.", "motto"},
  // 253
  {"Cierpliwy ogród", "odpłaca ciszą.", "motto"},
  // 254
  {"Dobre pytanie", "jest połową drogi.", "motto"},
  // 255
  {"Mapa nie jest drogą,", "ale pomaga iść.", "motto"},
  // 256
  {"Hipoteza lubi", "skromnosc.", "motto"},
  // 257
  {"Nie myl danych", "z mądrością.", "motto"},
  // 258
  {"Powtarzalność", "buduje zaufanie.", "motto"},
  // 259
  {"Najpierw sprawdź,", "potem oceniaj.", "motto"},
  // 260
  {"Wiedza rośnie tam,", "gdzie jest ciekawość.", "motto"},
  // 261
  {"Ciekawość", "otwiera zamkniete drzwi.", "motto"},
  // 262
  {"Myślenie zaczyna się", "od pauzy.", "motto"},
  // 263
  {"Nie bój się niewiedzy,", "bój się udawania.", "motto"},
  // 264
  {"Nie komplikuj,", "jeśli proste działa.", "motto"},
  // 265
  {"Zapas prądu", "to zapas spokoju.", "motto"},
  // 266
  {"Dobry log", "mówi prawdę po czasie.", "motto"},
  // 267
  {"Restart nie jest planem,", "jest sygnalem.", "motto"},
  // 268
  {"Zanim wymienisz część,", "sprawdź zasilanie.", "motto"},
  // 269
  {"Każdy projekt", "lubi dokumentacje.", "motto"},
  // 270
  {"Mały test", "chroni dużą pracę.", "motto"},
  // 271
  {"Niech kod tłumaczy", "sam siebie.", "motto"},
  // 272
  {"Działa to mało,", "rozumiesz to więcej.", "motto"},
  // 273
  {"Najlepsza poprawka", "nie psuje reszty.", "motto"},
  // 274
  {"Cisza w domu", "jest małym luksusem.", "motto"},
  // 275
  {"Nie każdy spokój", "przychodzi z zewnątrz.", "motto"},
  // 276
  {"Spokojny człowiek", "widzi więcej.", "motto"},
  // 277
  {"Nie dokarmiaj myśli,", "które kradną dzień.", "motto"},
  // 278
  {"Zwolnij oddech,", "a dzień zmieni ton.", "motto"},
  // 279
  {"Czasem trzeba usiąść,", "by ruszyć dalej.", "motto"},
  // 280
  {"Nie wszystko wymaga", "twojej reakcji.", "motto"},
  // 281
  {"Daj sobie miejsce", "na zwykly dzień.", "motto"},
  // 282
  {"Spokój nie jest pustką,", "jest porządkiem.", "motto"},
  // 283
  {"Najciszej wraca to,", "co najważniejsze.", "motto"},
  // 284
  {"Porażka to szkic", "lepszej próby.", "motto"},
  // 285
  {"Nie każdy błąd", "musi zostać raną.", "motto"},
  // 286
  {"Dziś nie musi", "wygrać z całym życiem.", "motto"},
  // 287
  {"Zostaw sobie prawo", "do poprawy.", "motto"},
  // 288
  {"Niech mała rzecz", "będzie zrobiona dobrze.", "motto"},
  // 289
  {"Odwaga często wygląda", "jak spokój.", "motto"},
  // 290
  {"Nie czekaj na nastrój,", "zacznij od kroku.", "motto"},
  // 291
  {"To, co codzienne,", "też buduje życie.", "motto"},
  // 292
  {"Najwięcej zmienia to,", "co powtarzasz.", "motto"},
  // 293
  {"Mniej porównań,", "więcej obecności.", "motto"},
  // 294
  {"Nie każda droga", "potrzebuje widowni.", "motto"},
  // 295
  {"Zadbaj o początek,", "koniec będzie łatwiejszy.", "motto"},
  // 296
  {"Dobre słowo", "nie traci wagi.", "motto"},
  // 297
  {"Nie wszystko, co pilne,", "jest ważne.", "motto"},
  // 298
  {"Najpierw człowiek,", "potem sprawa.", "motto"},
  // 299
  {"Kiedy masz wybór,", "wybierz prostotę.", "motto"},
  // 300
  {"Nie chowaj radości", "na specjalny dzień.", "motto"},
  // 301
  {"Mały ład", "jest początkiem wolności.", "motto"},
  // 302
  {"Niech odpoczynek", "też będzie zadaniem.", "motto"},
  // 303
  {"Zacznij od miejsca,", "w którym stoisz.", "motto"},
  // 304
  {"Rzeczy proste", "lubią być robione powoli.", "motto"},
  // 305
  {"Nie wymagaj od dnia", "żeby był wszystkim.", "motto"},
  // 306
  {"Czasem dobra decyzja", "to nic nie dodać.", "motto"},
  // 307
  {"Nie każda myśl", "zasługuje na miejsce.", "motto"},
  // 308
  {"Uwaga jest ogrodem,", "chwasty rosną same.", "motto"},
  // 309
  {"To, czemu dajesz uwagę,", "rośnie.", "motto"},
  // 310
  {"Nie rozpraszaj serca", "na drobne alarmy.", "motto"},
  // 311
  {"Patrz wolniej,", "zobaczysz więcej.", "motto"},
  // 312
  {"Skupienie jest mostem", "między planem a czynem.", "motto"},
  // 313
  {"Mniej bodźców,", "więcej myśli.", "motto"},
  // 314
  {"Nie każde powiadomienie", "jest sprawą.", "motto"},
  // 315
  {"Uwaga wraca tam,", "gdzie jest spokój.", "motto"},
  // 316
  {"Dzień bez uwagi", "łatwo staje się snem.", "motto"},
  // 317
  {"Kropla po kropli", "powstaje rzeka.", "motto"},
  // 318
  {"Noc nie gasi świata,", "tylko go chowa.", "motto"},
  // 319
  {"Gwiazdy widać lepiej,", "gdy gaśnie hałas.", "motto"},
  // 320
  {"Wiatr czyta drzewa", "bez słów.", "motto"},
  // 321
  {"Kamień milczy,", "ale trwa.", "motto"},
  // 322
  {"Światło znajduje drogę", "przez szczeliny.", "motto"},
  // 323
  {"Cień jest podpisem", "światła.", "motto"},
  // 324
  {"Mgła uczy,", "że nie wszystko trzeba widzieć.", "motto"},
  // 325
  {"Poranek ma zapach", "drugiej szansy.", "motto"},
  // 326
  {"Dzień kończy się ciszą,", "jeśli mu pozwolisz.", "motto"},
  // 327
  {"Kto chce iść daleko,", "idzie cierpliwie.", "motto"},
  // 328
  {"Nie każdy skręt", "jest zgubieniem drogi.", "motto"},
  // 329
  {"Droga zaczyna się", "pod stopami.", "motto"},
  // 330
  {"Mapa pomaga,", "ale krok prowadzi.", "motto"},
  // 331
  {"Nie spiesz się tak,", "by minąć widok.", "motto"},
  // 332
  {"Każda ścieżka", "uczy innego tempa.", "motto"},
  // 333
  {"Cel jest ważny,", "ale droga zmienia człowieka.", "motto"},
  // 334
  {"Zgubienie drogi", "czasem znajduje oczy.", "motto"},
  // 335
  {"Nie wszystko dalekie", "jest poza zasięgiem.", "motto"},
  // 336
  {"Idź prosto,", "gdy serce zna kierunek.", "motto"},
  // 337
  {"Dom to miejsce,", "gdzie oddech jest lżejszy.", "motto"},
  // 338
  {"Porządek w rzeczach", "pomaga myśli.", "motto"},
  // 339
  {"Niech dom nie będzie", "magazynem spraw.", "motto"},
  // 340
  {"Mniej rzeczy", "to więcej oddechu.", "motto"},
  // 341
  {"Dobra przestrzeń", "daje spokojny dzień.", "motto"},
  // 342
  {"Napraw małe,", "zanim stanie się duże.", "motto"},
  // 343
  {"Każda rzecz", "powinna mieć swoje miejsce.", "motto"},
  // 344
  {"Dom lubi rytm", "bardziej niż zryw.", "motto"},
  // 345
  {"Czysty stół", "uspokaja głowę.", "motto"},
  // 346
  {"Niech miejsce służy", "życiu, nie odwrotnie.", "motto"},
  // 347
  {"Nie kupuj pośpiechu,", "płaci się spokojem.", "motto"},
  // 348
  {"Oszczędzaj siły", "na sprawy z sensem.", "motto"},
  // 349
  {"Nie każda okazja", "jest twoja droga.", "motto"},
  // 350
  {"Mniej obietnic,", "więcej wykonania.", "motto"},
  // 351
  {"Zanim odpowiesz,", "zrozum.", "motto"},
  // 352
  {"Dobry dzień", "nie musi być idealny.", "motto"},
  // 353
  {"Nie czekaj na ciszę,", "zacznij ja robic.", "motto"},
  // 354
  {"Słowa są lekkie,", "czyny mają wagę.", "motto"},
  // 355
  {"Najmniejsza troska", "dana na czas jest wielka.", "motto"},
  // 356
  {"Niech wdzięczność", "ma swoje miejsce.", "motto"},
  // 357
  {"Dobre nawyki", "pracują po cichu.", "motto"},
  // 358
  {"Nie każdy sukces", "musi być głośny.", "motto"},
  // 359
  {"Siła to także", "umieć odpuścić.", "motto"},
  // 360
  {"Nie karm żalu,", "karm rozum.", "motto"},
  // 361
  {"Dzień bez gniewu", "jest lżejszy.", "motto"},
  // 362
  {"Umiar chroni", "przed nadmiarem pragnień.", "motto"},
  // 363
  {"Nie oddawaj steru", "chwilowej emocji.", "motto"},
  // 364
  {"Smutek też mija,", "jeśli go nie karmisz.", "motto"},
  // 365
  {"Wdzięczność skraca", "listę braków.", "motto"},
  // 366
  {"Nie musisz wygrać,", "by zachować spokój.", "motto"},
};

const int DAILY_MOTTO_COUNT = sizeof(DAILY_MOTTOS) / sizeof(DAILY_MOTTOS[0]);
