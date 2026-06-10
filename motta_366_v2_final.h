#pragma once

// 366 mott przygotowanych pod ekran: dwie linie + podpis.
// Wersja v2 final: bez polskich znakow, bez duplikatow,
// line1 + spacja + line2 <= 66 znakow.
struct MottoItem { const char* line1; const char* line2; const char* author; };

const MottoItem MOTTA_366[] = {
  // 001
  {"Lepszy wrobel w garsci", "niz golab na dachu.", "przyslowie"},
  // 002
  {"Nie od razu Krakow", "zbudowano.", "przyslowie"},
  // 003
  {"Bez pracy", "nie ma kolaczy.", "przyslowie"},
  // 004
  {"Co nagle,", "to po diable.", "przyslowie"},
  // 005
  {"Gdzie zgoda,", "tam sila.", "przyslowie"},
  // 006
  {"Kropla drazy skale", "wytrwaloscia.", "przyslowie"},
  // 007
  {"Cierpliwosc bywa gorzka,", "ale owoc ma slodki.", "przyslowie"},
  // 008
  {"Kto rano wstaje,", "temu Pan Bog daje.", "przyslowie"},
  // 009
  {"Nie czyn drugiemu,", "co tobie niemile.", "przyslowie"},
  // 010
  {"Zgoda buduje,", "niezgoda rujnuje.", "przyslowie"},
  // 011
  {"Apetyt rosnie", "w miare jedzenia.", "przyslowie"},
  // 012
  {"Fortuna kolem", "sie toczy.", "przyslowie"},
  // 013
  {"Kazdy jest kowalem", "swego losu.", "przyslowie"},
  // 014
  {"Mowa jest srebrem,", "milczenie zlotem.", "przyslowie"},
  // 015
  {"Potrzeba jest matka", "wynalazkow.", "przyslowie"},
  // 016
  {"Prawda sama", "sie obroni.", "przyslowie"},
  // 017
  {"Z pustego", "i Salomon nie naleje.", "przyslowie"},
  // 018
  {"Nie ma dymu", "bez ognia.", "przyslowie"},
  // 019
  {"Darowanemu koniowi", "nie zaglada sie w zeby.", "przyslowie"},
  // 020
  {"Kto sieje wiatr,", "ten zbiera burze.", "przyslowie"},
  // 021
  {"Nie chwal dnia", "przed zachodem slonca.", "przyslowie"},
  // 022
  {"Co dwie glowy,", "to nie jedna.", "przyslowie"},
  // 023
  {"Lepiej pozno", "niz wcale.", "przyslowie"},
  // 024
  {"Nie wszystko zloto,", "co sie swieci.", "przyslowie"},
  // 025
  {"Grosz do grosza,", "a bedzie kokosza.", "przyslowie"},
  // 026
  {"Cicha woda", "brzegi rwie.", "przyslowie"},
  // 027
  {"Jak sobie poscielesz,", "tak sie wyspisz.", "przyslowie"},
  // 028
  {"Kto pod kim dolki kopie,", "sam w nie wpada.", "przyslowie"},
  // 029
  {"Nie szata zdobi", "czlowieka.", "przyslowie"},
  // 030
  {"Z kim przystajesz,", "takim sie stajesz.", "przyslowie"},
  // 031
  {"Nie porzucaj nadziei,", "cokolwiek sie dzieje.", "Kochanowski"},
  // 032
  {"Miej serce", "i patrzaj w serce.", "Mickiewicz"},
  // 033
  {"Szlachetne zdrowie", "docenia sie po stracie.", "insp. Kochanowski"},
  // 034
  {"Milo szalec,", "kiedy czas po temu.", "Kochanowski"},
  // 035
  {"Ojczyzna to wielki", "zbiorowy obowiazek.", "C. K. Norwid"},
  // 036
  {"Nie rzeczy nas martwia,", "lecz sady o nich.", "Epiktet"},
  // 037
  {"Masz wladze nad umyslem,", "nie nad wydarzeniami.", "insp. Aureliusz"},
  // 038
  {"Najlepsza zemsta:", "nie stac sie podobnym.", "Aureliusz"},
  // 039
  {"Zycie ma taki kolor,", "jaki nadaja mu mysli.", "insp. Aureliusz"},
  // 040
  {"Czas odslania", "prawde.", "Seneka"},
  // 041
  {"Nie dla szkoly,", "lecz dla zycia sie uczymy.", "Seneka"},
  // 042
  {"Trudnosci wzmacniaja", "umysl.", "Seneka"},
  // 043
  {"Kto jest odwazny,", "jest wolny.", "Seneka"},
  // 044
  {"Bogaty jest ten,", "kto ma dosc.", "stoicy"},
  // 045
  {"Zacznij od tego,", "co zalezy od ciebie.", "stoicy"},
  // 046
  {"Nie rzeczy nas rania,", "lecz nasze sady.", "insp. Epiktet"},
  // 047
  {"Kto panuje nad soba,", "ma najwieksza sile.", "insp. Seneka"},
  // 048
  {"Malo potrzeba temu,", "kto ma umiar.", "insp. stoicy"},
  // 049
  {"Nie zwlekaj z zyciem,", "bo czas nie czeka.", "insp. Seneka"},
  // 050
  {"Poznaj siebie,", "a latwiej poznasz swiat.", "insp. Sokrates"},
  // 051
  {"Wszystko plynie,", "nic nie stoi w miejscu.", "insp. Heraklit"},
  // 052
  {"Srodek drogi", "uczy rownowagi.", "insp. Arystoteles"},
  // 053
  {"Czlowiek staje sie tym,", "co powtarza.", "insp. Arystoteles"},
  // 054
  {"Spokoj zaczyna sie tam,", "gdzie konczy sie przymus.", "insp. stoicy"},
  // 055
  {"Najwazniejsze bywa", "niewidoczne w pospiechu.", "insp. Maly Ksiaze"},
  // 056
  {"Oswajasz to,", "czemu dajesz czas.", "insp. Maly Ksiaze"},
  // 057
  {"Jedna roza wystarczy,", "jesli naprawde ja widzisz.", "insp. Maly Ksiaze"},
  // 058
  {"Dobrze widzi sie", "spokojnym sercem.", "insp. Maly Ksiaze"},
  // 059
  {"Droga uczy wtedy,", "gdy nia idziesz.", "motto codzienne"},
  // 060
  {"Marzenie potrzebuje", "pierwszego kroku.", "motto codzienne"},
  // 061
  {"Nie kazdy skarb", "blyszczy od razu.", "motto codzienne"},
  // 062
  {"Sluchaj ciszej,", "a uslyszysz wiecej.", "motto codzienne"},
  // 063
  {"To, czego szukasz,", "czasem wraca do domu.", "motto codzienne"},
  // 064
  {"Zrob jedna rzecz", "dobrze.", "motto codzienne"},
  // 065
  {"Domykaj zamiast", "dokladac.", "motto codzienne"},
  // 066
  {"Mniej pospiechu,", "wiecej uwagi.", "motto codzienne"},
  // 067
  {"Dzis wystarczy", "prosty krok.", "motto codzienne"},
  // 068
  {"Niech dzien ma miejsce", "na oddech.", "motto codzienne"},
  // 069
  {"Spokoj tez bywa", "decyzja.", "motto codzienne"},
  // 070
  {"Maly postep nadal", "jest postepem.", "motto codzienne"},
  // 071
  {"Nie wszystko", "naraz.", "motto codzienne"},
  // 072
  {"Zostaw troche sily", "na jutro.", "motto codzienne"},
  // 073
  {"Zadbaj o to,", "co najblizsze.", "motto codzienne"},
  // 074
  {"Cisza czasem mowi", "wiecej niz odpowiedz.", "motto o ciszy"},
  // 075
  {"Nie kazdy dzien musi", "byc wielkim krokiem.", "motto codzienne"},
  // 076
  {"Zacznij spokojnie,", "a dalej pojdzie latwiej.", "motto codzienne"},
  // 077
  {"Najpierw oddech,", "potem decyzja.", "motto codzienne"},
  // 078
  {"Male rzeczy robione dobrze", "zmieniaja duze sprawy.", "motto codzienne"},
  // 079
  {"Nie gon wszystkiego,", "wybierz to, co wazne.", "motto codzienne"},
  // 080
  {"Dzien nie musi byc szybki,", "by byl dobry.", "motto codzienne"},
  // 081
  {"Porzadek zaczyna sie", "od jednej rzeczy.", "motto codzienne"},
  // 082
  {"Nie odkladaj zycia", "na pozniej.", "motto codzienne"},
  // 083
  {"Spokoj nie przychodzi sam,", "zrob mu miejsce.", "motto codzienne"},
  // 084
  {"Kto pyta,", "nie bladzi tak dlugo.", "motto codzienne"},
  // 085
  {"Najtrudniej zaczac,", "potem droga uczy.", "motto codzienne"},
  // 086
  {"Nie wszystko trzeba", "naprawic dzis.", "motto codzienne"},
  // 087
  {"Czasem mniej znaczy", "wiecej miejsca.", "motto codzienne"},
  // 088
  {"Uwaga jest swiatlem", "dla prostych spraw.", "motto o uwadze"},
  // 089
  {"Nie kazda strata", "jest koncem drogi.", "motto codzienne"},
  // 090
  {"Zostaw za soba to,", "co nie niesie dalej.", "motto codzienne"},
  // 091
  {"Niech prostota", "pracuje za ciebie.", "motto codzienne"},
  // 092
  {"Dobry rytm", "jest lepszy niz pospiech.", "motto codzienne"},
  // 093
  {"Jedna dobra decyzja", "porzadkuje caly dzien.", "motto codzienne"},
  // 094
  {"Nie walcz z cieniem,", "zapal swiatlo.", "motto codzienne"},
  // 095
  {"Tam, gdzie jest uwaga,", "rosnie sens.", "motto o uwadze"},
  // 096
  {"Nie kazda odpowiedz", "przychodzi od razu.", "motto codzienne"},
  // 097
  {"Zaufaj krokowi,", "nie tylko planowi.", "motto codzienne"},
  // 098
  {"Dobra droga nie zawsze", "jest najkrotsza.", "motto codzienne"},
  // 099
  {"Nie musisz wiedziec wszystkiego,", "by ruszyc.", "motto codzienne"},
  // 100
  {"Kiedy brakuje sil,", "zwolnij, nie rezygnuj.", "motto codzienne"},
  // 101
  {"Czasem odwage widac", "w spokojnym wyborze.", "motto codzienne"},
  // 102
  {"Nie karm chaosu", "wlasna uwaga.", "motto o uwadze"},
  // 103
  {"Mniej rzeczy,", "wiecej miejsca na zycie.", "motto codzienne"},
  // 104
  {"Dobry poczatek", "to polowa spokoju.", "motto codzienne"},
  // 105
  {"Nie wszystko, co ciche,", "jest puste.", "motto o ciszy"},
  // 106
  {"Cierpliwosc to sila", "bez halasu.", "motto stoickie"},
  // 107
  {"Zmien tempo,", "nie cel.", "motto codzienne"},
  // 108
  {"To, co wazne,", "nie zawsze krzyczy.", "motto codzienne"},
  // 109
  {"Najpierw zrob miejsce,", "potem dodawaj.", "motto codzienne"},
  // 110
  {"Niech dzien bedzie prosty,", "ale pelny uwagi.", "motto codzienne"},
  // 111
  {"Kazdy poranek daje", "nowy margines.", "motto codzienne"},
  // 112
  {"Nie licz tylko czasu,", "licz obecnosc.", "motto codzienne"},
  // 113
  {"Drobny lad", "ratuje duzy dzien.", "motto codzienne"},
  // 114
  {"Mysl jasno,", "dzialaj spokojnie.", "motto codzienne"},
  // 115
  {"Nie przyspieszaj serca", "dla cudzych spraw.", "motto codzienne"},
  // 116
  {"Czasem najlepszy plan", "to mniej planow.", "motto codzienne"},
  // 117
  {"Zrob mniej,", "ale naprawde.", "motto codzienne"},
  // 118
  {"Niech twoje tak", "ma swoj sens.", "motto codzienne"},
  // 119
  {"Nie kazde nie", "jest porazka.", "motto codzienne"},
  // 120
  {"Granica tez moze", "byc troska.", "motto codzienne"},
  // 121
  {"Dobra mysl", "potrzebuje ciszy.", "motto o ciszy"},
  // 122
  {"Zbyt wiele naraz", "gasi uwage.", "motto o uwadze"},
  // 123
  {"Nawet maly krok", "zmienia miejsce.", "motto codzienne"},
  // 124
  {"Roslina nie spieszy sie,", "a jednak rosnie.", "motto przyrodnicze"},
  // 125
  {"Korzen pracuje cicho,", "ale trzyma calosc.", "motto przyrodnicze"},
  // 126
  {"Kazdy lisc", "szuka swojego swiatla.", "motto przyrodnicze"},
  // 127
  {"Wilgoc uczy cierpliwosci,", "swiatlo uczy miary.", "motto ogrodnika"},
  // 128
  {"Nie przelewaj troski,", "daj korzeniom oddech.", "motto ogrodnika"},
  // 129
  {"Najpierw obserwuj,", "potem podlewaj.", "motto ogrodnika"},
  // 130
  {"Mchy rosna tam,", "gdzie czas zwalnia.", "motto przyrodnicze"},
  // 131
  {"Las nie potrzebuje halasu,", "by byc zywy.", "motto przyrodnicze"},
  // 132
  {"Cien tez jest", "czescia wzrostu.", "motto przyrodnicze"},
  // 133
  {"Dobre swiatlo", "nie musi krzyczec.", "motto ogrodnika"},
  // 134
  {"Nie zgaduj,", "zmierz.", "motto techniczne"},
  // 135
  {"Dobry pomiar", "oszczedza domysly.", "motto techniczne"},
  // 136
  {"Najpierw schemat,", "potem lutowanie.", "motto techniczne"},
  // 137
  {"Prosty uklad", "rzadziej zawodzi.", "motto techniczne"},
  // 138
  {"Kazdy przewod", "lubi miec opis.", "motto techniczne"},
  // 139
  {"Sprawdz mase,", "zanim szukasz bledu.", "motto techniczne"},
  // 140
  {"Kod dziala lepiej,", "gdy jest prosty.", "motto techniczne"},
  // 141
  {"Jedna poprawka naraz", "ulatwia diagnoze.", "motto techniczne"},
  // 142
  {"Nie ufaj kablom,", "ktorych nie sprawdziles.", "motto techniczne"},
  // 143
  {"Najlepszy system", "dziala bez uwagi.", "motto techniczne"},
  // 144
  {"Cisza nie jest pusta,", "jest pelna sladow.", "motto poetyckie"},
  // 145
  {"Poranek otwiera drzwi,", "ktorych noc nie widzi.", "motto poetyckie"},
  // 146
  {"Kropla pamieta droge", "do kamienia.", "motto poetyckie"},
  // 147
  {"Mgla nie ukrywa swiata,", "tylko go wycisza.", "motto poetyckie"},
  // 148
  {"Cien pokazuje,", "ze swiatlo jest blisko.", "motto poetyckie"},
  // 149
  {"Niebo miesci sie czasem", "w jednej kropli.", "motto poetyckie"},
  // 150
  {"Najcichsze rzeczy", "zostaja najdluzej.", "motto poetyckie"},
  // 151
  {"Dzien dojrzewa powoli,", "jak owoc.", "motto poetyckie"},
  // 152
  {"Kamien tez pamieta", "dotyk wody.", "motto poetyckie"},
  // 153
  {"Tam, gdzie milknie pospiech,", "zaczyna sie sens.", "motto poetyckie"},
  // 154
  {"Oddychaj.", "To tez dzialanie.", "motto codzienne"},
  // 155
  {"Mniej szumu.", "Wiecej sensu.", "motto codzienne"},
  // 156
  {"Zmierz.", "Nie zgaduj.", "motto techniczne"},
  // 157
  {"Zwolnij.", "Nie rezygnuj.", "motto stoickie"},
  // 158
  {"Patrz uwaznie.", "Swiat odpowiada.", "motto poetyckie"},
  // 159
  {"Nie wszystko trzeba", "nazywac od razu.", "motto codzienne"},
  // 160
  {"Daj sprawom czas,", "ale nie oddawaj steru.", "motto codzienne"},
  // 161
  {"Zycie lubi ludzi,", "ktorzy zaczynaja.", "motto codzienne"},
  // 162
  {"Nie zgub dnia", "w drobnych alarmach.", "motto codzienne"},
  // 163
  {"Czasem cisza", "naprawia wiecej niz slowa.", "motto o ciszy"},
  // 164
  {"Nie czekaj na pewnosc,", "zrob maly test.", "motto techniczne"},
  // 165
  {"Najpierw wersja prosta,", "potem ladna.", "motto techniczne"},
  // 166
  {"Dobry projekt", "ma mniej tajemnic.", "motto techniczne"},
  // 167
  {"Kazdy blad", "jest sladami przyczyny.", "motto techniczne"},
  // 168
  {"Jesli cos grzeje sie,", "szukaj straty.", "motto techniczne"},
  // 169
  {"Stabilne zasilanie", "daje spokojny kod.", "motto techniczne"},
  // 170
  {"Mniej kabli,", "mniej podejrzen.", "motto techniczne"},
  // 171
  {"Opisany przewod", "oszczedza godzine.", "motto techniczne"},
  // 172
  {"Nie naprawiaj wszystkiego", "jednym ruchem.", "motto techniczne"},
  // 173
  {"Testuj powoli,", "notuj dokladnie.", "motto techniczne"},
  // 174
  {"Swiatlo jest nawozem,", "gdy ma dobra miare.", "motto ogrodnika"},
  // 175
  {"Korzenie lubia spokoj", "bardziej niz pospiech.", "motto ogrodnika"},
  // 176
  {"Lisc powie wiecej", "niz etykieta.", "motto ogrodnika"},
  // 177
  {"Nie kazda plama", "jest choroba.", "motto ogrodnika"},
  // 178
  {"Wilgoc bez ruchu", "szybko staje sie ciezka.", "motto ogrodnika"},
  // 179
  {"Roslina prosi ciszej", "niz czlowiek.", "motto przyrodnicze"},
  // 180
  {"Moss lubi czas,", "nie poganianie.", "motto przyrodnicze"},
  // 181
  {"W naturze porzadek", "nie zawsze jest prosty.", "motto przyrodnicze"},
  // 182
  {"Las sklada sie", "z cierpliwych szczegolow.", "motto przyrodnicze"},
  // 183
  {"Najmniejszy lisc", "tez szuka nieba.", "motto przyrodnicze"},
  // 184
  {"Niech praca bedzie", "mniejsza od sensu.", "motto o pracy"},
  // 185
  {"Rob swoje,", "ale nie gub siebie.", "motto o pracy"},
  // 186
  {"System rosnie dobrze,", "gdy ma proste zasady.", "motto o pracy"},
  // 187
  {"Nie dokladaj zadan,", "domykaj zaczete.", "motto o pracy"},
  // 188
  {"Zrob najwazniejsze,", "reszta poczeka.", "motto o pracy"},
  // 189
  {"Dobra lista", "skraca chaos.", "motto o pracy"},
  // 190
  {"Jedno skonczone", "wazy wiecej niz piec planow.", "motto o pracy"},
  // 191
  {"Nie myl ruchu", "z postepem.", "motto o pracy"},
  // 192
  {"Praca bez przerwy", "traci ostrosc.", "motto o pracy"},
  // 193
  {"Najpierw sens,", "potem tempo.", "motto o pracy"},
  // 194
  {"Czas nie wraca,", "ale uczy wyboru.", "motto o czasie"},
  // 195
  {"Dzien ma tylko tyle,", "ile w nim uwagi.", "motto o czasie"},
  // 196
  {"Nie kazda minuta", "musi cos udowadniac.", "motto o czasie"},
  // 197
  {"Poranek jest szkicem", "calego dnia.", "motto o czasie"},
  // 198
  {"Wieczor pokazuje,", "co bylo naprawde wazne.", "motto o czasie"},
  // 199
  {"Nie oszczedzaj czasu", "na rzeczach bez sensu.", "motto o czasie"},
  // 200
  {"Czas lubi tych,", "ktorzy wybieraja.", "motto o czasie"},
  // 201
  {"Jedna godzina ciszy", "zmienia caly dzien.", "motto o czasie"},
  // 202
  {"Nie wszystko dojrzewa", "w tym samym tempie.", "motto o czasie"},
  // 203
  {"Najlepszy moment", "czesto zaczyna sie teraz.", "motto o czasie"},
  // 204
  {"Ucz sie wolniej,", "ale glebiej.", "motto naukowe"},
  // 205
  {"Pytanie jest latarnia", "dla mysli.", "motto naukowe"},
  // 206
  {"Nie wierz pierwszej mysli,", "sprawdz druga.", "motto naukowe"},
  // 207
  {"Dane bez uwagi", "sa tylko szumem.", "motto naukowe"},
  // 208
  {"Kazdy wynik", "potrzebuje kontekstu.", "motto naukowe"},
  // 209
  {"Niepewnosc", "to poczatek badania.", "motto naukowe"},
  // 210
  {"Eksperyment lubi", "czyste notatki.", "motto naukowe"},
  // 211
  {"Najpierw obserwacja,", "potem teoria.", "motto naukowe"},
  // 212
  {"Blad pomiaru", "tez jest informacja.", "motto naukowe"},
  // 213
  {"Kto mierzy,", "ten mniej zgaduje.", "motto naukowe"},
  // 214
  {"Mniej oczekiwan,", "wiecej spokoju.", "motto stoickie"},
  // 215
  {"Nie wszystko zalezy", "od twojej woli.", "motto stoickie"},
  // 216
  {"Wybierz reakcje,", "gdy nie wybierasz zdarzen.", "motto stoickie"},
  // 217
  {"Spokoj to trening,", "nie przypadek.", "motto stoickie"},
  // 218
  {"Najpierw odroznij,", "co jest twoje.", "motto stoickie"},
  // 219
  {"Nie oddawaj dnia", "cudzym nastrojom.", "motto stoickie"},
  // 220
  {"Umiar daje wiecej", "niz nadmiar.", "motto stoickie"},
  // 221
  {"Czlowiek wolny", "nie musi wygrywac wszystkiego.", "motto stoickie"},
  // 222
  {"Nie nos jutra", "na dzisiejszych barkach.", "motto stoickie"},
  // 223
  {"Sila bywa cicha,", "gdy zna swoj cel.", "motto stoickie"},
  // 224
  {"Najprostsza droga", "nie zawsze jest latwa.", "motto filozoficzne"},
  // 225
  {"Prawda nie potrzebuje", "glosnego tonu.", "motto filozoficzne"},
  // 226
  {"Wolnosc zaczyna sie", "od odpowiedzialnosci.", "motto filozoficzne"},
  // 227
  {"Kto zna granice,", "ma wiecej miejsca.", "motto filozoficzne"},
  // 228
  {"Mysl bez ciszy", "szybko staje sie echem.", "motto filozoficzne"},
  // 229
  {"Sens rodzi sie", "z uwaznego wyboru.", "motto filozoficzne"},
  // 230
  {"Nie kazde pytanie", "chce szybkiej odpowiedzi.", "motto filozoficzne"},
  // 231
  {"Czlowiek rosnie tam,", "gdzie przyjmuje prawde.", "motto filozoficzne"},
  // 232
  {"Prostota bywa", "najtrudniejsza forma.", "motto filozoficzne"},
  // 233
  {"Nie kazda droga", "prowadzi na zewnatrz.", "motto filozoficzne"},
  // 234
  {"Ksiazka jest drzwiami", "bez klamki.", "motto literackie"},
  // 235
  {"Jedno zdanie", "moze zapalic dzien.", "motto literackie"},
  // 236
  {"Slowa lubia cisze", "bardziej niz pospiech.", "motto literackie"},
  // 237
  {"Czytaj powoli,", "mysl szeroko.", "motto literackie"},
  // 238
  {"Dobra mysl", "wraca po czasie.", "motto literackie"},
  // 239
  {"Opowiesc zaczyna sie tam,", "gdzie ktos slucha.", "motto literackie"},
  // 240
  {"Nie kazda cisza", "jest koncem rozmowy.", "motto literackie"},
  // 241
  {"Pamiec mieszka", "w malych zdaniach.", "motto literackie"},
  // 242
  {"Krotkie slowo", "moze miec dlugi cien.", "motto literackie"},
  // 243
  {"Pisz prosto,", "jesli mysl jest wazna.", "motto literackie"},
  // 244
  {"Zima uczy korzenie", "cierpliwosci.", "motto przyrodnicze"},
  // 245
  {"Wiosna zaczyna sie", "od malego znaku.", "motto przyrodnicze"},
  // 246
  {"Lato nie pyta,", "czy jestes gotowy.", "motto przyrodnicze"},
  // 247
  {"Jesien porzadkuje", "to, co dojrzalo.", "motto przyrodnicze"},
  // 248
  {"Deszcz nie przeszkadza", "tym, ktorzy rosna.", "motto przyrodnicze"},
  // 249
  {"Slonce nie wybiera", "tylko ladnych lisci.", "motto przyrodnicze"},
  // 250
  {"Nasiono zna droge,", "zanim zobaczy niebo.", "motto przyrodnicze"},
  // 251
  {"Gleba pamieta", "kazda troske.", "motto ogrodnika"},
  // 252
  {"Nie ciagnij rosliny", "za lisc.", "motto ogrodnika"},
  // 253
  {"Cierpliwy ogrod", "odplaca cisza.", "motto ogrodnika"},
  // 254
  {"Dobre pytanie", "jest polowa drogi.", "motto naukowe"},
  // 255
  {"Mapa nie jest droga,", "ale pomaga isc.", "motto naukowe"},
  // 256
  {"Hipoteza lubi", "skromnosc.", "motto naukowe"},
  // 257
  {"Nie myl danych", "z madroscia.", "motto naukowe"},
  // 258
  {"Powtarzalnosc", "buduje zaufanie.", "motto naukowe"},
  // 259
  {"Najpierw sprawdz,", "potem oceniaj.", "motto naukowe"},
  // 260
  {"Wiedza rosnie tam,", "gdzie jest ciekawosc.", "motto naukowe"},
  // 261
  {"Ciekawosc", "otwiera zamkniete drzwi.", "motto naukowe"},
  // 262
  {"Myslenie zaczyna sie", "od pauzy.", "motto naukowe"},
  // 263
  {"Nie boj sie nie wiem,", "boj sie udawania.", "motto naukowe"},
  // 264
  {"Nie komplikuj,", "jesli proste dziala.", "motto techniczne"},
  // 265
  {"Zapas pradu", "to zapas spokoju.", "motto techniczne"},
  // 266
  {"Dobry log", "mowi prawde po czasie.", "motto techniczne"},
  // 267
  {"Restart nie jest planem,", "jest sygnalem.", "motto techniczne"},
  // 268
  {"Zanim wymienisz czesc,", "sprawdz zasilanie.", "motto techniczne"},
  // 269
  {"Kazdy projekt", "lubi dokumentacje.", "motto techniczne"},
  // 270
  {"Maly test", "chroni duza prace.", "motto techniczne"},
  // 271
  {"Niech kod tlumaczy", "sam siebie.", "motto techniczne"},
  // 272
  {"Dziala to malo,", "rozumiesz to wiecej.", "motto techniczne"},
  // 273
  {"Najlepsza poprawka", "nie psuje reszty.", "motto techniczne"},
  // 274
  {"Cisza w domu", "jest malym luksusem.", "motto o ciszy"},
  // 275
  {"Nie kazdy spokoj", "przychodzi z zewnatrz.", "motto o spokoju"},
  // 276
  {"Spokojny czlowiek", "widzi wiecej.", "motto o spokoju"},
  // 277
  {"Nie dokarmiaj mysli,", "ktore kradna dzien.", "motto o spokoju"},
  // 278
  {"Zwolnij oddech,", "a dzien zmieni ton.", "motto o spokoju"},
  // 279
  {"Czasem trzeba usiasc,", "by ruszyc dalej.", "motto o spokoju"},
  // 280
  {"Nie wszystko wymaga", "twojej reakcji.", "motto o spokoju"},
  // 281
  {"Daj sobie miejsce", "na zwykly dzien.", "motto o spokoju"},
  // 282
  {"Spokoj nie jest pustka,", "jest porzadkiem.", "motto o spokoju"},
  // 283
  {"Najciszej wraca to,", "co najwazniejsze.", "motto o spokoju"},
  // 284
  {"Porazka to szkic", "lepszej proby.", "motto codzienne"},
  // 285
  {"Nie kazdy blad", "musi zostac rana.", "motto codzienne"},
  // 286
  {"Dzis nie musi", "wygrac z calym zyciem.", "motto codzienne"},
  // 287
  {"Zostaw sobie prawo", "do poprawy.", "motto codzienne"},
  // 288
  {"Niech mala rzecz", "bedzie zrobiona dobrze.", "motto codzienne"},
  // 289
  {"Odwaga czesto wyglada", "jak spokoj.", "motto codzienne"},
  // 290
  {"Nie czekaj na nastroj,", "zacznij od kroku.", "motto codzienne"},
  // 291
  {"To, co codzienne,", "tez buduje zycie.", "motto codzienne"},
  // 292
  {"Najwiecej zmienia to,", "co powtarzasz.", "motto codzienne"},
  // 293
  {"Mniej porownan,", "wiecej obecnosci.", "motto codzienne"},
  // 294
  {"Nie kazda droga", "potrzebuje widowni.", "motto codzienne"},
  // 295
  {"Zadbaj o poczatek,", "koniec bedzie latwiejszy.", "motto codzienne"},
  // 296
  {"Dobre slowo", "nie traci wagi.", "motto codzienne"},
  // 297
  {"Nie wszystko, co pilne,", "jest wazne.", "motto codzienne"},
  // 298
  {"Najpierw czlowiek,", "potem sprawa.", "motto codzienne"},
  // 299
  {"Kiedy masz wybor,", "wybierz prostote.", "motto codzienne"},
  // 300
  {"Nie chowaj radosci", "na specjalny dzien.", "motto codzienne"},
  // 301
  {"Maly lad", "jest poczatkiem wolnosci.", "motto codzienne"},
  // 302
  {"Niech odpoczynek", "tez bedzie zadaniem.", "motto codzienne"},
  // 303
  {"Zacznij od miejsca,", "w ktorym stoisz.", "motto codzienne"},
  // 304
  {"Rzeczy proste", "lubia byc robione powoli.", "motto codzienne"},
  // 305
  {"Nie wymagaj od dnia", "zeby byl wszystkim.", "motto codzienne"},
  // 306
  {"Czasem dobra decyzja", "to nic nie dodac.", "motto codzienne"},
  // 307
  {"Nie kazda mysl", "zasluguje na miejsce.", "motto o uwadze"},
  // 308
  {"Uwaga jest ogrodem,", "chwasty rosna same.", "motto o uwadze"},
  // 309
  {"To, czemu dajesz uwage,", "rosnie.", "motto o uwadze"},
  // 310
  {"Nie rozpraszaj serca", "na drobne alarmy.", "motto o uwadze"},
  // 311
  {"Patrz wolniej,", "zobaczysz wiecej.", "motto o uwadze"},
  // 312
  {"Skupienie jest mostem", "miedzy planem a czynem.", "motto o uwadze"},
  // 313
  {"Mniej bodzcow,", "wiecej mysli.", "motto o uwadze"},
  // 314
  {"Nie kazde powiadomienie", "jest sprawa.", "motto o uwadze"},
  // 315
  {"Uwaga wraca tam,", "gdzie jest spokoj.", "motto o uwadze"},
  // 316
  {"Dzien bez uwagi", "latwo staje sie snem.", "motto o uwadze"},
  // 317
  {"Kropla po kropli", "powstaje rzeka.", "motto poetyckie"},
  // 318
  {"Noc nie gasi swiata,", "tylko go chowa.", "motto poetyckie"},
  // 319
  {"Gwiazdy widac lepiej,", "gdy gasnie halas.", "motto poetyckie"},
  // 320
  {"Wiatr czyta drzewa", "bez slow.", "motto poetyckie"},
  // 321
  {"Kamien milczy,", "ale trwa.", "motto poetyckie"},
  // 322
  {"Swiatlo znajduje droge", "przez szczeliny.", "motto poetyckie"},
  // 323
  {"Cien jest podpisem", "swiatla.", "motto poetyckie"},
  // 324
  {"Mgla uczy,", "ze nie wszystko trzeba widziec.", "motto poetyckie"},
  // 325
  {"Poranek ma zapach", "drugiej szansy.", "motto poetyckie"},
  // 326
  {"Dzien konczy sie cisza,", "jesli mu pozwolisz.", "motto poetyckie"},
  // 327
  {"Kto chce isc daleko,", "idzie cierpliwie.", "motto wedrowca"},
  // 328
  {"Nie kazdy skret", "jest zgubieniem drogi.", "motto wedrowca"},
  // 329
  {"Droga zaczyna sie", "pod stopami.", "motto wedrowca"},
  // 330
  {"Mapa pomaga,", "ale krok prowadzi.", "motto wedrowca"},
  // 331
  {"Nie spiesz sie tak,", "by minac widok.", "motto wedrowca"},
  // 332
  {"Kazda sciezka", "uczy innego tempa.", "motto wedrowca"},
  // 333
  {"Cel jest wazny,", "ale droga zmienia czlowieka.", "motto wedrowca"},
  // 334
  {"Zgubienie drogi", "czasem znajduje oczy.", "motto wedrowca"},
  // 335
  {"Nie wszystko dalekie", "jest poza zasiegiem.", "motto wedrowca"},
  // 336
  {"Idz prosto,", "gdy serce zna kierunek.", "motto wedrowca"},
  // 337
  {"Dom to miejsce,", "gdzie oddech jest lzejszy.", "motto domowe"},
  // 338
  {"Porzadek w rzeczach", "pomaga mysli.", "motto domowe"},
  // 339
  {"Niech dom nie bedzie", "magazynem spraw.", "motto domowe"},
  // 340
  {"Mniej rzeczy", "to wiecej oddechu.", "motto domowe"},
  // 341
  {"Dobra przestrzen", "daje spokojny dzien.", "motto domowe"},
  // 342
  {"Napraw male,", "zanim stanie sie duze.", "motto domowe"},
  // 343
  {"Kazda rzecz", "powinna miec swoje miejsce.", "motto domowe"},
  // 344
  {"Dom lubi rytm", "bardziej niz zryw.", "motto domowe"},
  // 345
  {"Czysty stol", "uspokaja glowe.", "motto domowe"},
  // 346
  {"Niech miejsce sluzy", "zyciu, nie odwrotnie.", "motto domowe"},
  // 347
  {"Nie kupuj pospiechu,", "placi sie spokojem.", "motto codzienne"},
  // 348
  {"Oszczedzaj sily", "na sprawy z sensem.", "motto codzienne"},
  // 349
  {"Nie kazda okazja", "jest twoja droga.", "motto codzienne"},
  // 350
  {"Mniej obietnic,", "wiecej wykonania.", "motto codzienne"},
  // 351
  {"Zanim odpowiesz,", "zrozum.", "motto codzienne"},
  // 352
  {"Dobry dzien", "nie musi byc idealny.", "motto codzienne"},
  // 353
  {"Nie czekaj na cisze,", "zacznij ja robic.", "motto o ciszy"},
  // 354
  {"Slowa sa lekkie,", "czyny maja wage.", "motto codzienne"},
  // 355
  {"Najmniejsza troska", "dana na czas jest wielka.", "motto codzienne"},
  // 356
  {"Niech wdziecznosc", "ma swoje miejsce.", "motto codzienne"},
  // 357
  {"Dobre nawyki", "pracuja po cichu.", "motto codzienne"},
  // 358
  {"Nie kazdy sukces", "musi byc glosny.", "motto codzienne"},
  // 359
  {"Sila to takze", "umiec odpuscic.", "motto stoickie"},
  // 360
  {"Nie karm zalu,", "karm rozum.", "motto stoickie"},
  // 361
  {"Dzien bez gniewu", "jest lzejszy.", "motto stoickie"},
  // 362
  {"Umiar chroni", "przed nadmiarem pragnien.", "motto stoickie"},
  // 363
  {"Nie oddawaj steru", "chwilowej emocji.", "motto stoickie"},
  // 364
  {"Smutek tez mija,", "jesli go nie karmisz.", "motto stoickie"},
  // 365
  {"Wdziecznosc skraca", "liste brakow.", "motto stoickie"},
  // 366
  {"Nie musisz wygrac,", "by zachowac spokoj.", "motto stoickie"},
};

const int MOTTA_366_COUNT = sizeof(MOTTA_366) / sizeof(MOTTA_366[0]);
