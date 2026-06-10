#ifndef HISTORIA_366_H
#define HISTORIA_366_H

// Baza 366 dni do e-paper / Arduino.
// Tekst ASCII: bez polskich znakow, krotkie opisy do malych ekranow.
// Kazdy dzien ma 5 wpisow. Wpisy z year=0 sa swietami, kategoriami lub notatkami kalendarzowymi.

struct HistoryEvent {
  int year;
  const char* text;
};

struct HistoryDay {
  const HistoryEvent* events;
  int count;
};

// 01.01
const HistoryEvent HIST_001[] = {
  { 0, "[Historia] Nowy Rok: poczatek roku kalendarzowego." },
  { 1999, "[Polska] W Polsce weszla w zycie reforma administracyjna i 16 wojewodztw. (1999)" },
  { 1801, "[Swiat] Odkryto pierwsza planetoide, Ceres. (1801)" },
  { 2024, "[Kultura] Wygasla ochrona praw autorskich do pierwszej wersji Myszki Miki. (2024)" },
  { 1863, "[Nauka] Urodzil sie Pierre de Coubertin, odnowiciel igrzysk olimpijskich. (1863)" },
};

// 02.01
const HistoryEvent HIST_002[] = {
  { 2024, "[Historia] Kolizja samolotow na lotnisku Haneda w Tokio. (2024)" },
  { 1939, "[Polska] Zmarl Roman Dmowski, polityk i wspoltworca niepodleglej Polski. (1939)" },
  { 1492, "[Swiat] Zdobycie Grenady zakonczylo rekonkwiste w Hiszpanii. (1492)" },
  { 1959, "[Nauka] Luna 1 zostala pierwsza sonda wyslana w kierunku Ksiezyca. (1959)" },
  { 1920, "[Kultura] Urodzil sie Isaac Asimov, pisarz science fiction. (1920)" },
};

// 03.01
const HistoryEvent HIST_003[] = {
  { 1959, "[Historia] Alaska zostala 49. stanem USA. (1959)" },
  { 1661, "[Polska] Wydano pierwszy numer Merkuriusza Polskiego. (1661)" },
  { 1521, "[Swiat] Papiez Leon X ekskomunikowal Marcina Lutra. (1521)" },
  { 2004, "[Nauka] Sonda Stardust przeleciala obok komety Wild 2. (2004)" },
  { 1892, "[Kultura] Urodzil sie J.R.R. Tolkien, autor Wladcy Pierscieni. (1892)" },
};

// 04.01
const HistoryEvent HIST_004[] = {
  { 2010, "[Historia] Otwarto Burj Khalifa, najwyzszy budynek swiata. (2010)" },
  { 2019, "[Polska] Tragiczny pozar escape roomu w Koszalinie. (2019)" },
  { 1948, "[Swiat] Birma oglosila niepodleglosc od Wielkiej Brytanii. (1948)" },
  { 1643, "[Nauka] Urodzil sie Isaac Newton wedlug kalendarza gregorianskiego. (1643)" },
  { 1785, "[Kultura] Urodzil sie Jacob Grimm, badacz basni i jezyka. (1785)" },
};

// 05.01
const HistoryEvent HIST_005[] = {
  { 2005, "[Nauka] Odkryto planete karlowata Eris. (2005)" },
  { 2024, "[Historia] Awaryjne ladowanie lotu Alaska Airlines 1282. (2024)" },
  { 1909, "[Polska] Urodzil sie Stefan Kisielewski, pisarz i publicysta. (1909)" },
  { 1895, "[Swiat] Alfred Dreyfus zostal zdegradowany w Paryzu. (1895)" },
  { 1932, "[Kultura] Urodzil sie Umberto Eco, pisarz i semiotyk. (1932)" },
};

// 06.01
const HistoryEvent HIST_006[] = {
  { 0, "[Historia] Swieto Trzech Kroli w Polsce." },
  { 2021, "[Historia] Zwolennicy Donalda Trumpa wtargneli do Kapitolu USA. (2021)" },
  { 1919, "[Polska] Rozpoczely sie obrady Sejmu Dzielnicowego w Poznaniu. (1919)" },
  { 1838, "[Swiat] Samuel Morse publicznie zaprezentowal telegraf. (1838)" },
  { 1884, "[Kultura] Zmarl Gregor Mendel, tworca podstaw genetyki. (1884)" },
};

// 07.01
const HistoryEvent HIST_007[] = {
  { 2015, "[Historia] Atak na redakcje Charlie Hebdo w Paryzu. (2015)" },
  { 1949, "[Polska] Urodzil sie Zbigniew Preisner, kompozytor muzyki filmowej. (1949)" },
  { 1785, "[Swiat] Francuz Jean-Pierre Blanchard przelecial balonem nad kanalem La Manche. (1785)" },
  { 1610, "[Nauka] Galileusz zaobserwowal ksiezyce Jowisza. (1610)" },
  { 1927, "[Kultura] Pierwsza transatlantycka rozmowa telefoniczna Nowy Jork-Londyn. (1927)" },
};

// 08.01
const HistoryEvent HIST_008[] = {
  { 1935, "[Kultura] Urodzil sie Elvis Presley. (1935)" },
  { 1942, "[Nauka] Urodzil sie Stephen Hawking. (1942)" },
  { 1894, "[Polska] Urodzil sie Maksymilian Maria Kolbe. (1894)" },
  { 1918, "[Swiat] Prezydent USA Woodrow Wilson oglosil program czternastu punktow. (1918)" },
  { 1642, "[Historia] Zmarl Galileusz. (1642)" },
};

// 09.01
const HistoryEvent HIST_009[] = {
  { 2007, "[Nauka] Steve Jobs zaprezentowal pierwszego iPhonea. (2007)" },
  { 1797, "[Polska] Powstaly Legiony Polskie we Wloszech pod dowodztwem Jana Henryka Dabrowskiego. (1797)" },
  { 1951, "[Swiat] Otwarto siedzibe ONZ w Nowym Jorku. (1951)" },
  { 1908, "[Kultura] Urodzila sie Simone de Beauvoir, pisarka i filozofka. (1908)" },
  { 1861, "[Historia] Missisipi wystapilo z Unii przed wojna secesyjna. (1861)" },
};

// 10.01
const HistoryEvent HIST_010[] = {
  { 1920, "[Historia] Weszl w zycie traktat wersalski po I wojnie swiatowej. (1920)" },
  { 1945, "[Polska] Rozpoczela sie ofensywa zimowa Armii Czerwonej na ziemiach polskich. (1945)" },
  { 1863, "[Swiat] Otwarto pierwsza linie metra w Londynie. (1863)" },
  { 1946, "[Nauka] Po raz pierwszy odebrano fale radarowe odbite od Ksiezyca. (1946)" },
  { 1927, "[Kultura] Premiera filmu Metropolis Fritza Langa w Berlinie. (1927)" },
};

// 11.01
const HistoryEvent HIST_011[] = {
  { 2020, "[Historia] Chiny oglosily pierwszy zgon zwiazany z COVID-19. (2020)" },
  { 1940, "[Polska] W Warszawie rozpoczal dzialalnosc teatr konspiracyjny w czasie okupacji. (1940)" },
  { 1922, "[Swiat] Po raz pierwszy zastosowano insuline u chorego na cukrzyce. (1922)" },
  { 1787, "[Nauka] William Herschel odkryl Tytanie i Oberona, ksiezyce Urana. (1787)" },
  { 1842, "[Kultura] Urodzil sie William James, psycholog i filozof. (1842)" },
};

// 12.01
const HistoryEvent HIST_012[] = {
  { 1966, "[Kultura] Rozpoczal emisje serial Batman w USA. (1966)" },
  { 1993, "[Polska] Zmarl Jozef Czapski, malarz i pisarz. (1993)" },
  { 2010, "[Swiat] Trzesienie ziemi zniszczylo duza czesc Haiti. (2010)" },
  { 1908, "[Nauka] Wyslano pierwszy dalekodystansowy komunikat radiowy z wiezy Eiffla. (1908)" },
  { 1876, "[Historia] Urodzil sie Jack London, pisarz. (1876)" },
};

// 13.01
const HistoryEvent HIST_013[] = {
  { 1964, "[Kultura] The Beatles wydali singiel I Want to Hold Your Hand w USA. (1964)" },
  { 1964, "[Polska] Karol Wojtyla zostal mianowany arcybiskupem metropolita krakowskim. (1964)" },
  { 1898, "[Swiat] Emile Zola opublikowal list J accuse w obronie Dreyfusa. (1898)" },
  { 1610, "[Nauka] Galileusz odkryl Kallisto, ksiezyc Jowisza. (1610)" },
  { 1941, "[Historia] Zmarl James Joyce, autor Ulissesa. (1941)" },
};

// 14.01
const HistoryEvent HIST_014[] = {
  { 2024, "[Historia] Krolowa Danii Malgorzata II abdykowala po 52 latach panowania. (2024)" },
  { 1993, "[Polska] Zatonal prom Jan Heweliusz na Morzu Baltyckim. (1993)" },
  { 1954, "[Swiat] Marilyn Monroe poslubila Joe DiMaggio. (1954)" },
  { 2005, "[Nauka] Sonda Huygens wyladowala na Tytanie. (2005)" },
  { 1875, "[Kultura] Urodzil sie Albert Schweitzer, lekarz, filozof i muzyk. (1875)" },
};

// 15.01
const HistoryEvent HIST_015[] = {
  { 2001, "[Nauka] Uruchomiono Wikipedie. (2001)" },
  { 1945, "[Polska] Armia Czerwona zajela Kielce w czasie ofensywy styczniowej. (1945)" },
  { 1559, "[Swiat] Koronowano Elzbiete I na krolowa Anglii. (1559)" },
  { 1759, "[Kultura] Otwarto British Museum w Londynie. (1759)" },
  { 1929, "[Historia] Urodzil sie Martin Luther King Jr. (1929)" },
};

// 16.01
const HistoryEvent HIST_016[] = {
  { 2003, "[Nauka] Prom kosmiczny Columbia wystartowal do ostatniej misji STS-107. (2003)" },
  { 1945, "[Polska] Armia Czerwona zajela Radom w czasie II wojny swiatowej. (1945)" },
  { 1547, "[Swiat] Iwan IV Grozny koronowal sie na cara Rosji. (1547)" },
  { 1909, "[Historia] Ekspedycja Shackletona dotarla najdalej na poludnie w Antarktyce. (1909)" },
  { 1933, "[Kultura] Urodzila sie Susan Sontag, pisarka i eseistka. (1933)" },
};

// 17.01
const HistoryEvent HIST_017[] = {
  { 1991, "[Historia] Rozpoczela sie operacja Pustynna Burza. (1991)" },
  { 1945, "[Polska] Armia Czerwona i Wojsko Polskie wkroczyly do zrujnowanej Warszawy. (1945)" },
  { 1899, "[Swiat] Urodzil sie Al Capone, gangster z Chicago. (1899)" },
  { 1773, "[Nauka] James Cook jako pierwszy przekroczyl kolo podbiegunowe poludniowe. (1773)" },
  { 1706, "[Kultura] Urodzil sie Benjamin Franklin. (1706)" },
};

// 18.01
const HistoryEvent HIST_018[] = {
  { 1919, "[Historia] Rozpoczela sie konferencja pokojowa w Paryzu po I wojnie swiatowej. (1919)" },
  { 1945, "[Polska] Wyzwolono Krakow spod okupacji niemieckiej. (1945)" },
  { 1871, "[Swiat] Proklamowano Cesarstwo Niemieckie w Wersalu. (1871)" },
  { 2005, "[Nauka] Airbus A380 zostal publicznie zaprezentowany w Tuluzie. (2005)" },
  { 1882, "[Kultura] Urodzil sie A.A. Milne, autor Kubusia Puchatka. (1882)" },
};

// 19.01
const HistoryEvent HIST_019[] = {
  { 1983, "[Nauka] Wprowadzono na rynek komputer Apple Lisa. (1983)" },
  { 1947, "[Polska] Odbyly sie wybory do Sejmu Ustawodawczego w Polsce. (1947)" },
  { 1809, "[Swiat] Urodzil sie Edgar Allan Poe. (1809)" },
  { 2006, "[Nauka] Sonda New Horizons wystartowala w kierunku Plutona. (2006)" },
  { 1839, "[Kultura] Urodzil sie Paul Cezanne, malarz. (1839)" },
};

// 20.01
const HistoryEvent HIST_020[] = {
  { 1961, "[Historia] John F. Kennedy zostal zaprzysiezony na prezydenta USA. (1961)" },
  { 1320, "[Polska] Wladyslaw Lokietek zostal koronowany na krola Polski. (1320)" },
  { 1942, "[Swiat] Odbyla sie konferencja w Wannsee dotyczaca Zaglady Zydow. (1942)" },
  { 1930, "[Nauka] Buzz Aldrin, astronauta Apollo 11, urodzil sie w USA. (1930)" },
  { 1920, "[Kultura] Urodzil sie Federico Fellini, rezyser filmowy. (1920)" },
};

// 21.01
const HistoryEvent HIST_021[] = {
  { 1793, "[Historia] Stracono krola Francji Ludwika XVI. (1793)" },
  { 1919, "[Polska] Rozpoczela sie wojna polsko-czechoslowacka o Slask Cieszynski. (1919)" },
  { 1924, "[Swiat] Zmarl Wlodzimierz Lenin. (1924)" },
  { 1976, "[Nauka] Rozpoczely sie regularne loty Concorde. (1976)" },
  { 1905, "[Kultura] Urodzil sie Christian Dior, projektant mody. (1905)" },
};

// 22.01
const HistoryEvent HIST_022[] = {
  { 1905, "[Historia] Krwawa Niedziela w Petersburgu zapoczatkowala rewolucje 1905 roku. (1905)" },
  { 1863, "[Polska] Wybuchlo powstanie styczniowe. (1863)" },
  { 1973, "[Swiat] Sadowy wyrok Roe v. Wade ogloszono w USA. (1973)" },
  { 1984, "[Nauka] Apple wyemitowal reklame 1984 komputera Macintosh. (1984)" },
  { 1788, "[Kultura] Urodzil sie George Gordon Byron, poeta. (1788)" },
};

// 23.01
const HistoryEvent HIST_023[] = {
  { 1579, "[Historia] Podpisano unie utrechcka, wazny krok w historii Niderlandow. (1579)" },
  { 1793, "[Polska] Rosja i Prusy podpisaly drugi rozbior Polski. (1793)" },
  { 1960, "[Swiat] Batyskaf Trieste osiagnal dno Rowu Marianskiego. (1960)" },
  { 1849, "[Nauka] Elizabeth Blackwell zostala pierwsza lekarka z dyplomem w USA. (1849)" },
  { 1832, "[Kultura] Urodzil sie Edouard Manet, malarz. (1832)" },
};

// 24.01
const HistoryEvent HIST_024[] = {
  { 1984, "[Nauka] Apple zaprezentowal komputer Macintosh. (1984)" },
  { 1588, "[Polska] Bitwa pod Byczyna zakonczyla wojne o tron polski. (1588)" },
  { 1848, "[Swiat] Rozpoczela sie goraczka zlota w Kalifornii. (1848)" },
  { 1966, "[Historia] Katastrofa lotu Air India 101 na Mont Blanc. (1966)" },
  { 1776, "[Kultura] Urodzil sie E.T.A. Hoffmann, pisarz i kompozytor. (1776)" },
};

// 25.01
const HistoryEvent HIST_025[] = {
  { 1924, "[Historia] Rozpoczely sie pierwsze Zimowe Igrzyska Olimpijskie w Chamonix. (1924)" },
  { 1831, "[Polska] Sejm oglosil detronizacje cara Mikolaja I jako krola Polski. (1831)" },
  { 1949, "[Swiat] Pierwsza ceremonia rozdania nagrod Emmy. (1949)" },
  { 1909, "[Nauka] Richard Strauss zaprezentowal opere Elektra w Dreznie. (1909)" },
  { 1882, "[Kultura] Urodzila sie Virginia Woolf, pisarka. (1882)" },
};

// 26.01
const HistoryEvent HIST_026[] = {
  { 1950, "[Historia] Indie przyjely konstytucje i staly sie republika. (1950)" },
  { 1919, "[Polska] Odbyly sie wybory do Sejmu Ustawodawczego II RP. (1919)" },
  { 1788, "[Swiat] Do Australii przybyla Pierwsza Flota brytyjska. (1788)" },
  { 1926, "[Nauka] John Logie Baird zademonstrowal telewizje. (1926)" },
  { 1880, "[Kultura] Urodzil sie Douglas MacArthur, dowodca wojskowy. (1880)" },
};

// 27.01
const HistoryEvent HIST_027[] = {
  { 1945, "[Historia] Wyzwolono niemiecki oboz Auschwitz-Birkenau. (1945)" },
  { 0, "[Historia] Miedzynarodowy Dzien Pamieci o Ofiarach Holokaustu." },
  { 1945, "[Polska] Armia Czerwona wyzwolila Auschwitz-Birkenau. (1945)" },
  { 1967, "[Swiat] Podpisano traktat o przestrzeni kosmicznej. (1967)" },
  { 1756, "[Kultura] Urodzil sie Wolfgang Amadeusz Mozart. (1756)" },
};

// 28.01
const HistoryEvent HIST_028[] = {
  { 1986, "[Nauka] Katastrofa promu kosmicznego Challenger. (1986)" },
  { 1573, "[Polska] Uchwalono konfederacje warszawska, akt tolerancji religijnej. (1573)" },
  { 814, "[Swiat] Zmarl Karol Wielki. (814)" },
  { 1887, "[Historia] Rozpoczela sie budowa wiezy Eiffla. (1887)" },
  { 1813, "[Kultura] Ukazala sie Duma i uprzedzenie Jane Austen. (1813)" },
};

// 29.01
const HistoryEvent HIST_029[] = {
  { 1886, "[Historia] Karl Benz opatentowal pierwszy samochod z silnikiem spalinowym. (1886)" },
  { 1944, "[Polska] Oddzialy AK wykonaly akcje Kutschera w Warszawie. (1944)" },
  { 1845, "[Swiat] Kruk Edgara Allana Poe zostal opublikowany w Nowym Jorku. (1845)" },
  { 1861, "[Nauka] Kansas zostal 34. stanem USA. (1861)" },
  { 1964, "[Kultura] Premiera filmu Dr Strangelove Stanleya Kubricka. (1964)" },
};

// 30.01
const HistoryEvent HIST_030[] = {
  { 1948, "[Historia] Zamordowano Mahatme Gandhiego. (1948)" },
  { 1667, "[Polska] Rozejm w Andruszowie zakonczyl wojne polsko-rosyjska. (1667)" },
  { 1933, "[Swiat] Adolf Hitler zostal kanclerzem Niemiec. (1933)" },
  { 1964, "[Nauka] NASA wystrzelila sonde Ranger 6 w kierunku Ksiezyca. (1964)" },
  { 1882, "[Kultura] Urodzil sie Franklin D. Roosevelt. (1882)" },
};

// 31.01
const HistoryEvent HIST_031[] = {
  { 1958, "[Historia] Wystrzelono Explorer 1, pierwszego satelite USA. (1958)" },
  { 1865, "[Polska] Urodzil sie Michal Sokolnicki, dyplomata i historyk. (1865)" },
  { 1606, "[Swiat] Stracono Guya Fawkesa za udzial w spisku prochowym. (1606)" },
  { 1961, "[Nauka] Szympans Ham polecial w kosmos w kapsule Mercury. (1961)" },
  { 1797, "[Kultura] Urodzil sie Franz Schubert, kompozytor. (1797)" },
};

// 01.02
const HistoryEvent HIST_032[] = {
  { 2003, "[Nauka] Katastrofa promu kosmicznego Columbia podczas powrotu na Ziemie. (2003)" },
  { 1411, "[Polska] Zakonczono wielka wojne z Krzyzakami pokojem torunskim. (1411)" },
  { 1884, "[Swiat] Ukazal sie pierwszy tom Oxford English Dictionary. (1884)" },
  { 1896, "[Kultura] Premiera opery Cyganeria Giacoma Pucciniego. (1896)" },
  { 1946, "[Historia] Trygve Lie zostal pierwszym sekretarzem generalnym ONZ. (1946)" },
};

// 02.02
const HistoryEvent HIST_033[] = {
  { 0, "[Historia] Swiatowy Dzien Mokradel, wazny dla ochrony przyrody." },
  { 1943, "[Historia] Zakonczyla sie bitwa stalingradzka. (1943)" },
  { 1959, "[Nauka] Sonda Luna 1 jako pierwszy obiekt minela okolice Ksiezyca. (1959)" },
  { 1709, "[Polska] Urodzil sie Stanislaw Konarski, reformator szkolnictwa. (1709)" },
  { 1882, "[Kultura] Urodzil sie James Joyce, autor Ulissesa. (1882)" },
};

// 03.02
const HistoryEvent HIST_034[] = {
  { 1959, "[Kultura] Zgineli Buddy Holly, Ritchie Valens i The Big Bopper. (1959)" },
  { 1468, "[Nauka] Zmarl Johannes Gutenberg, pionier druku ruchoma czcionka. (1468)" },
  { 1735, "[Polska] Urodzil sie Ignacy Krasicki, poeta i biskup. (1735)" },
  { 1913, "[Historia] Weszla w zycie 16. poprawka do konstytucji USA. (1913)" },
  { 1966, "[Swiat] Sonda Luna 9 miekkko wyladowala na Ksiezycu. (1966)" },
};

// 04.02
const HistoryEvent HIST_035[] = {
  { 2004, "[Nauka] Powstal Facebook, poczatkowo dla studentow Harvardu. (2004)" },
  { 1746, "[Polska] Urodzil sie Tadeusz Kosciuszko. (1746)" },
  { 1945, "[Historia] Rozpoczela sie konferencja jaltanska. (1945)" },
  { 0, "[Historia] Swiatowy Dzien Walki z Rakiem." },
  { 1966, "[Nauka] Luna 9 przeslala pierwsze zdjecia z powierzchni Ksiezyca. (1966)" },
};

// 05.02
const HistoryEvent HIST_036[] = {
  { 1971, "[Nauka] Apollo 14 wyladowal na Ksiezycu. (1971)" },
  { 1919, "[Kultura] Powstala wytwornia United Artists. (1919)" },
  { 1818, "[Swiat] Jean-Baptiste Bernadotte zostal krolem Szwecji i Norwegii. (1818)" },
  { 1937, "[Polska] Urodzil sie Janusz Muniak, saksofonista jazzowy. (1937)" },
  { 1988, "[Historia] Manuel Noriega zostal oskarzony w USA o przemyt narkotykow. (1988)" },
};

// 06.02
const HistoryEvent HIST_037[] = {
  { 1952, "[Historia] Elzbieta II zostala krolowa Wielkiej Brytanii. (1952)" },
  { 1918, "[Polska] Urodzil sie Andrzej Szczypiorski, pisarz. (1918)" },
  { 1895, "[Kultura] Urodzil sie Babe Ruth, legenda baseballu. (1895)" },
  { 1935, "[Historia] Wprowadzono gre Monopoly w USA. (1935)" },
  { 1971, "[Nauka] Alan Shepard uderzal pilki golfowe na Ksiezycu. (1971)" },
};

// 07.02
const HistoryEvent HIST_038[] = {
  { 1992, "[Historia] Podpisano traktat z Maastricht, podstawe Unii Europejskiej. (1992)" },
  { 1964, "[Kultura] The Beatles przylecieli po raz pierwszy do USA. (1964)" },
  { 1822, "[Swiat] Liberia zostala zalozona jako osada dla wyzwolonych Afroamerykanow. (1822)" },
  { 1999, "[Nauka] Wystartowala sonda Stardust do komety Wild 2. (1999)" },
  { 1974, "[Polska] Premiera filmu Potop w rezyserii Jerzego Hoffmana. (1974)" },
};

// 08.02
const HistoryEvent HIST_039[] = {
  { 1828, "[Kultura] Urodzil sie Juliusz Verne, pisarz fantastyki naukowej. (1828)" },
  { 1587, "[Historia] Stracono Marie Stuart, krolowa Szkotow. (1587)" },
  { 1904, "[Swiat] Japonia zaatakowala Port Arthur przed wojna z Rosja. (1904)" },
  { 1950, "[Polska] Utworzono Towarzystwo Wiedzy Powszechnej. (1950)" },
  { 1960, "[Nauka] Rozpoczeto prace nad radioteleskopem Arecibo. (1960)" },
};

// 09.02
const HistoryEvent HIST_040[] = {
  { 1964, "[Kultura] The Beatles wystapili w programie Ed Sullivan Show. (1964)" },
  { 1943, "[Polska] Niemcy dokonali pacyfikacji wsi Parosla na Wolyniu. (1943)" },
  { 1950, "[Historia] Joseph McCarthy rozpoczal glosna kampanie antykomunistyczna. (1950)" },
  { 1865, "[Swiat] Urodzil sie Erich von Drygalski, badacz Antarktydy. (1865)" },
  { 1996, "[Nauka] Odkryto pierwiastek 112, pozniej nazwany kopernikiem. (1996)" },
};

// 10.02
const HistoryEvent HIST_041[] = {
  { 1996, "[Nauka] Komputer Deep Blue po raz pierwszy pokonal mistrza swiata w szachach. (1996)" },
  { 1920, "[Polska] Odbyly sie zaslubiny Polski z Morzem w Pucku. (1920)" },
  { 1763, "[Historia] Pokoj paryski zakonczyl wojne siedmioletnia. (1763)" },
  { 1890, "[Kultura] Urodzil sie Borys Pasternak, pisarz. (1890)" },
  { 1947, "[Swiat] Podpisano traktaty pokojowe po II wojnie swiatowej. (1947)" },
};

// 11.02
const HistoryEvent HIST_042[] = {
  { 0, "[Historia] Europejski Dzien Numeru Alarmowego 112." },
  { 1929, "[Historia] Podpisano traktaty lateranskie, powstalo Panstwo Watykanskie. (1929)" },
  { 1847, "[Nauka] Urodzil sie Thomas Edison, wynalazca. (1847)" },
  { 1975, "[Polska] Zmarl Nikifor Krynicki, malarz prymitywista. (1975)" },
  { 1990, "[Swiat] Nelson Mandela wyszedl z wiezienia po 27 latach. (1990)" },
};

// 12.02
const HistoryEvent HIST_043[] = {
  { 1809, "[Nauka] Urodzil sie Karol Darwin. (1809)" },
  { 1809, "[Historia] Urodzil sie Abraham Lincoln, prezydent USA. (1809)" },
  { 2001, "[Nauka] Sonda NEAR Shoemaker wyladowala na asteroidzie Eros. (2001)" },
  { 1881, "[Kultura] Urodzila sie Anna Pawlowa, balerina. (1881)" },
  { 1980, "[Polska] Rozpoczely sie zimowe igrzyska w Lake Placid z udzialem Polski. (1980)" },
};

// 13.02
const HistoryEvent HIST_044[] = {
  { 1945, "[Historia] Rozpoczelo sie bombardowanie Drezna. (1945)" },
  { 1633, "[Nauka] Galileusz przybyl do Rzymu przed procesem inkwizycji. (1633)" },
  { 1883, "[Kultura] Zmarl Richard Wagner, kompozytor. (1883)" },
  { 1960, "[Swiat] Francja przeprowadzila pierwsza probe jadrowa. (1960)" },
  { 1834, "[Polska] Ukazalo sie pierwsze wydanie Pana Tadeusza w Paryzu. (1834)" },
};

// 14.02
const HistoryEvent HIST_045[] = {
  { 0, "[Historia] Walentynki: swieto zakochanych." },
  { 1942, "[Polska] Zwiazek Walki Zbrojnej przemianowano na Armie Krajowa. (1942)" },
  { 1876, "[Nauka] Alexander Graham Bell zlozyl patent na telefon. (1876)" },
  { 1779, "[Historia] Zginal James Cook, brytyjski zeglarz i odkrywca. (1779)" },
  { 1895, "[Kultura] Premiera sztuki The Importance of Being Earnest Oscara Wilde'a. (1895)" },
};

// 15.02
const HistoryEvent HIST_046[] = {
  { 1564, "[Nauka] Urodzil sie Galileusz. (1564)" },
  { 1946, "[Nauka] Zaprezentowano ENIAC, jeden z pierwszych komputerow elektronicznych. (1946)" },
  { 1922, "[Polska] Urodzil sie Wladyslaw Bartoszewski. (1922)" },
  { 1898, "[Swiat] Eksplozja USS Maine poprzedzila wojne USA z Hiszpania. (1898)" },
  { 1971, "[Historia] Wielka Brytania wprowadzila dziesietny system pieniezny. (1971)" },
};

// 16.02
const HistoryEvent HIST_047[] = {
  { 1923, "[Historia] Howard Carter otworzyl grobowiec Tutanchamona. (1923)" },
  { 1918, "[Swiat] Litewska Rada Panstwowa oglosila niepodleglosc Litwy. (1918)" },
  { 1948, "[Nauka] Gerard Kuiper odkryl Mirande, ksiezyc Urana. (1948)" },
  { 1959, "[Historia] Fidel Castro zostal premierem Kuby. (1959)" },
  { 2005, "[Nauka] Wszedl w zycie protokol z Kioto. (2005)" },
};

// 17.02
const HistoryEvent HIST_048[] = {
  { 1600, "[Historia] Giordano Bruno zostal spalony na stosie w Rzymie. (1600)" },
  { 1863, "[Polska] Bitwa pod Miechowem w czasie powstania styczniowego. (1863)" },
  { 1904, "[Kultura] Premiera opery Madame Butterfly w Mediolanie. (1904)" },
  { 1972, "[Nauka] Volkswagen Garbus pobil rekord produkcji Forda T. (1972)" },
  { 2008, "[Swiat] Kosowo oglosilo niepodleglosc. (2008)" },
};

// 18.02
const HistoryEvent HIST_049[] = {
  { 1930, "[Nauka] Odkryto Plutona. (1930)" },
  { 1386, "[Polska] Wladyslaw Jagiello poslubil Jadwige Andegawenska. (1386)" },
  { 1516, "[Historia] Urodzila sie Maria I Tudor, krolowa Anglii. (1516)" },
  { 1745, "[Nauka] Urodzil sie Alessandro Volta, pionier badan nad elektrycznoscia. (1745)" },
  { 1885, "[Kultura] Opublikowano Przygody Hucka Finna Marka Twaina w USA. (1885)" },
};

// 19.02
const HistoryEvent HIST_050[] = {
  { 1473, "[Nauka] Urodzil sie Mikolaj Kopernik. (1473)" },
  { 1846, "[Polska] Rozpoczela sie rabacja galicyjska. (1846)" },
  { 1945, "[Historia] Rozpoczela sie bitwa o Iwo Jime. (1945)" },
  { 1878, "[Nauka] Thomas Edison opatentowal fonograf. (1878)" },
  { 1953, "[Kultura] Urodzil sie Massimo Troisi, wloski aktor i rezyser. (1953)" },
};

// 20.02
const HistoryEvent HIST_051[] = {
  { 1962, "[Historia] John Glenn jako pierwszy Amerykanin okrazyl Ziemie. (1962)" },
  { 1919, "[Polska] Sejm Ustawodawczy przyjal Mala Konstytucje. (1919)" },
  { 1943, "[Swiat] Wybuchl wulkan Paricutin w Meksyku. (1943)" },
  { 1986, "[Nauka] Wystrzelono stacje kosmiczna Mir. (1986)" },
  { 1816, "[Kultura] Premiera Cyrulika sewilskiego Gioacchina Rossiniego. (1816)" },
};

// 21.02
const HistoryEvent HIST_052[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Jezyka Ojczystego." },
  { 1846, "[Polska] Rozpoczelo sie powstanie krakowskie. (1846)" },
  { 1613, "[Historia] Michal Romanow zostal carem Rosji. (1613)" },
  { 1925, "[Kultura] Ukazal sie pierwszy numer tygodnika The New Yorker. (1925)" },
  { 1965, "[Historia] Malcolm X zostal zastrzelony w Nowym Jorku. (1965)" },
};

// 22.02
const HistoryEvent HIST_053[] = {
  { 1810, "[Kultura] Urodzil sie Fryderyk Chopin wedlug metryki chrztu. (1810)" },
  { 1848, "[Historia] Wybuchla rewolucja lutowa we Francji. (1848)" },
  { 1810, "[Polska] Data chrztu Fryderyka Chopina w Brochowie. (1810)" },
  { 1959, "[Nauka] Wystrzelono satelite Vanguard 2 do badan pogody. (1959)" },
  { 1980, "[Swiat] USA pokonaly ZSRR w hokeju, tzw. Cud na lodzie. (1980)" },
};

// 23.02
const HistoryEvent HIST_054[] = {
  { 1945, "[Historia] Zdjecie podniesienia flagi USA na Iwo Jimie stalo sie ikona wojny. (1945)" },
  { 1893, "[Nauka] Rudolf Diesel otrzymal patent na silnik wysokoprezny. (1893)" },
  { 1998, "[Polska] Ratyfikowano konkordat miedzy Polska a Stolica Apostolska. (1998)" },
  { 1685, "[Kultura] Urodzil sie Georg Friedrich Handel. (1685)" },
  { 1903, "[Swiat] Kuba wydzierzawila USA teren Guantanamo. (1903)" },
};

// 24.02
const HistoryEvent HIST_055[] = {
  { 2022, "[Historia] Rosja rozpoczela pelnoskalowa inwazje na Ukraine. (2022)" },
  { 1386, "[Polska] Wladyslaw Jagiello zostal koronowany na krola Polski. (1386)" },
  { 1582, "[Swiat] Papiez Grzegorz XIII oglosil reforme kalendarza. (1582)" },
  { 1920, "[Historia] Powstala NSDAP w Monachium. (1920)" },
  { 1987, "[Nauka] Zarejestrowano supernowa SN 1987A. (1987)" },
};

// 25.02
const HistoryEvent HIST_056[] = {
  { 1956, "[Historia] Nikita Chruszczow wyglosil tajny referat o zbrodniach Stalina. (1956)" },
  { 1831, "[Polska] Bitwa pod Olszynka Grochowska w powstaniu listopadowym. (1831)" },
  { 1570, "[Swiat] Papiez Pius V ekskomunikowal Elzbiete I. (1570)" },
  { 1841, "[Kultura] Urodzil sie Pierre-Auguste Renoir, malarz. (1841)" },
  { 1986, "[Historia] Ferdinand Marcos opuscil Filipiny po rewolucji People Power. (1986)" },
};

// 26.02
const HistoryEvent HIST_057[] = {
  { 1993, "[Historia] Zamach bombowy w World Trade Center w Nowym Jorku. (1993)" },
  { 1927, "[Polska] Mazurek Dabrowskiego zostal oficjalnym hymnem Polski. (1927)" },
  { 1815, "[Swiat] Napoleon uciekl z Elby i rozpoczal Sto dni. (1815)" },
  { 1802, "[Kultura] Urodzil sie Victor Hugo, pisarz. (1802)" },
  { 1935, "[Nauka] Robert Watson-Watt pokazal dzialanie radaru. (1935)" },
};

// 27.02
const HistoryEvent HIST_058[] = {
  { 1933, "[Historia] Pozar Reichstagu w Berlinie. (1933)" },
  { 1861, "[Polska] Manifestacja patriotyczna w Warszawie zostala krwawo stlumiona. (1861)" },
  { 1900, "[Historia] Powstala brytyjska Partia Pracy. (1900)" },
  { 1932, "[Nauka] James Chadwick oglosil odkrycie neutronu. (1932)" },
  { 1991, "[Swiat] George H.W. Bush oglosil wyzwolenie Kuwejtu. (1991)" },
};

// 28.02
const HistoryEvent HIST_059[] = {
  { 1953, "[Nauka] Odkryto strukture DNA, opisano model podwojnej helisy. (1953)" },
  { 1573, "[Polska] Uchwalono konfederacje warszawska, akt tolerancji religijnej. (1573)" },
  { 1525, "[Historia] Hiszpanie stracili Cuauhtemoca, ostatniego wladce Aztekow. (1525)" },
  { 1983, "[Kultura] Finalowy odcinek serialu MASH obejrzaly miliony widzow. (1983)" },
  { 1991, "[Swiat] Zakonczono dzialania bojowe w wojnie w Zatoce Perskiej. (1991)" },
};

// 29.02
const HistoryEvent HIST_060[] = {
  { 0, "[Historia] Dzien przestepny: pojawia sie tylko w latach przestepnych." },
  { 1504, "[Nauka] Krzysztof Kolumb uzyl zacmienia Ksiezyca na Jamajce. (1504)" },
  { 1792, "[Kultura] Urodzil sie Gioacchino Rossini, kompozytor. (1792)" },
  { 1940, "[Polska] Urodzil sie Andrzej Strejlau, trener pilkarski. (1940)" },
  { 1960, "[Swiat] Trzesienie ziemi w Agadirze w Maroku zabilo tysiace osob. (1960)" },
};

// 01.03
const HistoryEvent HIST_061[] = {
  { 0, "[Historia] Narodowy Dzien Pamieci Zolnierzy Wykletych w Polsce." },
  { 1810, "[Kultura] Urodzil sie Fryderyk Chopin wedlug rodzinnej tradycji. (1810)" },
  { 1872, "[Swiat] Utworzono Park Narodowy Yellowstone, pierwszy taki park na swiecie. (1872)" },
  { 1896, "[Nauka] Henri Becquerel oglosil odkrycie promieniotworczosci. (1896)" },
  { 1815, "[Historia] Napoleon wyladowal we Francji po ucieczce z Elby. (1815)" },
};

// 02.03
const HistoryEvent HIST_062[] = {
  { 1969, "[Historia] Odbyl sie pierwszy lot naddzwiekowego samolotu Concorde. (1969)" },
  { 1864, "[Polska] Car Aleksander II wydal ukaz uwlaszczeniowy dla Krolestwa Polskiego. (1864)" },
  { 1939, "[Swiat] Eugenio Pacelli zostal wybrany papiezem Piusem XII. (1939)" },
  { 1949, "[Nauka] Samolot Lucky Lady II zakonczyl pierwszy lot non stop dookola swiata. (1949)" },
  { 1933, "[Kultura] Premiera filmu King Kong w Nowym Jorku. (1933)" },
};

// 03.03
const HistoryEvent HIST_063[] = {
  { 0, "[Historia] Swiatowy Dzien Dzikiej Przyrody." },
  { 1861, "[Historia] Aleksander II podpisal manifest o zniesieniu poddanstwa w Rosji. (1861)" },
  { 1875, "[Kultura] Premiera opery Carmen Georges'a Bizeta w Paryzu. (1875)" },
  { 1972, "[Nauka] Wystartowala sonda Pioneer 10 w kierunku Jowisza. (1972)" },
  { 1918, "[Polska] Podpisano traktat brzeski konczacy wojne Rosji bolszewickiej z panstwami centralnymi. (1918)" },
};

// 04.03
const HistoryEvent HIST_064[] = {
  { 1975, "[Historia] Charlie Chaplin otrzymal tytul szlachecki. (1975)" },
  { 1386, "[Polska] Wladyslaw Jagiello zostal koronowany na krola Polski. (1386)" },
  { 1789, "[Swiat] Weszla w zycie Konstytucja Stanow Zjednoczonych. (1789)" },
  { 1678, "[Kultura] Urodzil sie Antonio Vivaldi, kompozytor. (1678)" },
  { 1933, "[Historia] Franklin D. Roosevelt zostal prezydentem USA. (1933)" },
};

// 05.03
const HistoryEvent HIST_065[] = {
  { 1953, "[Historia] Zmarl Jozef Stalin. (1953)" },
  { 1940, "[Polska] Biuro Polityczne ZSRR podjelo decyzje o zbrodni katynskiej. (1940)" },
  { 1616, "[Nauka] Dzielo Kopernika De revolutionibus trafilo na indeks ksieg zakazanych. (1616)" },
  { 1936, "[Nauka] Odbyl sie pierwszy lot mysliwca Supermarine Spitfire. (1936)" },
  { 1953, "[Kultura] Zmarl Siergiej Prokofiew, kompozytor. (1953)" },
};

// 06.03
const HistoryEvent HIST_066[] = {
  { 1869, "[Nauka] Dmitrij Mendelejew przedstawil uklad okresowy pierwiastkow. (1869)" },
  { 1454, "[Polska] Kazimierz IV Jagiellonczyk wlaczyl Prusy do Korony. (1454)" },
  { 1836, "[Historia] Zakonczyla sie bitwa o Alamo w Teksasie. (1836)" },
  { 1899, "[Nauka] Bayer zarejestrowal znak towarowy Aspirin. (1899)" },
  { 1475, "[Kultura] Urodzil sie Michal Aniol. (1475)" },
};

// 07.03
const HistoryEvent HIST_067[] = {
  { 1876, "[Nauka] Alexander Graham Bell otrzymal patent na telefon. (1876)" },
  { 1000, "[Polska] Rozpoczal sie zjazd gnieznienski z udzialem Ottona III. (1000)" },
  { 1965, "[Historia] Krwawa Niedziela w Selmie stala sie symbolem walki o prawa obywatelskie. (1965)" },
  { 321, "[Swiat] Konstantyn Wielki ustanowil niedziele dniem odpoczynku w imperium. (321)" },
  { 1875, "[Kultura] Urodzil sie Maurice Ravel, kompozytor. (1875)" },
};

// 08.03
const HistoryEvent HIST_068[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Kobiet." },
  { 1968, "[Polska] Rozpoczely sie protesty studenckie Marca 1968 w Warszawie. (1968)" },
  { 1917, "[Historia] W Piotrogrodzie wybuchly strajki, poczatek rewolucji lutowej. (1917)" },
  { 1979, "[Nauka] Voyager 1 zblizyl sie do Jowisza i badal jego ksiezyce. (1979)" },
  { 1978, "[Kultura] BBC nadala pierwszy odcinek Autostopem przez Galaktyke. (1978)" },
};

// 09.03
const HistoryEvent HIST_069[] = {
  { 1959, "[Historia] Na targach w Nowym Jorku pokazano lalke Barbie. (1959)" },
  { 1497, "[Nauka] Mikolaj Kopernik przeprowadzil jedna z wczesnych obserwacji astronomicznych. (1497)" },
  { 1934, "[Swiat] Urodzil sie Jurij Gagarin, pierwszy czlowiek w kosmosie. (1934)" },
  { 1814, "[Kultura] Urodzil sie Taras Szewczenko, poeta ukrainski. (1814)" },
  { 1990, "[Historia] Mongolia rozpoczela przemiany demokratyczne po erze komunistycznej. (1990)" },
};

// 10.03
const HistoryEvent HIST_070[] = {
  { 1876, "[Nauka] Odbyla sie pierwsza udana rozmowa telefoniczna Bella. (1876)" },
  { 1863, "[Polska] Marian Langiewicz oglosil sie dyktatorem powstania styczniowego. (1863)" },
  { 1945, "[Historia] Bombardowanie Tokio wywolalo jeden z najwiekszych pozarow wojny. (1945)" },
  { 1922, "[Swiat] Mahatma Gandhi zostal aresztowany przez wladze brytyjskie. (1922)" },
  { 1903, "[Kultura] Urodzil sie Bix Beiderbecke, trebacz jazzowy. (1903)" },
};

// 11.03
const HistoryEvent HIST_071[] = {
  { 2011, "[Historia] Trzesienie ziemi i tsunami wywolaly katastrofe w Fukushimie. (2011)" },
  { 1985, "[Swiat] Michail Gorbaczow zostal przywodca ZSRR. (1985)" },
  { 1990, "[Historia] Litwa oglosila odrodzenie niepodleglosci. (1990)" },
  { 1818, "[Kultura] Opublikowano powiesc Frankenstein Mary Shelley. (1818)" },
  { 1977, "[Nauka] Odkryto pierscienie Urana podczas obserwacji zakrycia gwiazdy. (1977)" },
};

// 12.03
const HistoryEvent HIST_072[] = {
  { 1930, "[Historia] Mahatma Gandhi rozpoczal Marsz Solny. (1930)" },
  { 1999, "[Polska] Polska, Czechy i Wegry zostaly czlonkami NATO. (1999)" },
  { 1894, "[Nauka] Coca-Cola zostala po raz pierwszy sprzedana w butelkach. (1894)" },
  { 1912, "[Swiat] W USA powstala organizacja Girl Scouts. (1912)" },
  { 1922, "[Kultura] Urodzil sie Jack Kerouac, pisarz pokolenia beatnikow. (1922)" },
};

// 13.03
const HistoryEvent HIST_073[] = {
  { 2013, "[Historia] Franciszek zostal wybrany papiezem. (2013)" },
  { 1781, "[Nauka] William Herschel odkryl Urana. (1781)" },
  { 1943, "[Polska] Niemcy rozpoczeli likwidacje getta krakowskiego. (1943)" },
  { 1881, "[Swiat] Zamordowano cara Aleksandra II. (1881)" },
  { 1925, "[Kultura] Urodzil sie Zbigniew Messner, ekonomista i polityk. (1925)" },
};

// 14.03
const HistoryEvent HIST_074[] = {
  { 0, "[Historia] Dzien Liczby Pi." },
  { 1879, "[Nauka] Urodzil sie Albert Einstein. (1879)" },
  { 1794, "[Nauka] Eli Whitney opatentowal odziarniarke bawelny. (1794)" },
  { 1883, "[Historia] Zmarl Karl Marx. (1883)" },
  { 1943, "[Polska] Zakonczyla sie likwidacja getta krakowskiego. (1943)" },
};

// 15.03
const HistoryEvent HIST_075[] = {
  { 44, "[Historia] Zamordowano Juliusza Cezara. (44)" },
  { 1765, "[Polska] Utworzono Szkole Rycerska w Warszawie. (1765)" },
  { 1848, "[Swiat] Wybuchla rewolucja wegierska. (1848)" },
  { 1985, "[Nauka] Zarejestrowano pierwsza komercyjna domene internetowa Symbolics.com. (1985)" },
  { 1493, "[Historia] Kolumb wrocil do Hiszpanii po pierwszej wyprawie do Ameryki. (1493)" },
};

// 16.03
const HistoryEvent HIST_076[] = {
  { 1926, "[Nauka] Robert Goddard odpalil pierwsza rakiete na paliwo ciekle. (1926)" },
  { 1521, "[Historia] Wyprawa Magellana dotarla do Filipin. (1521)" },
  { 1968, "[Swiat] Doszlo do masakry w My Lai podczas wojny w Wietnamie. (1968)" },
  { 37, "[Historia] Zmarl cesarz Tyberiusz. (37)" },
  { 1859, "[Kultura] Urodzil sie Aleksander Popow, pionier radiotechniki. (1859)" },
};

// 17.03
const HistoryEvent HIST_077[] = {
  { 0, "[Historia] Dzien swietego Patryka." },
  { 1921, "[Polska] Uchwalono Konstytucje marcowa II Rzeczypospolitej. (1921)" },
  { 1861, "[Swiat] Proklamowano Krolestwo Wloch. (1861)" },
  { 1958, "[Nauka] Wystrzelono Vanguard 1, jednego z najstarszych satelitow na orbicie. (1958)" },
  { 1969, "[Historia] Golda Meir zostala premierem Izraela. (1969)" },
};

// 18.03
const HistoryEvent HIST_078[] = {
  { 1965, "[Nauka] Aleksiej Leonow odbyl pierwszy spacer kosmiczny. (1965)" },
  { 1921, "[Polska] Podpisano traktat ryski konczacy wojne polsko-bolszewicka. (1921)" },
  { 1871, "[Historia] Rozpoczela sie Komuna Paryska. (1871)" },
  { 1844, "[Kultura] Urodzil sie Nikolaj Rimski-Korsakow. (1844)" },
  { 1962, "[Swiat] Francja i algierski FLN podpisaly uklady z Evian. (1962)" },
};

// 19.03
const HistoryEvent HIST_079[] = {
  { 1915, "[Nauka] Pluton zostal sfotografowany po raz pierwszy, ale jeszcze go nie rozpoznano. (1915)" },
  { 1238, "[Polska] Zmarl Henryk Brodaty, ksiaze slaski. (1238)" },
  { 1882, "[Kultura] W Barcelonie rozpoczeto budowe Sagrada Familia. (1882)" },
  { 2003, "[Historia] Rozpoczela sie inwazja koalicji na Irak wedlug czasu USA. (2003)" },
  { 1895, "[Swiat] Bracia Lumiere zarejestrowali film Wyjscie robotnikow z fabryki. (1895)" },
};

// 20.03
const HistoryEvent HIST_080[] = {
  { 0, "[Historia] Rownonoc marcowa: poczatek astronomicznej wiosny w Europie." },
  { 1921, "[Polska] Odbyl sie plebiscyt na Gornym Slasku. (1921)" },
  { 1602, "[Swiat] Powstala Holenderska Kompania Wschodnioindyjska. (1602)" },
  { 2003, "[Historia] Rozpoczela sie wojna w Iraku. (2003)" },
  { 1916, "[Nauka] Albert Einstein opublikowal prace o ogolnej teorii wzglednosci. (1916)" },
};

// 21.03
const HistoryEvent HIST_081[] = {
  { 0, "[Historia] Pierwszy dzien kalendarzowej wiosny." },
  { 1685, "[Kultura] Urodzil sie Johann Sebastian Bach. (1685)" },
  { 1804, "[Historia] We Francji ogloszono Kodeks Napoleona. (1804)" },
  { 1960, "[Swiat] Masakra w Sharpeville stala sie symbolem apartheidu. (1960)" },
  { 0, "[Polska] Dzien Wagarow, nieformalne swieto uczniow." },
};

// 22.03
const HistoryEvent HIST_082[] = {
  { 0, "[Historia] Swiatowy Dzien Wody." },
  { 1765, "[Historia] Parlament brytyjski uchwalil Stamp Act dla kolonii amerykanskich. (1765)" },
  { 1895, "[Kultura] Bracia Lumiere pokazali prywatnie pierwszy film. (1895)" },
  { 1832, "[Kultura] Zmarl Johann Wolfgang Goethe. (1832)" },
  { 1945, "[Swiat] Utworzono Lige Panstw Arabskich. (1945)" },
};

// 23.03
const HistoryEvent HIST_083[] = {
  { 0, "[Historia] Swiatowy Dzien Meteorologii." },
  { 1839, "[Kultura] W prasie bostonkiej pojawil sie skrot OK. (1839)" },
  { 1965, "[Nauka] Gemini 3 wykonala pierwszy zalogowy lot programu Gemini. (1965)" },
  { 1933, "[Historia] Reichstag przyjal ustawe o pelnomocnictwach dla Hitlera. (1933)" },
  { 1919, "[Swiat] Benito Mussolini zalozyl organizacje faszystowska w Mediolanie. (1919)" },
};

// 24.03
const HistoryEvent HIST_084[] = {
  { 0, "[Historia] Swiatowy Dzien Walki z Gruzlica." },
  { 1794, "[Polska] Tadeusz Kosciuszko zlozyl przysiege na rynku w Krakowie. (1794)" },
  { 1882, "[Nauka] Robert Koch oglosil odkrycie pratka gruzlicy. (1882)" },
  { 1603, "[Historia] Zmarla Elzbieta I, krolowa Anglii. (1603)" },
  { 1989, "[Swiat] Katastrofa tankowca Exxon Valdez spowodowala wielki wyciek ropy. (1989)" },
};

// 25.03
const HistoryEvent HIST_085[] = {
  { 1957, "[Historia] Podpisano traktaty rzymskie, wazny krok do powstania UE. (1957)" },
  { 1655, "[Nauka] Christiaan Huygens odkryl Tytana, ksiezyc Saturna. (1655)" },
  { 1807, "[Swiat] Wielka Brytania uchwalila zakaz handlu niewolnikami. (1807)" },
  { 1881, "[Kultura] Urodzil sie Bela Bartok, kompozytor. (1881)" },
  { 1306, "[Historia] Robert Bruce zostal koronowany na krola Szkocji. (1306)" },
};

// 26.03
const HistoryEvent HIST_086[] = {
  { 1995, "[Historia] Weszla w zycie strefa Schengen. (1995)" },
  { 1943, "[Polska] Grupy Szarych Szeregow przeprowadzily akcje pod Arsenalem. (1943)" },
  { 1953, "[Nauka] Jonas Salk oglosil wyniki badan nad szczepionka przeciw polio. (1953)" },
  { 1979, "[Swiat] Egipt i Izrael podpisaly traktat pokojowy. (1979)" },
  { 1827, "[Kultura] Zmarl Ludwig van Beethoven. (1827)" },
};

// 27.03
const HistoryEvent HIST_087[] = {
  { 0, "[Kultura] Miedzynarodowy Dzien Teatru." },
  { 1968, "[Nauka] Jurij Gagarin zginal w katastrofie lotniczej. (1968)" },
  { 1977, "[Historia] Katastrofa lotnicza na Teneryfie byla najtragiczniejsza w historii lotnictwa. (1977)" },
  { 1794, "[Swiat] Kongres USA utworzyl Marynarke Wojenna Stanow Zjednoczonych. (1794)" },
  { 1945, "[Polska] Armia Czerwona i Wojsko Polskie zdobyly Gdansk. (1945)" },
};

// 28.03
const HistoryEvent HIST_088[] = {
  { 1979, "[Historia] Doszlo do awarii elektrowni Three Mile Island. (1979)" },
  { 1930, "[Swiat] Konstantynopol oficjalnie przemianowano na Stambul. (1930)" },
  { 1941, "[Kultura] Zmarla Virginia Woolf. (1941)" },
  { 1854, "[Historia] Wielka Brytania i Francja wypowiedzialy wojne Rosji w wojnie krymskiej. (1854)" },
  { 1910, "[Nauka] Henri Fabre wykonal pierwszy udany lot hydroplanem. (1910)" },
};

// 29.03
const HistoryEvent HIST_089[] = {
  { 2004, "[Historia] Do NATO dolaczylo siedem panstw Europy Srodkowej i Wschodniej. (2004)" },
  { 1461, "[Historia] Bitwa pod Towton byla jedna z najwiekszych bitew Wojny Dwoch Roz. (1461)" },
  { 1974, "[Nauka] W Chinach odkryto Armie Terakotowa. (1974)" },
  { 1848, "[Swiat] Niagara Falls chwilowo niemal przestaly plynac przez zator lodowy. (1848)" },
  { 1973, "[Historia] Ostatnie jednostki bojowe USA opuscily Wietnam Poludniowy. (1973)" },
};

// 30.03
const HistoryEvent HIST_090[] = {
  { 1867, "[Historia] Stany Zjednoczone kupily Alaske od Rosji. (1867)" },
  { 1892, "[Polska] Urodzil sie Stefan Banach, wybitny matematyk. (1892)" },
  { 1856, "[Swiat] Traktat paryski zakonczyl wojne krymska. (1856)" },
  { 1981, "[Historia] Doszlo do zamachu na prezydenta USA Ronalda Reagana. (1981)" },
  { 1746, "[Kultura] Urodzil sie Francisco Goya, malarz. (1746)" },
};

// 31.03
const HistoryEvent HIST_091[] = {
  { 1889, "[Historia] Oficjalnie otwarto wieze Eiffla w Paryzu. (1889)" },
  { 1892, "[Polska] Urodzil sie Stanislaw Maczek, general broni Wojska Polskiego. (1892)" },
  { 1949, "[Swiat] Nowa Fundlandia dolaczyla do Kanady. (1949)" },
  { 1966, "[Nauka] Wystartowala Luna 10, pierwsza sonda na orbicie Ksiezyca. (1966)" },
  { 1596, "[Kultura] Urodzil sie Rene Descartes, filozof i matematyk. (1596)" },
};

// 01.04
const HistoryEvent HIST_092[] = {
  { 0, "[Historia] Prima aprilis: dzien zartow i psikusow." },
  { 1656, "[Polska] Jan Kazimierz zlozyl sluby lwowskie podczas potopu szwedzkiego. (1656)" },
  { 1976, "[Nauka] Steve Jobs, Steve Wozniak i Ronald Wayne zalozyli Apple. (1976)" },
  { 1939, "[Swiat] Francisco Franco oglosil koniec wojny domowej w Hiszpanii. (1939)" },
  { 1999, "[Historia] Utworzono terytorium Nunavut w Kanadzie. (1999)" },
};

// 02.04
const HistoryEvent HIST_093[] = {
  { 2005, "[Polska] Zmarl Jan Pawel II. (2005)" },
  { 1982, "[Historia] Argentyna zajela Falklandy, zaczynajac wojne z Wielka Brytania. (1982)" },
  { 1805, "[Kultura] Urodzil sie Hans Christian Andersen. (1805)" },
  { 1917, "[Swiat] Woodrow Wilson poprosil Kongres USA o wypowiedzenie wojny Niemcom. (1917)" },
  { 1972, "[Kultura] Charlie Chaplin po latach wygnania wrocil do USA po Oscara honorowego. (1972)" },
};

// 03.04
const HistoryEvent HIST_094[] = {
  { 1973, "[Nauka] Martin Cooper wykonal pierwsza rozmowe z telefonu komorkowego. (1973)" },
  { 1922, "[Historia] Jozef Stalin zostal sekretarzem generalnym partii bolszewickiej. (1922)" },
  { 1860, "[Swiat] Ruszyl Pony Express, szybka poczta konna w USA. (1860)" },
  { 1897, "[Kultura] Zmarl Johannes Brahms, kompozytor. (1897)" },
  { 1043, "[Historia] Edward Wyznawca zostal koronowany na krola Anglii. (1043)" },
};

// 04.04
const HistoryEvent HIST_095[] = {
  { 1949, "[Historia] Podpisano traktat polnocnoatlantycki, powstalo NATO. (1949)" },
  { 1794, "[Polska] Powstancy kosciuszkowscy wygrali bitwe pod Raclawicami. (1794)" },
  { 1968, "[Swiat] Zamordowano Martina Luthera Kinga Jr. w Memphis. (1968)" },
  { 1975, "[Nauka] Zalozono firme Microsoft. (1975)" },
  { 1581, "[Kultura] Francis Drake otrzymal tytul szlachecki po wyprawie dookola swiata. (1581)" },
};

// 05.04
const HistoryEvent HIST_096[] = {
  { 1994, "[Kultura] Zmarl Kurt Cobain. (1994)" },
  { 1722, "[Historia] Europejczycy dotarli do Wyspy Wielkanocnej. (1722)" },
  { 1955, "[Swiat] Winston Churchill zrezygnowal z funkcji premiera Wielkiej Brytanii. (1955)" },
  { 1614, "[Historia] Pocahontas poslubila Johna Rolfe'a w Wirginii. (1614)" },
  { 1879, "[Nauka] Chile wypowiedzialo wojne Peru i Boliwii, zaczynajac wojne o saletre. (1879)" },
};

// 06.04
const HistoryEvent HIST_097[] = {
  { 1896, "[Historia] Rozpoczely sie pierwsze nowozytne igrzyska olimpijskie w Atenach. (1896)" },
  { 1917, "[Swiat] Stany Zjednoczone przystapily do I wojny swiatowej. (1917)" },
  { 1909, "[Nauka] Robert Peary oglosil dotarcie do bieguna polnocnego. (1909)" },
  { 1520, "[Kultura] Zmarl Rafael Santi, malarz renesansu. (1520)" },
  { 1652, "[Historia] Holendrzy zalozyli osade przy Przyladku Dobrej Nadziei. (1652)" },
};

// 07.04
const HistoryEvent HIST_098[] = {
  { 0, "[Historia] Swiatowy Dzien Zdrowia." },
  { 1948, "[Nauka] Weszla w zycie konstytucja WHO, powstala Swiatowa Organizacja Zdrowia. (1948)" },
  { 1994, "[Historia] Rozpoczelo sie ludobojstwo w Rwandzie. (1994)" },
  { 1939, "[Swiat] Wlochy zaatakowaly Albanie. (1939)" },
  { 1805, "[Kultura] W Wiedniu po raz pierwszy wykonano III Symfonie Beethovena Eroica. (1805)" },
};

// 08.04
const HistoryEvent HIST_099[] = {
  { 1904, "[Historia] Podpisano entente cordiale miedzy Francja i Wielka Brytania. (1904)" },
  { 1973, "[Kultura] Zmarl Pablo Picasso. (1973)" },
  { 1959, "[Nauka] NASA przedstawila astronautow Mercury Seven. (1959)" },
  { 1946, "[Swiat] Rozpoczela sie ostatnia sesja Ligi Narodow. (1946)" },
  { 1820, "[Historia] Na wyspie Melos odnaleziono rzezbe Wenus z Milo. (1820)" },
};

// 09.04
const HistoryEvent HIST_100[] = {
  { 2003, "[Historia] Upadek pomnika Saddama Husajna w Bagdadzie stal sie symbolem wojny w Iraku. (2003)" },
  { 1241, "[Polska] Bitwa pod Legnica zatrzymala najazd mongolski na ziemie polskie. (1241)" },
  { 1865, "[Swiat] Robert E. Lee poddal armie Konfederacji pod Appomattox. (1865)" },
  { 1967, "[Nauka] Boeing 737 wykonal pierwszy lot. (1967)" },
  { 1821, "[Kultura] Urodzil sie Charles Baudelaire, poeta. (1821)" },
};

// 10.04
const HistoryEvent HIST_101[] = {
  { 2010, "[Polska] Katastrofa smolenska: zginelo 96 osob, w tym prezydent Lech Kaczynski. (2010)" },
  { 1525, "[Polska] Albrecht Hohenzollern zlozyl hold pruski Zygmuntowi Staremu. (1525)" },
  { 1912, "[Historia] Titanic wyplynal z Southampton w pierwszy rejs. (1912)" },
  { 1998, "[Swiat] Podpisano porozumienie wielkopiatkowe w Irlandii Polnocnej. (1998)" },
  { 2019, "[Nauka] Pokazano pierwszy obraz cienia czarnej dziury M87*. (2019)" },
};

// 11.04
const HistoryEvent HIST_102[] = {
  { 1970, "[Nauka] Wystartowala misja Apollo 13. (1970)" },
  { 1814, "[Historia] Napoleon podpisal abdykacje w Fontainebleau. (1814)" },
  { 1951, "[Swiat] Prezydent Truman odwolal generala Douglasa MacArthura. (1951)" },
  { 1961, "[Historia] W Jerozolimie rozpoczal sie proces Adolfa Eichmanna. (1961)" },
  { 1689, "[Kultura] Wilhelm III i Maria II zostali koronowani na wladcow Anglii. (1689)" },
};

// 12.04
const HistoryEvent HIST_103[] = {
  { 1961, "[Historia] Jurij Gagarin jako pierwszy czlowiek polecial w kosmos. (1961)" },
  { 1981, "[Nauka] Wystartowal Columbia, pierwszy prom kosmiczny NASA. (1981)" },
  { 1861, "[Swiat] Atak na Fort Sumter rozpoczal wojne secesyjna w USA. (1861)" },
  { 1945, "[Historia] Zmarl Franklin D. Roosevelt. (1945)" },
  { 1955, "[Nauka] Ogloszono skutecznosc szczepionki Salka przeciw polio. (1955)" },
};

// 13.04
const HistoryEvent HIST_104[] = {
  { 1943, "[Polska] Niemcy oglosili odkrycie grobow w Katyniu. (1943)" },
  { 1742, "[Kultura] W Dublinie odbyla sie premiera oratorium Mesjasz Haendla. (1742)" },
  { 1970, "[Nauka] Eksplozja zbiornika tlenu zagrozila misji Apollo 13. (1970)" },
  { 1598, "[Swiat] Henryk IV wydal edykt nantejski. (1598)" },
  { 1997, "[Historia] Tiger Woods wygral Masters jako najmlodszy zwyciezca turnieju. (1997)" },
};

// 14.04
const HistoryEvent HIST_105[] = {
  { 1912, "[Historia] Titanic uderzyl w gore lodowa. (1912)" },
  { 1865, "[Historia] Abraham Lincoln zostal postrzelony w teatrze Forda. (1865)" },
  { 1828, "[Kultura] Noah Webster opublikowal slownik jezyka angielskiego. (1828)" },
  { 1931, "[Swiat] Proklamowano Druga Republike Hiszpanska. (1931)" },
  { 1970, "[Nauka] Apollo 13 wykonal manewr okrazenia Ksiezyca po awarii. (1970)" },
};

// 15.04
const HistoryEvent HIST_106[] = {
  { 1912, "[Historia] Zatonal Titanic. (1912)" },
  { 1865, "[Historia] Zmarl Abraham Lincoln po zamachu w teatrze Forda. (1865)" },
  { 1947, "[Swiat] Jackie Robinson zadebiutowal w MLB, przelamujac bariere rasowa. (1947)" },
  { 1452, "[Kultura] Urodzil sie Leonardo da Vinci. (1452)" },
  { 1989, "[Historia] Katastrofa na stadionie Hillsborough pochlonela 97 ofiar. (1989)" },
};

// 16.04
const HistoryEvent HIST_107[] = {
  { 1945, "[Historia] Rozpoczela sie bitwa o Berlin. (1945)" },
  { 1972, "[Nauka] Wystartowala misja Apollo 16 na Ksiezyc. (1972)" },
  { 1889, "[Kultura] Urodzil sie Charlie Chaplin. (1889)" },
  { 1917, "[Swiat] Lenin wrocil do Piotrogrodu z emigracji. (1917)" },
  { 1943, "[Nauka] Albert Hofmann przypadkowo odkryl dzialanie LSD. (1943)" },
};

// 17.04
const HistoryEvent HIST_108[] = {
  { 1961, "[Historia] Rozpoczela sie inwazja w Zatoce Swin na Kubie. (1961)" },
  { 1970, "[Nauka] Zaloga Apollo 13 bezpiecznie wodowala na Pacyfiku. (1970)" },
  { 1964, "[Kultura] Ford zaprezentowal model Mustang. (1964)" },
  { 1946, "[Swiat] Syria uzyskala pelna niepodleglosc po wycofaniu wojsk francuskich. (1946)" },
  { 1492, "[Historia] Podpisano kapitulacje z Santa Fe dla wyprawy Kolumba. (1492)" },
};

// 18.04
const HistoryEvent HIST_109[] = {
  { 1955, "[Nauka] Zmarl Albert Einstein. (1955)" },
  { 1942, "[Historia] Rajd Doolittle'a uderzyl w Japonie podczas II wojny swiatowej. (1942)" },
  { 1906, "[Swiat] Trzesienie ziemi zniszczylo San Francisco. (1906)" },
  { 1980, "[Historia] Zimbabwe oglosilo niepodleglosc. (1980)" },
  { 1775, "[Historia] Paul Revere ruszyl z ostrzezeniem przed wojskami brytyjskimi. (1775)" },
};

// 19.04
const HistoryEvent HIST_110[] = {
  { 1943, "[Polska] Wybuchlo powstanie w getcie warszawskim. (1943)" },
  { 1775, "[Historia] Bitwy pod Lexington i Concord rozpoczely wojne o niepodleglosc USA. (1775)" },
  { 1995, "[Swiat] Zamach bombowy w Oklahoma City. (1995)" },
  { 1943, "[Nauka] Albert Hofmann odbyl slynna rowerowa podroz po LSD. (1943)" },
  { 1882, "[Kultura] Zmarl Charles Darwin. (1882)" },
};

// 20.04
const HistoryEvent HIST_111[] = {
  { 1999, "[Historia] Masakra w Columbine wstrzasnela opinia publiczna w USA. (1999)" },
  { 2010, "[Swiat] Eksplozja platformy Deepwater Horizon wywolala katastrofe ekologiczna. (2010)" },
  { 1972, "[Nauka] Apollo 16 wyladowal na Ksiezycu. (1972)" },
  { 1889, "[Historia] Urodzil sie Adolf Hitler. (1889)" },
  { 1912, "[Kultura] Zmarl Bram Stoker, autor Draculi. (1912)" },
};

// 21.04
const HistoryEvent HIST_112[] = {
  { 753, "[Historia] Tradycyjna data zalozenia Rzymu. (753)" },
  { 1926, "[Swiat] Urodzila sie Elzbieta II, pozniejsza krolowa Wielkiej Brytanii. (1926)" },
  { 1918, "[Historia] Zginal Manfred von Richthofen, Czerwony Baron. (1918)" },
  { 1989, "[Nauka] Nintendo wydalo konsole Game Boy w Japonii. (1989)" },
  { 1960, "[Historia] Brasilia zostala stolica Brazylii. (1960)" },
};

// 22.04
const HistoryEvent HIST_113[] = {
  { 0, "[Historia] Dzien Ziemi, swieto ochrony srodowiska." },
  { 1970, "[Swiat] Odbyl sie pierwszy Dzien Ziemi. (1970)" },
  { 1870, "[Historia] Urodzil sie Wlodzimierz Lenin. (1870)" },
  { 1724, "[Kultura] Urodzil sie Immanuel Kant. (1724)" },
  { 1529, "[Historia] Hiszpania i Portugalia podpisaly traktat w Saragossie. (1529)" },
};

// 23.04
const HistoryEvent HIST_114[] = {
  { 0, "[Kultura] Swiatowy Dzien Ksiazki i Praw Autorskich." },
  { 997, "[Polska] Zginal swiety Wojciech podczas misji w Prusach. (997)" },
  { 1616, "[Kultura] Zmarl William Shakespeare. (1616)" },
  { 2005, "[Nauka] W serwisie YouTube opublikowano pierwszy film. (2005)" },
  { 1564, "[Kultura] Tradycyjna data urodzin Williama Shakespeare'a. (1564)" },
};

// 24.04
const HistoryEvent HIST_115[] = {
  { 1990, "[Nauka] Wyniesiono na orbite Kosmiczny Teleskop Hubble'a. (1990)" },
  { 1915, "[Historia] Aresztowania Ormian w Stambule zapoczatkowaly ludobojstwo Ormian. (1915)" },
  { 1916, "[Swiat] W Dublinie rozpoczelo sie powstanie wielkanocne. (1916)" },
  { 1800, "[Kultura] Utworzono Biblioteke Kongresu USA. (1800)" },
  { 1942, "[Kultura] Urodzila sie Barbra Streisand. (1942)" },
};

// 25.04
const HistoryEvent HIST_116[] = {
  { 1953, "[Nauka] Nature opublikowalo prace Watsona i Cricka o strukturze DNA. (1953)" },
  { 1915, "[Historia] Ladowanie pod Gallipoli stalo sie poczatkiem tradycji ANZAC Day. (1915)" },
  { 1974, "[Swiat] Rewolucja gozdzikow obalila dyktature w Portugalii. (1974)" },
  { 1945, "[Historia] We Wloszech obchodzony jest Dzien Wyzwolenia spod faszyzmu. (1945)" },
  { 1874, "[Nauka] Urodzil sie Guglielmo Marconi, pionier radia. (1874)" },
};

// 26.04
const HistoryEvent HIST_117[] = {
  { 1986, "[Nauka] Katastrofa elektrowni jadrowej w Czarnobylu. (1986)" },
  { 1937, "[Historia] Bombardowanie Guerniki stalo sie symbolem okrucienstwa wojny. (1937)" },
  { 1964, "[Swiat] Tanganika i Zanzibar polaczyly sie, tworzac Tanzanie. (1964)" },
  { 1564, "[Kultura] Ochrzczono Williama Shakespeare'a w Stratford-upon-Avon. (1564)" },
  { 1920, "[Polska] Rozpoczela sie ofensywa kijowska wojsk polskich i ukrainskich. (1920)" },
};

// 27.04
const HistoryEvent HIST_118[] = {
  { 1994, "[Historia] W RPA odbyly sie pierwsze wolne wybory dla wszystkich ras. (1994)" },
  { 1521, "[Swiat] Ferdynand Magellan zginal na Filipinach. (1521)" },
  { 1961, "[Historia] Sierra Leone uzyskalo niepodleglosc. (1961)" },
  { 1810, "[Kultura] Beethoven zapisal utwor znany jako Dla Elizy. (1810)" },
  { 1967, "[Nauka] Otwarto Expo 67 w Montrealu, wielka wystawe techniki i kultury. (1967)" },
};

// 28.04
const HistoryEvent HIST_119[] = {
  { 1789, "[Historia] Bunt na HMS Bounty przeszedl do legendy zeglugi. (1789)" },
  { 1945, "[Swiat] Stracono Benito Mussoliniego. (1945)" },
  { 2001, "[Nauka] Dennis Tito zostal pierwszym kosmicznym turysta. (2001)" },
  { 1937, "[Historia] Urodzil sie Saddam Husajn. (1937)" },
  { 0, "[Historia] Swiatowy Dzien Bezpieczenstwa i Ochrony Zdrowia w Pracy." },
};

// 29.04
const HistoryEvent HIST_120[] = {
  { 1992, "[Historia] W Los Angeles wybuchly zamieszki po wyroku w sprawie Rodneya Kinga. (1992)" },
  { 1945, "[Historia] Wyzwolono niemiecki oboz koncentracyjny Dachau. (1945)" },
  { 1901, "[Swiat] Urodzil sie Hirohito, cesarz Japonii. (1901)" },
  { 0, "[Kultura] Miedzynarodowy Dzien Tanca." },
  { 1770, "[Historia] James Cook dotarl do Zatoki Botanicznej w Australii. (1770)" },
};

// 30.04
const HistoryEvent HIST_121[] = {
  { 1945, "[Historia] Adolf Hitler popelnil samobojstwo w Berlinie. (1945)" },
  { 1803, "[Swiat] Stany Zjednoczone kupily Luizjane od Francji. (1803)" },
  { 1993, "[Nauka] CERN udostepnil technologie World Wide Web do domeny publicznej. (1993)" },
  { 1789, "[Historia] George Washington zostal pierwszym prezydentem USA. (1789)" },
  { 1975, "[Historia] Upadek Sajgonu zakonczyl wojne w Wietnamie. (1975)" },
};

// 01.05
const HistoryEvent HIST_122[] = {
  { 0, "[Historia] Swieto Pracy, obchodzone w wielu krajach." },
  { 2004, "[Polska] Polska przystapila do Unii Europejskiej. (2004)" },
  { 1569, "[Polska] Rozpoczal obrady sejm lubelski, ktory doprowadzil do unii lubelskiej. (1569)" },
  { 1707, "[Swiat] Powstalo Krolestwo Wielkiej Brytanii po unii Anglii i Szkocji. (1707)" },
  { 1851, "[Kultura] Otwarto Wielka Wystawe w londynskim Crystal Palace. (1851)" },
};

// 02.05
const HistoryEvent HIST_123[] = {
  { 0, "[Polska] Dzien Flagi Rzeczypospolitej Polskiej." },
  { 0, "[Polska] Dzien Polonii i Polakow za Granica." },
  { 1945, "[Polska] Polscy zolnierze zatkneli bialo-czerwona flage na Kolumnie Zwyciestwa w Berlinie. (1945)" },
  { 2011, "[Historia] W Pakistanie zginajal Osama bin Laden. (2011)" },
  { 1952, "[Nauka] Wykonano pierwszy lot samolotu De Havilland Comet z pasazerami. (1952)" },
};

// 03.05
const HistoryEvent HIST_124[] = {
  { 1791, "[Polska] Uchwalono Konstytucje 3 Maja. (1791)" },
  { 0, "[Polska] Swieto Narodowe Trzeciego Maja." },
  { 1808, "[Historia] Wojska francuskie stlumily powstanie w Madrycie. (1808)" },
  { 1937, "[Kultura] Premiera filmu Sniezka i siedmiu krasnoludkow w USA. (1937)" },
  { 2000, "[Nauka] Pierwszy raz zarejestrowano wirusa komputerowego ILOVEYOU. (2000)" },
};

// 04.05
const HistoryEvent HIST_125[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Strazaka." },
  { 1794, "[Polska] Tadeusz Kosciuszko wydal uniwersal polaniecki. (1794)" },
  { 1979, "[Swiat] Margaret Thatcher zostala premierem Wielkiej Brytanii. (1979)" },
  { 1989, "[Nauka] Sonda Magellan wystartowala w kierunku Wenus. (1989)" },
  { 1959, "[Kultura] Odbyla sie pierwsza ceremonia nagrod Grammy. (1959)" },
};

// 05.05
const HistoryEvent HIST_126[] = {
  { 1818, "[Historia] Urodzil sie Karol Marks. (1818)" },
  { 1936, "[Polska] Uroczyscie pochowano Jozefa Pilsudskiego na Wawelu. (1936)" },
  { 1862, "[Swiat] Meksyk pokonal wojska francuskie w bitwie pod Puebla. (1862)" },
  { 1961, "[Nauka] Alan Shepard odbyl pierwszy amerykanski lot kosmiczny. (1961)" },
  { 1980, "[Kultura] Premiera filmu Imperium kontratakuje w wybranych kinach USA. (1980)" },
};

// 06.05
const HistoryEvent HIST_127[] = {
  { 1937, "[Historia] Katastrofa sterowca Hindenburg. (1937)" },
  { 1840, "[Swiat] W Wielkiej Brytanii zaczal obowiazywac pierwszy znaczek Penny Black. (1840)" },
  { 1527, "[Historia] Sacco di Roma: wojska cesarskie spladrowaly Rzym. (1527)" },
  { 1994, "[Nauka] Otwarto tunel pod kanalem La Manche. (1994)" },
  { 1856, "[Nauka] Urodzil sie Zygmunt Freud. (1856)" },
};

// 07.05
const HistoryEvent HIST_128[] = {
  { 1945, "[Historia] Niemcy podpisaly bezwarunkowa kapitulacje w Reims. (1945)" },
  { 1763, "[Polska] Urodzil sie ksiaze Jozef Poniatowski. (1763)" },
  { 1915, "[Swiat] Niemiecki okret podwodny zatopil Lusitanie. (1915)" },
  { 1895, "[Nauka] Aleksandr Popow zaprezentowal odbiornik radiowy. (1895)" },
  { 1824, "[Kultura] W Wiedniu odbyla sie premiera IX symfonii Beethovena. (1824)" },
};

// 08.05
const HistoryEvent HIST_129[] = {
  { 1945, "[Historia] Dzien Zwyciestwa w Europie po II wojnie swiatowej. (1945)" },
  { 0, "[Historia] Dzien Bibliotekarza i Bibliotek w Polsce." },
  { 1980, "[Polska] WHO oglosila eradykacje ospy prawdziwej, wazne takze dla polskiej medycyny. (1980)" },
  { 1886, "[Swiat] W Atlancie po raz pierwszy sprzedano Coca-Cole. (1886)" },
  { 1978, "[Nauka] Reinhold Messner i Peter Habeler weszli na Everest bez tlenu. (1978)" },
};

// 09.05
const HistoryEvent HIST_130[] = {
  { 1950, "[Historia] Deklaracja Schumana, symboliczny poczatek integracji europejskiej. (1950)" },
  { 0, "[Swiat] Dzien Europy w Unii Europejskiej." },
  { 1987, "[Polska] Rozbila sie maszyna PLL LOT Tadeusz Kosciuszko. (1987)" },
  { 1926, "[Nauka] Richard Byrd oglosil pierwszy lot nad biegunem polnocnym. (1926)" },
  { 1901, "[Kultura] Otwarto pierwsze posiedzenie parlamentu Australii. (1901)" },
};

// 10.05
const HistoryEvent HIST_131[] = {
  { 1994, "[Historia] Nelson Mandela zostal prezydentem RPA. (1994)" },
  { 1794, "[Polska] Tadeusz Kosciuszko zostal ranny pod Szczekocinami. (1794)" },
  { 1940, "[Swiat] Niemcy zaatakowaly Belgie, Holandie i Luksemburg. (1940)" },
  { 1869, "[Nauka] Ukonczono pierwsza transkontynentalna linie kolejowa w USA. (1869)" },
  { 1933, "[Kultura] W Niemczech nazisci palili ksiazki na publicznych stosach. (1933)" },
};

// 11.05
const HistoryEvent HIST_132[] = {
  { 1997, "[Nauka] Komputer Deep Blue pokonal Garryego Kasparowa w meczu szachowym. (1997)" },
  { 1573, "[Polska] Henryk Walezy zostal wybrany krolem Polski. (1573)" },
  { 1949, "[Swiat] Izrael zostal przyjety do ONZ. (1949)" },
  { 1981, "[Kultura] Zmarl Bob Marley, ikona muzyki reggae. (1981)" },
  { 330, "[Historia] Konstantynopol zostal uroczyscie zainaugurowany jako nowa stolica imperium. (330)" },
};

// 12.05
const HistoryEvent HIST_133[] = {
  { 1820, "[Historia] Urodzila sie Florence Nightingale. (1820)" },
  { 1926, "[Polska] Rozpoczal sie przewrot majowy w Warszawie. (1926)" },
  { 1949, "[Swiat] Zakonczono blokade Berlina Zachodniego. (1949)" },
  { 2008, "[Nauka] Trzesienie ziemi w Syczuanie spowodowalo ogromne zniszczenia. (2008)" },
  { 1937, "[Kultura] Odbyla sie koronacja Jerzego VI w Londynie. (1937)" },
};

// 13.05
const HistoryEvent HIST_134[] = {
  { 1981, "[Historia] Zamach na Jana Pawla II na placu swietego Piotra. (1981)" },
  { 1917, "[Polska] Pierwsze objawienie fatimskie, wazne dla kultu maryjnego w Polsce. (1917)" },
  { 1888, "[Swiat] W Brazylii zniesiono niewolnictwo. (1888)" },
  { 1992, "[Nauka] Astronauci Endeavour przechwycili satelite Intelsat VI. (1992)" },
  { 1950, "[Kultura] Odbyl sie pierwszy wyscig Formuly 1 o Grand Prix Wielkiej Brytanii. (1950)" },
};

// 14.05
const HistoryEvent HIST_135[] = {
  { 1948, "[Historia] Proklamowano powstanie panstwa Izrael. (1948)" },
  { 1792, "[Polska] Zawiazano konfederacje targowicka przeciw Konstytucji 3 Maja. (1792)" },
  { 1804, "[Swiat] Wyprawa Lewisa i Clarka ruszyla na zachod USA. (1804)" },
  { 1973, "[Nauka] Wystrzelono Skylab, pierwsza stacje kosmiczna USA. (1973)" },
  { 1264, "[Kultura] Statut kaliski uregulowal prawa Zydow w Polsce. (1264)" },
};

// 15.05
const HistoryEvent HIST_136[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Rodzin." },
  { 1648, "[Polska] Rozpoczela sie bitwa pod Zoltymi Wodami. (1648)" },
  { 1955, "[Swiat] Podpisano traktat panstwowy przywracajacy niepodleglosc Austrii. (1955)" },
  { 1960, "[Nauka] Wystrzelono Sputnik 4, probe statku Wostok. (1960)" },
  { 1928, "[Kultura] Premiera kreskowki Plane Crazy z Myszka Miki. (1928)" },
};

// 16.05
const HistoryEvent HIST_137[] = {
  { 1975, "[Historia] Junko Tabei jako pierwsza kobieta zdobyla Mount Everest. (1975)" },
  { 1920, "[Polska] Rozpoczela sie bitwa pod Kijowem w wojnie polsko-bolszewickiej. (1920)" },
  { 1966, "[Swiat] W Chinach ogloszono poczatek rewolucji kulturalnej. (1966)" },
  { 1969, "[Nauka] Radziecka sonda Wenera 5 weszla w atmosfere Wenus. (1969)" },
  { 1929, "[Kultura] Odbyla sie pierwsza ceremonia rozdania Oscarow. (1929)" },
};

// 17.05
const HistoryEvent HIST_138[] = {
  { 2004, "[Historia] Massachusetts jako pierwszy stan USA zalegalizowal malzenstwa jednoplciowe. (2004)" },
  { 0, "[Swiat] Swiatowy Dzien Telekomunikacji i Spoleczenstwa Informacyjnego." },
  { 1900, "[Polska] Urodzil sie Wladyslaw Anders, general Wojska Polskiego. (1900)" },
  { 1865, "[Nauka] Powstala Miedzynarodowa Unia Telegraficzna, pozniejsza ITU. (1865)" },
  { 1954, "[Swiat] Sad Najwyzszy USA wydal wyrok Brown v. Board of Education. (1954)" },
};

// 18.05
const HistoryEvent HIST_139[] = {
  { 1920, "[Polska] Urodzil sie Karol Wojtyla, pozniejszy Jan Pawel II. (1920)" },
  { 1944, "[Polska] Zdobyto Monte Cassino z udzialem 2 Korpusu Polskiego. (1944)" },
  { 1804, "[Swiat] Napoleon Bonaparte zostal ogloszony cesarzem Francuzow. (1804)" },
  { 1969, "[Nauka] Wystartowala misja Apollo 10. (1969)" },
  { 1897, "[Kultura] Wydano powiesc Dracula Brama Stokera. (1897)" },
};

// 19.05
const HistoryEvent HIST_140[] = {
  { 1536, "[Historia] Stracono Anne Boleyn, krolowa Anglii. (1536)" },
  { 1883, "[Polska] Urodzil sie Stanislaw Sosabowski, general i tworca 1 SBS. (1883)" },
  { 1919, "[Swiat] Mustafa Kemal rozpoczal turecka wojne o niepodleglosc. (1919)" },
  { 1991, "[Nauka] Helen Sharman poleciala w kosmos jako pierwsza Brytyjka. (1991)" },
  { 1977, "[Kultura] Premiera filmu Smokey and the Bandit w USA. (1977)" },
};

// 20.05
const HistoryEvent HIST_141[] = {
  { 0, "[Historia] Swiatowy Dzien Pszczol." },
  { 1882, "[Polska] Powstala partia Proletariat, jedna z pierwszych polskich partii robotniczych. (1882)" },
  { 1498, "[Swiat] Vasco da Gama dotarl droga morska do Indii. (1498)" },
  { 1873, "[Nauka] Levi Strauss i Jacob Davis opatentowali dzinsy z nitami. (1873)" },
  { 1902, "[Kultura] Kuba uzyskala formalna niepodleglosc od USA. (1902)" },
};

// 21.05
const HistoryEvent HIST_142[] = {
  { 1904, "[Historia] Powstala FIFA. (1904)" },
  { 1674, "[Polska] Jan III Sobieski zostal wybrany krolem Polski. (1674)" },
  { 1927, "[Swiat] Charles Lindbergh zakonczyl samotny przelot przez Atlantyk. (1927)" },
  { 1956, "[Nauka] USA przeprowadzily pierwszy zrzut bomby wodorowej z samolotu. (1956)" },
  { 1980, "[Kultura] Premiera filmu Lsnienie Stanleya Kubricka. (1980)" },
};

// 22.05
const HistoryEvent HIST_143[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Bioroznorodnosci." },
  { 1911, "[Polska] Urodzil sie Anatolij Rybakow, pisarz zwiazany z Warszawa mlodosci. (1911)" },
  { 1455, "[Swiat] Rozpoczela sie wojna Dwoch Roz w Anglii. (1455)" },
  { 1960, "[Nauka] Trzesienie ziemi w Chile bylo najsilniejszym zmierzonym w historii. (1960)" },
  { 1859, "[Kultura] Urodzil sie Arthur Conan Doyle. (1859)" },
};

// 23.05
const HistoryEvent HIST_144[] = {
  { 1618, "[Historia] Defenestracja praska zapoczatkowala wojne trzydziestoletnia. (1618)" },
  { 1842, "[Polska] Urodzila sie Maria Konopnicka. (1842)" },
  { 1949, "[Swiat] Powstala Republika Federalna Niemiec. (1949)" },
  { 1934, "[Nauka] Zastrzelono Bonnie Parker i Clyde Barrowa; ich auto badano pozniej balistycznie. (1934)" },
  { 1911, "[Kultura] Otwarto Biblioteke Publiczna m.st. Warszawy przy ul. Koszykowej. (1911)" },
};

// 24.05
const HistoryEvent HIST_145[] = {
  { 1844, "[Historia] Samuel Morse wyslal pierwszy telegram: What hath God wrought. (1844)" },
  { 1543, "[Polska] Zmarl Mikolaj Kopernik, autor De revolutionibus. (1543)" },
  { 1883, "[Swiat] Otwarto Most Brooklinski w Nowym Jorku. (1883)" },
  { 1962, "[Nauka] Scott Carpenter okrazyl Ziemie w kapsule Aurora 7. (1962)" },
  { 1941, "[Kultura] Urodzil sie Bob Dylan. (1941)" },
};

// 25.05
const HistoryEvent HIST_146[] = {
  { 1977, "[Kultura] Premiera filmu Star Wars w USA. (1977)" },
  { 1948, "[Polska] Stracono rotmistrza Witolda Pileckiego. (1948)" },
  { 1963, "[Swiat] W Addis Abebie powstala Organizacja Jednosci Afrykanskiej. (1963)" },
  { 2008, "[Nauka] Ladownik Phoenix osiadl na Marsie. (2008)" },
  { 1895, "[Historia] Oscar Wilde zostal skazany na dwa lata ciezkich robot. (1895)" },
};

// 26.05
const HistoryEvent HIST_147[] = {
  { 0, "[Historia] Dzien Matki w Polsce." },
  { 1831, "[Polska] Bitwa pod Ostroleka w czasie powstania listopadowego. (1831)" },
  { 1896, "[Swiat] Koronowano cara Mikolaja II. (1896)" },
  { 1969, "[Nauka] Apollo 10 powrocil na Ziemie po probie ladowania ksiezycowego. (1969)" },
  { 1926, "[Kultura] Urodzil sie Miles Davis. (1926)" },
};

// 27.05
const HistoryEvent HIST_148[] = {
  { 1937, "[Historia] Otwarto most Golden Gate w San Francisco. (1937)" },
  { 1990, "[Polska] Odbyly sie pierwsze wolne wybory samorzadowe po 1989 roku. (1990)" },
  { 1703, "[Swiat] Car Piotr I zalozyl Petersburg. (1703)" },
  { 1931, "[Nauka] Auguste Piccard wzniosl sie balonem do stratosfery. (1931)" },
  { 1963, "[Kultura] Ukazal sie album The Freewheelin Bob Dylan. (1963)" },
};

// 28.05
const HistoryEvent HIST_149[] = {
  { 585, "[Historia] Przewidziane zacmienie Slonca zakonczylo bitwe nad rzeka Halys. (585)" },
  { 1981, "[Polska] Zmarl prymas Stefan Wyszynski. (1981)" },
  { 1961, "[Swiat] Powstala Amnesty International. (1961)" },
  { 1937, "[Nauka] Powstala firma Volkswagen, wazna dla historii motoryzacji. (1937)" },
  { 1908, "[Kultura] Urodzil sie Ian Fleming, tworca Jamesa Bonda. (1908)" },
};

// 29.05
const HistoryEvent HIST_150[] = {
  { 1953, "[Historia] Edmund Hillary i Tenzing Norgay zdobyli Mount Everest. (1953)" },
  { 1453, "[Swiat] Turcy osmanscy zdobyli Konstantynopol. (1453)" },
  { 1969, "[Polska] Zalozono Uniwersytet Slaski w Katowicach. (1969)" },
  { 1919, "[Nauka] Podczas zacmienia potwierdzano ogolna teorie wzglednosci Einsteina. (1919)" },
  { 1913, "[Kultura] W Paryzu odbyla sie premiera Swieta wiosny Stravinskiego. (1913)" },
};

// 30.05
const HistoryEvent HIST_151[] = {
  { 1431, "[Historia] Spalono Joanne dArc w Rouen. (1431)" },
  { 1960, "[Polska] Rozpoczal sie pierwszy festiwal piosenki w Sopocie w przygotowaniach epoki. (1960)" },
  { 1913, "[Swiat] Podpisano traktat londynski konczacy I wojne balkanska. (1913)" },
  { 1971, "[Nauka] Wystrzelono Mariner 9, pierwsza sonde na orbicie Marsa. (1971)" },
  { 1922, "[Kultura] W Waszyngtonie poswiecono pomnik Lincolna. (1922)" },
};

// 31.05
const HistoryEvent HIST_152[] = {
  { 0, "[Historia] Swiatowy Dzien bez Tytoniu." },
  { 1926, "[Polska] Zgromadzenie Narodowe wybralo Jozefa Pilsudskiego prezydentem, lecz odmowil. (1926)" },
  { 1911, "[Swiat] Wodowano RMS Titanic. (1911)" },
  { 2008, "[Nauka] Sonda Phoenix potwierdzala obecnosc lodu wodnego na Marsie. (2008)" },
  { 1859, "[Kultura] Uruchomiono zegar Big Ben w Londynie. (1859)" },
};

// 01.06
const HistoryEvent HIST_153[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Dziecka obchodzony w wielu krajach." },
  { 1831, "[Polska] Zmarl Joachim Lelewel, historyk i dzialacz emigracyjny. (1831)" },
  { 1942, "[Swiat] Ukazal sie pierwszy numer konspiracyjnego wydania dziennika Anne Frank. (1942)" },
  { 1980, "[Nauka] Uruchomiono telewizyjna siec informacyjna CNN. (1980)" },
  { 1967, "[Kultura] Wydano album Sgt. Peppers Lonely Hearts Club Band. (1967)" },
};

// 02.06
const HistoryEvent HIST_154[] = {
  { 1953, "[Historia] Koronowano Elzbiete II w opactwie westminsterskim. (1953)" },
  { 1979, "[Polska] Jan Pawel II rozpoczal pierwsza pielgrzymke do Polski. (1979)" },
  { 1946, "[Swiat] Proklamowano Republike Wloska po referendum monarchicznym. (1946)" },
  { 1966, "[Nauka] Sonda Surveyor 1 wyladowala na Ksiezycu. (1966)" },
  { 1989, "[Kultura] Premiera filmu Stowarzyszenie Umarlych Poetow w USA. (1989)" },
};

// 03.06
const HistoryEvent HIST_155[] = {
  { 1965, "[Historia] Edward White odbyl pierwszy amerykanski spacer kosmiczny. (1965)" },
  { 1896, "[Polska] Urodzil sie Roman Dmowski wedlug kalendarza gregorianskiego. (1896)" },
  { 1940, "[Swiat] Zakonczyla sie ewakuacja wojsk alianckich z Dunkierki. (1940)" },
  { 2017, "[Nauka] Rakieta Ariane 5 wyniosla satelity ViaSat-2 i Eutelsat 172B. (2017)" },
  { 1924, "[Kultura] Zmarl Franz Kafka, autor Procesu. (1924)" },
};

// 04.06
const HistoryEvent HIST_156[] = {
  { 1989, "[Polska] Odbyly sie wybory czerwcowe, poczatek konca komunizmu w Polsce. (1989)" },
  { 1989, "[Swiat] W Pekinie wojsko stlumilo protesty na placu Tiananmen. (1989)" },
  { 1942, "[Historia] Rozpoczela sie bitwa o Midway. (1942)" },
  { 1783, "[Nauka] Bracia Montgolfier zaprezentowali lot balonu na ogrzane powietrze. (1783)" },
  { 1975, "[Kultura] Premiera filmu Szczeki Stevena Spielberga w USA. (1975)" },
};

// 05.06
const HistoryEvent HIST_157[] = {
  { 0, "[Historia] Swiatowy Dzien Srodowiska." },
  { 1257, "[Polska] Ksiaze Boleslaw Wstydliwy lokowal Krakow na prawie magdeburskim. (1257)" },
  { 1967, "[Swiat] Rozpoczela sie wojna szesciodniowa na Bliskim Wschodzie. (1967)" },
  { 1981, "[Nauka] CDC opisalo przypadki choroby pozniej nazwanej AIDS. (1981)" },
  { 1898, "[Kultura] Urodzil sie Federico Garcia Lorca. (1898)" },
};

// 06.06
const HistoryEvent HIST_158[] = {
  { 1944, "[Historia] D-Day: alianci wyladowali w Normandii. (1944)" },
  { 1523, "[Polska] Zygmunt I Stary zatwierdzil statut torunski dla Prus Krolewskich. (1523)" },
  { 1982, "[Swiat] Izrael rozpoczal operacje Pokoj dla Galilei w Libanie. (1982)" },
  { 1933, "[Nauka] Otwarto pierwsze kino samochodowe typu drive-in w USA. (1933)" },
  { 1799, "[Nauka] Urodzil sie Aleksandr Puszkin, klasyk literatury rosyjskiej. (1799)" },
};

// 07.06
const HistoryEvent HIST_159[] = {
  { 1494, "[Historia] Podpisano traktat w Tordesillas. (1494)" },
  { 1939, "[Polska] Urodzil sie Marian Glinka, aktor i kulturysta. (1939)" },
  { 1965, "[Swiat] Sad Najwyzszy USA wydal wyrok Griswold v. Connecticut. (1965)" },
  { 1954, "[Nauka] Zmarl Alan Turing, pionier informatyki. (1954)" },
  { 1982, "[Kultura] Urodzil sie polski tenisista Lukasz Kubot. (1982)" },
};

// 08.06
const HistoryEvent HIST_160[] = {
  { 632, "[Historia] Zmarl Mahomet, prorok islamu. (632)" },
  { 1991, "[Polska] W Warszawie otwarto pierwsza Gielde Papierow Wartosciowych po 1989 roku. (1991)" },
  { 1783, "[Swiat] Rozpoczela sie erupcja wulkanu Laki na Islandii. (1783)" },
  { 1959, "[Nauka] Wodowano USS George Washington, pierwszy okret podwodny z rakietami balistycznymi. (1959)" },
  { 1949, "[Kultura] Wydano powiesc Rok 1984 Georgea Orwella. (1949)" },
};

// 09.06
const HistoryEvent HIST_161[] = {
  { 1815, "[Historia] Zakonczyl obrady kongres wiedenski. (1815)" },
  { 1595, "[Polska] Urodzil sie Wladyslaw IV Waza, krol Polski. (1595)" },
  { 1934, "[Swiat] Debiut Kaczora Donalda w filmie The Wise Little Hen. (1934)" },
  { 1967, "[Nauka] Chiny przeprowadzily pierwsza probe bomby wodorowej. (1967)" },
  { 1870, "[Kultura] Zmarl Charles Dickens, autor Olivera Twista. (1870)" },
};

// 10.06
const HistoryEvent HIST_162[] = {
  { 1940, "[Historia] Wlochy przystapily do II wojny swiatowej. (1940)" },
  { 1794, "[Polska] Bitwa pod Szczekocinami w czasie insurekcji kosciuszkowskiej. (1794)" },
  { 1942, "[Swiat] Niemcy zniszczyli czeska wies Lidice. (1942)" },
  { 2003, "[Nauka] Start sondy Mars Exploration Rover Spirit. (2003)" },
  { 1922, "[Kultura] Urodzila sie Judy Garland, aktorka i piosenkarka. (1922)" },
};

// 11.06
const HistoryEvent HIST_163[] = {
  { 1184, "[Historia] Wojna trojanska: tradycyjna data upadku Troi. (1184)" },
  { 1579, "[Polska] Stefan Batory rozpoczal wyprawe przeciw Rosji o Inflanty. (1579)" },
  { 1770, "[Swiat] James Cook odkryl Wielka Rafe Koralowa dla Europy. (1770)" },
  { 2002, "[Nauka] Kongres USA uznal Antonio Meucciego za pioniera telefonu. (2002)" },
  { 1982, "[Kultura] Premiera filmu E.T. w USA. (1982)" },
};

// 12.06
const HistoryEvent HIST_164[] = {
  { 0, "[Historia] Swiatowy Dzien Sprzeciwu wobec Pracy Dzieci." },
  { 1444, "[Polska] Wladyslaw III Warnenczyk wypowiedzial rozejm z Turcja. (1444)" },
  { 1898, "[Swiat] Filipiny oglosily niepodleglosc od Hiszpanii. (1898)" },
  { 1967, "[Nauka] Wystrzelono sonde Wenera 4 w kierunku Wenus. (1967)" },
  { 1929, "[Kultura] Urodzila sie Anne Frank, autorka dziennika. (1929)" },
};

// 13.06
const HistoryEvent HIST_165[] = {
  { 313, "[Historia] Edykt mediolanski zapewnil chrzescijanom wolnosc wyznania. (313)" },
  { 1611, "[Polska] Wojska polskie zdobyly Smolensk po dlugim oblezeniu. (1611)" },
  { 1966, "[Swiat] Sad Najwyzszy USA wydal wyrok Miranda v. Arizona. (1966)" },
  { 1983, "[Nauka] Pioneer 10 minela orbite Neptuna i opuscila region planet. (1983)" },
  { 1865, "[Kultura] Urodzil sie William Butler Yeats. (1865)" },
};

// 14.06
const HistoryEvent HIST_166[] = {
  { 0, "[Historia] Swiatowy Dzien Krwiodawcy." },
  { 1940, "[Polska] Pierwszy transport polskich wiezniow dotarl do Auschwitz. (1940)" },
  { 1777, "[Swiat] Kongres USA przyjal wzor flagi Stanow Zjednoczonych. (1777)" },
  { 1951, "[Nauka] UNIVAC I zostal dostarczony do amerykanskiego biura spisowego. (1951)" },
  { 1982, "[Kultura] Argentynskie wojska skapitulowaly na Falklandach. (1982)" },
};

// 15.06
const HistoryEvent HIST_167[] = {
  { 1215, "[Historia] Jan bez Ziemi zatwierdzil Magna Carta. (1215)" },
  { 1907, "[Polska] Urodzil sie Janusz Kusocinski, mistrz olimpijski. (1907)" },
  { 1846, "[Swiat] USA i Wielka Brytania podpisaly traktat o granicy Oregonu. (1846)" },
  { 1919, "[Nauka] John Alcock i Arthur Brown zakonczyli pierwszy przelot przez Atlantyk bez ladowania. (1919)" },
  { 1994, "[Kultura] Premiera filmu Krol Lew w USA. (1994)" },
};

// 16.06
const HistoryEvent HIST_168[] = {
  { 1963, "[Historia] Walentina Tierieszkowa jako pierwsza kobieta poleciala w kosmos. (1963)" },
  { 1944, "[Polska] Oddzial AK wysadzil pociag pod Pielaszowem w akcji Burza. (1944)" },
  { 1976, "[Swiat] W Soweto rozpoczal sie bunt uczniow przeciw apartheidowi. (1976)" },
  { 2012, "[Nauka] Chiny wyslaly zaloge Shenzhou 9 do modulu Tiangong-1. (2012)" },
  { 1904, "[Kultura] Bloomsday: akcja Ulissesa Jamesa Joycea rozgrywa sie tego dnia. (1904)" },
};

// 17.06
const HistoryEvent HIST_169[] = {
  { 0, "[Historia] Swiatowy Dzien Walki z Pustynnieniem i Susza." },
  { 1696, "[Polska] Zmarl Jan III Sobieski, zwyciezca spod Wiednia. (1696)" },
  { 1972, "[Swiat] Afera Watergate: zatrzymano wlamywaczy w kompleksie Watergate. (1972)" },
  { 1885, "[Nauka] Do Nowego Jorku przybyla Statua Wolnosci w czesciach. (1885)" },
  { 1944, "[Kultura] Islandia oglosila republike i niezaleznosc od Danii. (1944)" },
};

// 18.06
const HistoryEvent HIST_170[] = {
  { 1815, "[Historia] Bitwa pod Waterloo zakonczyla epoke Napoleona. (1815)" },
  { 1792, "[Polska] Wojska polskie wygraly bitwe pod Zielencami. (1792)" },
  { 1940, "[Swiat] Charles de Gaulle wyglosil apel 18 czerwca. (1940)" },
  { 1983, "[Nauka] Sally Ride zostala pierwsza Amerykanka w kosmosie. (1983)" },
  { 1942, "[Kultura] Urodzil sie Paul McCartney. (1942)" },
};

// 19.06
const HistoryEvent HIST_171[] = {
  { 0, "[Historia] Juneteenth: swieto zniesienia niewolnictwa w USA." },
  { 1922, "[Polska] Wojsko Polskie wkroczylo do Katowic podczas przylaczania Gornego Slaska. (1922)" },
  { 1865, "[Swiat] W Teksasie ogloszono wolnosc ostatnim zniewolonym osobom w USA. (1865)" },
  { 1976, "[Nauka] Sonda Viking 1 weszla na orbite Marsa. (1976)" },
  { 1978, "[Kultura] Premiera komiksu Garfield. (1978)" },
};

// 20.06
const HistoryEvent HIST_172[] = {
  { 451, "[Historia] Bitwa na Polach Katalaunijskich powstrzymala Hunow Attyli. (451)" },
  { 1922, "[Polska] Powitano wojska polskie w Katowicach po decyzjach plebiscytowych. (1922)" },
  { 1837, "[Swiat] Krolowa Wiktoria objela tron Wielkiej Brytanii. (1837)" },
  { 1990, "[Nauka] Odkryto planetoide Eureka, pierwszego trojanczyka Marsa. (1990)" },
  { 1975, "[Kultura] Premiera filmu Szczeki w szerokiej dystrybucji USA. (1975)" },
};

// 21.06
const HistoryEvent HIST_173[] = {
  { 0, "[Historia] Przesilenie letnie: najdluzszy dzien roku na polkuli polnocnej." },
  { 1940, "[Polska] Niemcy przeprowadzili egzekucje w Palmirach. (1940)" },
  { 1788, "[Swiat] Konstytucja USA weszla w zycie po ratyfikacji przez New Hampshire. (1788)" },
  { 2004, "[Nauka] SpaceShipOne wykonal pierwszy prywatny zalogowy lot suborbitalny. (2004)" },
  { 1982, "[Kultura] Ksiaze William urodzil sie w Londynie. (1982)" },
};

// 22.06
const HistoryEvent HIST_174[] = {
  { 1941, "[Historia] Niemcy zaatakowaly ZSRR, rozpoczynajac operacje Barbarossa. (1941)" },
  { 1792, "[Polska] Ustanowiono order Virtuti Militari po bitwie pod Zielencami. (1792)" },
  { 1940, "[Swiat] Francja podpisala zawieszenie broni z Niemcami. (1940)" },
  { 1978, "[Nauka] Odkryto Charona, najwiekszy ksiezyc Plutona. (1978)" },
  { 1633, "[Kultura] Galileusz zostal zmuszony do odwolania pogladow heliocentrycznych. (1633)" },
};

// 23.06
const HistoryEvent HIST_175[] = {
  { 0, "[Historia] Dzien Ojca w Polsce." },
  { 1792, "[Polska] Krol Stanislaw August ustanowil order Virtuti Militari. (1792)" },
  { 2016, "[Swiat] Brytyjczycy zaglosowali za wyjsciem z Unii Europejskiej. (2016)" },
  { 1961, "[Nauka] Wszedl w zycie Traktat antarktyczny. (1961)" },
  { 1912, "[Kultura] Urodzil sie Alan Turing, matematyk i kryptolog. (1912)" },
};

// 24.06
const HistoryEvent HIST_176[] = {
  { 1314, "[Historia] Szkoci zwyciezyli Anglikow pod Bannockburn. (1314)" },
  { 972, "[Polska] Bitwa pod Cedynia, zwyciestwo wojsk Mieszka I. (972)" },
  { 1812, "[Swiat] Napoleon rozpoczal wyprawe na Rosje. (1812)" },
  { 1947, "[Nauka] Kenneth Arnold opisal obserwacje, ktora spopularyzowala termin latajace spodki. (1947)" },
  { 1901, "[Kultura] Pierwsza wystawa Pabla Picassa w Paryzu. (1901)" },
};

// 25.06
const HistoryEvent HIST_177[] = {
  { 1950, "[Historia] Rozpoczela sie wojna koreanska. (1950)" },
  { 1976, "[Polska] Protesty robotnicze w Radomiu, Ursusie i Plocku. (1976)" },
  { 1991, "[Swiat] Slowenia i Chorwacja oglosily niepodleglosc. (1991)" },
  { 1997, "[Nauka] Bezzalogowy statek Progress zderzyl sie ze stacja Mir. (1997)" },
  { 2009, "[Kultura] Zmarl Michael Jackson. (2009)" },
};

// 26.06
const HistoryEvent HIST_178[] = {
  { 1945, "[Historia] Podpisano Karte Narodow Zjednoczonych w San Francisco. (1945)" },
  { 1295, "[Polska] Przemysl II zostal koronowany na krola Polski. (1295)" },
  { 1960, "[Swiat] Madagaskar uzyskal niepodleglosc od Francji. (1960)" },
  { 1974, "[Nauka] W sklepie po raz pierwszy zeskanowano kod kreskowy UPC. (1974)" },
  { 1997, "[Kultura] Wydano pierwsza powiesc o Harrym Potterze. (1997)" },
};

// 27.06
const HistoryEvent HIST_179[] = {
  { 1950, "[Historia] USA zdecydowaly o wsparciu Korei Poludniowej w wojnie koreanskiej. (1950)" },
  { 1587, "[Polska] Rozpoczelo sie bezkrolewie po smierci Stefana Batorego w cieniu walk elekcyjnych. (1587)" },
  { 1977, "[Swiat] Dzibuti uzyskalo niepodleglosc od Francji. (1977)" },
  { 1967, "[Nauka] W Londynie zainstalowano pierwszy bankomat Barclaysa. (1967)" },
  { 1905, "[Kultura] Bunt na pancerniku Potiomkin stal sie symbolem rewolucji 1905 roku. (1905)" },
};

// 28.06
const HistoryEvent HIST_180[] = {
  { 1914, "[Historia] Zamach w Sarajewie stal sie iskra I wojny swiatowej. (1914)" },
  { 1956, "[Polska] Poznanski Czerwiec: robotniczy protest zostal krwawo stlumiony. (1956)" },
  { 1919, "[Swiat] Podpisano traktat wersalski konczacy I wojne swiatowa. (1919)" },
  { 2005, "[Nauka] Sonda Deep Impact wypuscila impaktor w kierunku komety Tempel 1. (2005)" },
  { 1577, "[Kultura] Urodzil sie Peter Paul Rubens, malarz baroku. (1577)" },
};

// 29.06
const HistoryEvent HIST_181[] = {
  { 0, "[Historia] Uroczystosc swietych Piotra i Pawla w tradycji chrzescijanskiej." },
  { 1941, "[Polska] Niemcy rozpoczeli masowe egzekucje profesorow lwowskich w lipcu po zajeciu miasta. (1941)" },
  { 2007, "[Swiat] Do sprzedazy trafil pierwszy iPhone. (2007)" },
  { 1995, "[Nauka] Wahadlowiec Atlantis polaczyl sie ze stacja Mir. (1995)" },
  { 1613, "[Kultura] Spalil sie teatr Globe w Londynie. (1613)" },
};

// 30.06
const HistoryEvent HIST_182[] = {
  { 1908, "[Historia] Katastrofa tunguska powalila las na Syberii. (1908)" },
  { 1946, "[Polska] Odbylo sie referendum ludowe 3 razy tak. (1946)" },
  { 1960, "[Swiat] Kongo uzyskalo niepodleglosc od Belgii. (1960)" },
  { 1971, "[Nauka] Zaloga Sojuza 11 zginela podczas powrotu na Ziemie. (1971)" },
  { 1936, "[Kultura] Ukazala sie powiesc Przeminelo z wiatrem. (1936)" },
};

// 01.07
const HistoryEvent HIST_183[] = {
  { 1569, "[Polska] Podpisano unie lubelska, tworzac Rzeczpospolita Obojga Narodow. (1569)" },
  { 1867, "[Swiat] Powstalo Dominium Kanady po wejsciu w zycie British North America Act. (1867)" },
  { 1858, "[Nauka] Przedstawiono prace Darwina i Wallacea o doborze naturalnym. (1858)" },
  { 1979, "[Kultura] Sony wprowadzilo do sprzedazy przenosny odtwarzacz Walkman. (1979)" },
  { 1997, "[Historia] Hongkong zostal przekazany Chinom po okresie brytyjskiej administracji. (1997)" },
};

// 02.07
const HistoryEvent HIST_184[] = {
  { 1776, "[Historia] Kongres Kontynentalny przeglosowal niepodleglosc trzynastu kolonii. (1776)" },
  { 1964, "[Swiat] Lyndon B. Johnson podpisal Civil Rights Act w USA. (1964)" },
  { 1900, "[Nauka] Sterowiec Zeppelin LZ 1 odbyl pierwszy lot nad Jeziorem Bodenskim. (1900)" },
  { 1961, "[Kultura] Samobojstwo Ernesta Hemingwaya zamknelo zycie noblisty literatury. (1961)" },
  { 1927, "[Polska] Rozpoczeto budowe portu wojennego na Oksywiu w Gdyni. (1927)" },
};

// 03.07
const HistoryEvent HIST_185[] = {
  { 1886, "[Nauka] Karl Benz odbyl publiczna jazde Patent-Motorwagen w Mannheim. (1886)" },
  { 1971, "[Kultura] Zmarl Jim Morrison, wokalista The Doors. (1971)" },
  { 1608, "[Swiat] Samuel de Champlain zalozyl Quebec. (1608)" },
  { 1940, "[Historia] Brytyjczycy zaatakowali flote francuska pod Mers-el-Kebir. (1940)" },
  { 1947, "[Polska] W Krakowie rozpoczal sie proces kierownictwa PSL Stanislawa Mikolajczyka. (1947)" },
};

// 04.07
const HistoryEvent HIST_186[] = {
  { 1776, "[Historia] Przyjeto Deklaracje Niepodleglosci Stanow Zjednoczonych. (1776)" },
  { 1943, "[Polska] W katastrofie gibraltarskiej zginal gen. Wladyslaw Sikorski. (1943)" },
  { 1997, "[Nauka] Sonda Mars Pathfinder wyladowala na Marsie. (1997)" },
  { 1865, "[Kultura] Wydano Alicje w Krainie Czarow Lewisa Carrolla. (1865)" },
  { 1802, "[Swiat] Otwarto akademie wojskowa West Point w USA. (1802)" },
};

// 05.07
const HistoryEvent HIST_187[] = {
  { 1946, "[Historia] Zaprezentowano bikini, nowy dwuczesciowy stroj kapielowy. (1946)" },
  { 1687, "[Nauka] Ukazalo sie Principia Mathematica Isaaca Newtona. (1687)" },
  { 1996, "[Nauka] Urodzila sie owca Dolly, pierwszy sklonowany ssak z komorki doroslej. (1996)" },
  { 1830, "[Polska] Urodzil sie Wladyslaw Zamoyski, general powstania styczniowego. (1830)" },
  { 1811, "[Swiat] Wenezuela oglosila niepodleglosc od Hiszpanii. (1811)" },
};

// 06.07
const HistoryEvent HIST_188[] = {
  { 1415, "[Historia] Jan Hus zostal spalony na stosie w Konstancji. (1415)" },
  { 1945, "[Polska] USA i Wielka Brytania uznaly Tymczasowy Rzad Jednosci Narodowej. (1945)" },
  { 1885, "[Nauka] Louis Pasteur zastosowal szczepionke przeciw wsciekliznie u chlopca. (1885)" },
  { 1957, "[Kultura] John Lennon poznal Paula McCartneya podczas festynu w Liverpoolu. (1957)" },
  { 1964, "[Swiat] Malawi uzyskalo niepodleglosc od Wielkiej Brytanii. (1964)" },
};

// 07.07
const HistoryEvent HIST_189[] = {
  { 1937, "[Historia] Incydent na moscie Marco Polo rozpoczal wojne japonsko-chinska. (1937)" },
  { 1572, "[Polska] Zmarl Zygmunt II August, ostatni krol z dynastii Jagiellonow. (1572)" },
  { 1985, "[Nauka] Boris Becker wygral Wimbledon jako najmlodszy mistrz turnieju. (1985)" },
  { 1898, "[Kultura] USA formalnie anektowaly Hawaje. (1898)" },
  { 2005, "[Swiat] Zamachy terrorystyczne w Londynie zabily 52 osoby. (2005)" },
};

// 08.07
const HistoryEvent HIST_190[] = {
  { 1497, "[Historia] Vasco da Gama wyplynal z Lizbony w droge do Indii. (1497)" },
  { 1709, "[Swiat] Bitwa pod Poltawa zatrzymala szwedzka potege Karola XII. (1709)" },
  { 2011, "[Nauka] Wahadlowiec Atlantis wystartowal w ostatnia misje programu Shuttle. (2011)" },
  { 1621, "[Polska] Urodzil sie Jean de La Fontaine, autor bajek znanych w Europie. (1621)" },
  { 1889, "[Kultura] Ukazal sie pierwszy numer The Wall Street Journal. (1889)" },
};

// 09.07
const HistoryEvent HIST_191[] = {
  { 1797, "[Polska] Powstal Mazurek Dabrowskiego, piesn Legionow Polskich. (1797)" },
  { 1816, "[Historia] Argentyna oglosila niepodleglosc. (1816)" },
  { 1955, "[Nauka] Ogloszono manifest Russella-Einsteina przeciw broni jadrowej. (1955)" },
  { 2006, "[Swiat] Wloch zostali mistrzami swiata w pilce noznej w Berlinie. (2006)" },
  { 1956, "[Kultura] Tom Hanks urodzil sie w Kalifornii. (1956)" },
};

// 10.07
const HistoryEvent HIST_192[] = {
  { 1940, "[Historia] Rozpoczela sie bitwa o Anglie. (1940)" },
  { 1941, "[Polska] Pogrom w Jedwabnem stal sie jedna z tragedii okupacji. (1941)" },
  { 1962, "[Nauka] Wystrzelono Telstar 1, pierwszego aktywnego satelite telekomunikacyjnego. (1962)" },
  { 1925, "[Kultura] Rozpoczal sie proces nauczyciela Johna Scopesa w Tennessee. (1925)" },
  { 1973, "[Swiat] Bahamy uzyskaly niepodleglosc od Wielkiej Brytanii. (1973)" },
};

// 11.07
const HistoryEvent HIST_193[] = {
  { 1943, "[Polska] Kulminacja rzezi wolynskiej dokonanej przez UPA na ludnosci polskiej. (1943)" },
  { 1979, "[Historia] Skylab spadl w atmosferze, a szczatki dotarly nad Australia. (1979)" },
  { 1893, "[Nauka] Urodzil sie Kokichi Mikimoto, tworca hodowli perel. (1893)" },
  { 1960, "[Kultura] Wydano powiesc Zabic drozda Harper Lee. (1960)" },
  { 1995, "[Swiat] Rozpoczela sie masakra w Srebrenicy. (1995)" },
};

// 12.07
const HistoryEvent HIST_194[] = {
  { 100, "[Historia] Urodzil sie Juliusz Cezar wedlug tradycyjnej daty. (100)" },
  { 1410, "[Polska] Wladyslaw Jagiello ruszyl ku Grunwaldowi podczas wielkiej wojny. (1410)" },
  { 1962, "[Kultura] The Rolling Stones zagrali pierwszy koncert w Londynie. (1962)" },
  { 1979, "[Swiat] Kiribati uzyskalo niepodleglosc od Wielkiej Brytanii. (1979)" },
  { 1998, "[Nauka] Francja wygrala mundial, pokazujac skale analizy sportowej w nowej erze. (1998)" },
};

// 13.07
const HistoryEvent HIST_195[] = {
  { 1923, "[Historia] Na wzgorzu Hollywood ustawiono napis Hollywoodland. (1923)" },
  { 1943, "[Polska] Niemcy spacyfikowali wies Michniow. (1943)" },
  { 1977, "[Swiat] Somalia wypowiedziala wojne Etiopii, rozpoczynajac wojne o Ogaden. (1977)" },
  { 1977, "[Nauka] Awaria pradu w Nowym Jorku pokazala slabosc wielkich sieci energetycznych. (1977)" },
  { 1985, "[Kultura] Odbyly sie koncerty Live Aid w Londynie i Filadelfii. (1985)" },
};

// 14.07
const HistoryEvent HIST_196[] = {
  { 1789, "[Historia] Zdobycie Bastylii stalo sie symbolem rewolucji francuskiej. (1789)" },
  { 1410, "[Polska] Wojska polsko-litewskie dotarly pod Grunwald. (1410)" },
  { 1965, "[Nauka] Sonda Mariner 4 wykonala pierwsze bliskie zdjecia Marsa. (1965)" },
  { 1913, "[Kultura] Urodzil sie Gerald Ford, pozniejszy prezydent USA. (1913)" },
  { 1958, "[Swiat] W Iraku obalono monarchie Haszymidow. (1958)" },
};

// 15.07
const HistoryEvent HIST_197[] = {
  { 1410, "[Polska] Bitwa pod Grunwaldem zakonczyla sie zwyciestwem nad zakonem krzyzackim. (1410)" },
  { 1799, "[Historia] Odkryto Kamien z Rosetty, klucz do odczytania hieroglifow. (1799)" },
  { 1975, "[Nauka] Misja Apollo-Sojuz rozpoczela wspolny lot USA i ZSRR. (1975)" },
  { 1606, "[Kultura] Urodzil sie Rembrandt, malarz holenderskiego baroku. (1606)" },
  { 1099, "[Swiat] Krzyzowcy zdobyli Jerozolime podczas I krucjaty. (1099)" },
};

// 16.07
const HistoryEvent HIST_198[] = {
  { 1945, "[Nauka] Test Trinity byl pierwsza eksplozja bomby atomowej. (1945)" },
  { 1969, "[Historia] Wystartowala misja Apollo 11 na Ksiezyc. (1969)" },
  { 1054, "[Swiat] Wielka schizma wschodnia podzielila chrzescijanstwo. (1054)" },
  { 1661, "[Polska] W Warszawie ukazal sie pierwszy numer Merkuriusza Polskiego. (1661)" },
  { 1951, "[Kultura] Wydano powiesc Buszujacy w zbozu J.D. Salingera. (1951)" },
};

// 17.07
const HistoryEvent HIST_199[] = {
  { 1918, "[Historia] Zamordowano cara Mikolaja II i jego rodzine w Jekaterynburgu. (1918)" },
  { 1944, "[Polska] Rozpoczela sie operacja Ostra Brama w Wilnie. (1944)" },
  { 1955, "[Swiat] Otwarto Disneyland w Kalifornii. (1955)" },
  { 1975, "[Nauka] Apollo i Sojuz polaczyly sie na orbicie. (1975)" },
  { 1997, "[Kultura] Odbyla sie premiera filmu Titanic Jamesa Camerona w Tokio. (1997)" },
};

// 18.07
const HistoryEvent HIST_200[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Nelsona Mandeli." },
  { 1944, "[Polska] Zolnierze 2 Korpusu zdobyli Ancone we Wloszech. (1944)" },
  { 64, "[Swiat] Wielki pozar Rzymu zniszczyl znaczna czesc miasta. (64)" },
  { 1968, "[Nauka] Zalozono firme Intel. (1968)" },
  { 1817, "[Kultura] Zmarl Jane Austen, autorka Dumy i uprzedzenia. (1817)" },
};

// 19.07
const HistoryEvent HIST_201[] = {
  { 1870, "[Historia] Francja wypowiedziala wojne Prusom. (1870)" },
  { 1989, "[Polska] Wojciech Jaruzelski zostal wybrany prezydentem PRL. (1989)" },
  { 1843, "[Swiat] Wodowano SS Great Britain, nowoczesny parowiec oceaniczny. (1843)" },
  { 1952, "[Nauka] Otwarto Letnie Igrzyska Olimpijskie w Helsinkach. (1952)" },
  { 1947, "[Kultura] Urodzil sie Brian May, gitarzysta Queen i astrofizyk. (1947)" },
};

// 20.07
const HistoryEvent HIST_202[] = {
  { 1969, "[Historia] Apollo 11 wyladowal na Ksiezycu. (1969)" },
  { 1944, "[Polska] Nieudany zamach na Hitlera wykonali niemieccy spiskowcy. (1944)" },
  { 1976, "[Nauka] Lander Viking 1 wyladowal na Marsie. (1976)" },
  { 1937, "[Kultura] Zmarl Guglielmo Marconi, pionier radia. (1937)" },
  { 1903, "[Swiat] Ford Motor Company wyslala pierwszy samochod do klienta. (1903)" },
};

// 21.07
const HistoryEvent HIST_203[] = {
  { 0, "[Historia] Belgia obchodzi swieto narodowe po zaprzysiezeniu Leopolda I." },
  { 1944, "[Polska] PKWN oglosil w Chelmie powstanie nowej wladzy komunistycznej. (1944)" },
  { 1969, "[Nauka] Neil Armstrong i Buzz Aldrin spacerowali po Ksiezycu. (1969)" },
  { 1899, "[Kultura] Urodzil sie Ernest Hemingway. (1899)" },
  { 365, "[Swiat] Trzesienie ziemi i tsunami zniszczyly Aleksandrie i wybrzeza Morza Srodziemnego. (365)" },
};

// 22.07
const HistoryEvent HIST_204[] = {
  { 1944, "[Polska] Ogloszono Manifest PKWN, symboliczna date Polski Ludowej. (1944)" },
  { 1793, "[Historia] Alexander Mackenzie dotarl do Pacyfiku przez Kanade. (1793)" },
  { 1933, "[Nauka] Wiley Post zakonczyl pierwszy samotny lot dookola swiata. (1933)" },
  { 1942, "[Swiat] Rozpoczela sie wielka akcja likwidacyjna getta warszawskiego. (1942)" },
  { 1959, "[Kultura] Ed Wood wypuscil film Plan 9 from Outer Space. (1959)" },
};

// 23.07
const HistoryEvent HIST_205[] = {
  { 1829, "[Historia] William Austin Burt opatentowal typographer, przodka maszyny do pisania. (1829)" },
  { 1944, "[Polska] Wyzwolono oboz koncentracyjny na Majdanku. (1944)" },
  { 1952, "[Swiat] Powstala Europejska Wspolnota Wegla i Stali. (1952)" },
  { 1995, "[Nauka] Odkryto komete Hale-Bopp. (1995)" },
  { 1888, "[Kultura] Urodzil sie Raymond Chandler, tworca prozy noir. (1888)" },
};

// 24.07
const HistoryEvent HIST_206[] = {
  { 1911, "[Historia] Hiram Bingham dotarl do ruin Machu Picchu. (1911)" },
  { 1920, "[Polska] Utworzono Rzad Obrony Narodowej z Wincentym Witosem. (1920)" },
  { 1969, "[Nauka] Zaloga Apollo 11 bezpiecznie wodowala na Ziemi. (1969)" },
  { 1980, "[Kultura] Zmarl Peter Sellers, aktor znany z Rozowej Pantery. (1980)" },
  { 1923, "[Swiat] Podpisano traktat lozanski ustalajacy granice Turcji. (1923)" },
};

// 25.07
const HistoryEvent HIST_207[] = {
  { 0, "[Historia] Dzien swietego Jakuba, wazny dla pielgrzymow do Santiago." },
  { 1655, "[Polska] Wojska szwedzkie wkroczyly do Rzeczypospolitej w czasie potopu. (1655)" },
  { 1978, "[Nauka] Urodzila sie Louise Brown, pierwsze dziecko z zaplodnienia in vitro. (1978)" },
  { 1909, "[Swiat] Louis Bleriot przelecial samolotem nad kanalem La Manche. (1909)" },
  { 1894, "[Kultura] Urodzil sie Gavrilo Princip, zamachowiec z Sarajewa. (1894)" },
};

// 26.07
const HistoryEvent HIST_208[] = {
  { 1945, "[Historia] Ogloszono deklaracje poczdamska wobec Japonii. (1945)" },
  { 1400, "[Polska] Odnowiono Akademie Krakowska dzieki fundacji Jadwigi. (1400)" },
  { 1953, "[Swiat] Rozpoczela sie rewolucja kubanska atakiem na koszary Moncada. (1953)" },
  { 1963, "[Nauka] Wystrzelono Syncom 2, pierwszego satelite geosynchronicznego. (1963)" },
  { 1943, "[Kultura] Urodzil sie Mick Jagger, wokalista The Rolling Stones. (1943)" },
};

// 27.07
const HistoryEvent HIST_209[] = {
  { 1953, "[Historia] Rozejm w Panmundzomie zakonczyl walki wojny koreanskiej. (1953)" },
  { 1944, "[Polska] Lwow zostal zajety przez Armie Czerwona i AK po walkach z Niemcami. (1944)" },
  { 1890, "[Nauka] Zmarl Vincent van Gogh, malarz postimpresjonista. (1890)" },
  { 1940, "[Kultura] Krolik Bugs zadebiutowal w filmie A Wild Hare. (1940)" },
  { 2012, "[Swiat] Otwarto Letnie Igrzyska Olimpijskie w Londynie. (2012)" },
};

// 28.07
const HistoryEvent HIST_210[] = {
  { 1914, "[Historia] Austro-Wegry wypowiedzialy wojne Serbii, rozpoczynajac I wojne swiatowa. (1914)" },
  { 1993, "[Polska] Podpisano konkordat miedzy Polska a Stolica Apostolska. (1993)" },
  { 1866, "[Nauka] Urodzila sie Beatrix Potter, autorka i ilustratorka przyrodnicza. (1866)" },
  { 1741, "[Kultura] Zmarl Antonio Vivaldi, kompozytor baroku. (1741)" },
  { 1821, "[Swiat] Peru oglosilo niepodleglosc od Hiszpanii. (1821)" },
};

// 29.07
const HistoryEvent HIST_211[] = {
  { 1948, "[Historia] Otwarto Igrzyska Olimpijskie w Londynie po II wojnie swiatowej. (1948)" },
  { 1921, "[Polska] Urodzil sie Chris Marker, francuski rezyser polskiego pochodzenia. (1921)" },
  { 1958, "[Nauka] Utworzono NASA, agencje kosmiczna USA. (1958)" },
  { 1836, "[Swiat] Uroczyste otwarcie Luku Triumfalnego w Paryzu. (1836)" },
  { 1954, "[Kultura] Ukazala sie pierwsza czesc Wladcy Pierscieni. (1954)" },
};

// 30.07
const HistoryEvent HIST_212[] = {
  { 0, "[Historia] Miedzynarodowy Dzien Przyjazni." },
  { 1941, "[Polska] Podpisano uklad Sikorski-Majski przywracajacy stosunki z ZSRR. (1941)" },
  { 1965, "[Swiat] Lyndon B. Johnson podpisal Medicare i Medicaid w USA. (1965)" },
  { 1971, "[Nauka] Apollo 15 wyladowal na Ksiezycu. (1971)" },
  { 1818, "[Kultura] Urodzila sie Emily Bronte, autorka Wichrowych Wzgorz. (1818)" },
};

// 31.07
const HistoryEvent HIST_213[] = {
  { 1944, "[Polska] Dowodztwo AK wydalo rozkaz rozpoczecia powstania warszawskiego nastepnego dnia. (1944)" },
  { 1498, "[Historia] Krzysztof Kolumb dotarl do Trynidadu podczas trzeciej wyprawy. (1498)" },
  { 1971, "[Nauka] Astronauci Apollo 15 jako pierwsi uzyli pojazdu ksiezycowego. (1971)" },
  { 1965, "[Kultura] Urodzila sie J.K. Rowling, autorka Harryego Pottera. (1965)" },
  { 2006, "[Swiat] Fidel Castro przekazal czasowo wladze Raulowi Castro. (2006)" },
};

// 01.08
const HistoryEvent HIST_214[] = {
  { 1944, "[Polska] Wybuchlo Powstanie Warszawskie. (1944)" },
  { 1834, "[Historia] Zniesiono niewolnictwo w Imperium Brytyjskim. (1834)" },
  { 1981, "[Kultura] Uruchomiono stacje MTV w USA. (1981)" },
  { 2008, "[Nauka] Nastapilo czesciowe zacmienie Slonca widoczne w wielu krajach. (2008)" },
  { 0, "[Historia] Narodowy Dzien Pamieci Powstania Warszawskiego w Polsce." },
};

// 02.08
const HistoryEvent HIST_215[] = {
  { 1934, "[Historia] Po smierci Hindenburga Adolf Hitler polaczyl urzedy prezydenta i kanclerza. (1934)" },
  { 1944, "[Polska] W KL Auschwitz-Birkenau Niemcy zlikwidowali tzw. oboz rodzinny Romow. (1944)" },
  { 1870, "[Historia] Otwarto Tower Subway, pierwszy tunel kolejowy pod Tamiza. (1870)" },
  { 1990, "[Swiat] Irak zaatakowal Kuwejt. (1990)" },
  { 0, "[Historia] Europejski Dzien Pamieci o Zagladzie Romow i Sinti." },
};

// 03.08
const HistoryEvent HIST_216[] = {
  { 1492, "[Historia] Krzysztof Kolumb wyplynal z Palos w pierwsza podroz przez Atlantyk. (1492)" },
  { 1904, "[Historia] Brytyjska ekspedycja wkroczyla do Lhasy w Tybecie. (1904)" },
  { 1944, "[Polska] Trwalo Powstanie Warszawskie; walki objely wiele dzielnic miasta. (1944)" },
  { 1958, "[Nauka] Atomowy okret podwodny USS Nautilus przeplynal pod biegunem polnocnym. (1958)" },
  { 1977, "[Kultura] Tandy oglosilo komputer TRS-80, jeden z pierwszych popularnych mikrokomputerow. (1977)" },
};

// 04.08
const HistoryEvent HIST_217[] = {
  { 1704, "[Historia] Podczas wojny o sukcesje hiszpanska Anglicy zajeli Gibraltar. (1704)" },
  { 1914, "[Historia] Niemcy zaatakowaly Belgie, a Wielka Brytania wypowiedziala wojne Niemcom. (1914)" },
  { 1944, "[Polska] W Powstaniu Warszawskim toczyly sie ciezkie walki o Wole i Ochote. (1944)" },
  { 1944, "[Historia] Gestapo aresztowalo Anne Frank i jej rodzine w Amsterdamie. (1944)" },
  { 1961, "[Kultura] Urodzil sie Barack Obama, pozniejszy prezydent USA. (1961)" },
};

// 05.08
const HistoryEvent HIST_218[] = {
  { 1772, "[Polska] Podpisano traktaty pierwszego rozbioru Polski. (1772)" },
  { 1944, "[Polska] Rozpoczela sie rzez Woli podczas Powstania Warszawskiego. (1944)" },
  { 1914, "[Historia] W Cleveland zainstalowano pierwsza elektryczna sygnalizacje swietlna. (1914)" },
  { 1962, "[Kultura] Zmarla Marilyn Monroe. (1962)" },
  { 2012, "[Nauka] Lazik Curiosity wyladowal na Marsie wedlug czasu USA. (2012)" },
};

// 06.08
const HistoryEvent HIST_219[] = {
  { 1914, "[Polska] Pierwsza Kompania Kadrowa wyruszyla z Krakowa. (1914)" },
  { 1945, "[Historia] USA zrzucily bombe atomowa na Hiroszime. (1945)" },
  { 1890, "[Historia] Wykonano pierwsza egzekucje na krzesle elektrycznym w USA. (1890)" },
  { 2012, "[Nauka] Lazik Curiosity rozpoczal misje na powierzchni Marsa. (2012)" },
  { 0, "[Historia] Rocznica ataku atomowego na Hiroszime, symbol zagrozen wojny nuklearnej." },
};

// 07.08
const HistoryEvent HIST_220[] = {
  { 1942, "[Historia] Rozpoczela sie bitwa o Guadalcanal na Pacyfiku. (1942)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki na Woli, Ochocie i Starym Miescie. (1944)" },
  { 1959, "[Nauka] Satelita Explorer 6 przeslal pierwsze zdjecia Ziemi z orbity. (1959)" },
  { 1960, "[Kultura] Wybrzeze Kosci Sloniowej uzyskalo niepodleglosc od Francji. (1960)" },
  { 1974, "[Historia] Philippe Petit przeszedl po linie miedzy wiezami World Trade Center. (1974)" },
};

// 08.08
const HistoryEvent HIST_221[] = {
  { 1944, "[Polska] W Powstaniu Warszawskim Niemcy nasilili ataki na Stare Miasto. (1944)" },
  { 1945, "[Historia] ZSRR wypowiedzial wojne Japonii. (1945)" },
  { 1967, "[Historia] Powstalo ASEAN, stowarzyszenie panstw Azji Poludniowo-Wschodniej. (1967)" },
  { 1988, "[Swiat] Wybuchlo powstanie 8888 w Birmie. (1988)" },
  { 2008, "[Kultura] Otwarto Letnie Igrzyska Olimpijskie w Pekinie. (2008)" },
};

// 09.08
const HistoryEvent HIST_222[] = {
  { 1942, "[Historia] Mahatma Gandhi zostal aresztowany po rozpoczeciu ruchu Quit India. (1942)" },
  { 1944, "[Polska] Trwaly walki Powstania Warszawskiego o utrzymanie Starego Miasta. (1944)" },
  { 1945, "[Historia] USA zrzucily bombe atomowa na Nagasaki. (1945)" },
  { 1965, "[Historia] Singapur oglosil niepodleglosc. (1965)" },
  { 0, "[Historia] Miedzynarodowy Dzien Ludnosci Tubylczej na Swiecie." },
};

// 10.08
const HistoryEvent HIST_223[] = {
  { 1792, "[Historia] Szturm na Tuileries przyspieszyl upadek monarchii we Francji. (1792)" },
  { 1944, "[Polska] Powstancy warszawscy bronili pozycji na Starym Miescie i w Srodmiesciu. (1944)" },
  { 1897, "[Nauka] Felix Hoffmann zsyntetyzowal kwas acetylosalicylowy, znany jako aspiryna. (1897)" },
  { 1966, "[Nauka] Lunar Orbiter 1 wystartowal w kierunku Ksiezyca. (1966)" },
  { 2003, "[Kosmos] Z kosmodromu Bajkonur wystartowala sonda Mars Express. (2003)" },
};

// 11.08
const HistoryEvent HIST_224[] = {
  { 1919, "[Historia] Przyjeto konstytucje weimarska w Niemczech. (1919)" },
  { 1937, "[Historia] NKWD rozpoczelo tzw. operacje polska podczas wielkiej czystki. (1937)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki o Stare Miasto. (1944)" },
  { 1960, "[Historia] Czad uzyskal niepodleglosc od Francji. (1960)" },
  { 1972, "[Nauka] Wystrzelono satelite astronomicznego Copernicus OAO-3. (1972)" },
};

// 12.08
const HistoryEvent HIST_225[] = {
  { 1908, "[Historia] Z fabryki wyjechal pierwszy Ford Model T. (1908)" },
  { 1944, "[Polska] W Powstaniu Warszawskim Niemcy kontynuowali szturm na Stare Miasto. (1944)" },
  { 1960, "[Historia] Echo 1 stal sie pierwszym aktywnym satelita lacznosci. (1960)" },
  { 1981, "[Nauka] IBM zaprezentowal komputer osobisty IBM PC. (1981)" },
  { 0, "[Historia] Miedzynarodowy Dzien Mlodziezy." },
};

// 13.08
const HistoryEvent HIST_226[] = {
  { 1521, "[Historia] Hiszpanie zdobyli Tenochtitlan, konczac panowanie Aztekow. (1521)" },
  { 1920, "[Polska] Rozpoczela sie Bitwa Warszawska, zwana Cudem nad Wisla. (1920)" },
  { 1944, "[Polska] Eksplozja transportera Borgward IV zabila wielu cywilow i powstancow w Warszawie. (1944)" },
  { 1961, "[Historia] Rozpoczeto budowe Muru Berlinskiego. (1961)" },
  { 2004, "[Sport] Rozpoczely sie Letnie Igrzyska Olimpijskie w Atenach. (2004)" },
};

// 14.08
const HistoryEvent HIST_227[] = {
  { 1385, "[Polska] Zawarto unie w Krewie miedzy Polska i Litwa. (1385)" },
  { 1941, "[Historia] Winston Churchill i Franklin D. Roosevelt oglosili Karte Atlantycka. (1941)" },
  { 1945, "[Historia] Japonia zaakceptowala warunki kapitulacji aliantow. (1945)" },
  { 1980, "[Polska] Rozpoczal sie strajk w Stoczni Gdanskiej. (1980)" },
  { 0, "[Historia] Dzien Energetyka w Polsce bywa obchodzony 14 sierpnia." },
};

// 15.08
const HistoryEvent HIST_228[] = {
  { 1920, "[Polska] Kulminacja Bitwy Warszawskiej podczas wojny polsko-bolszewickiej. (1920)" },
  { 1947, "[Historia] Indie uzyskaly niepodleglosc od Wielkiej Brytanii. (1947)" },
  { 1969, "[Kultura] Rozpoczal sie festiwal Woodstock. (1969)" },
  { 1977, "[Nauka] Odebrano sygnal Wow! w programie poszukiwania sygnalow kosmicznych. (1977)" },
  { 0, "[Polska] Swieto Wojska Polskiego oraz Wniebowziecie Najswietszej Maryi Panny." },
};

// 16.08
const HistoryEvent HIST_229[] = {
  { 1819, "[Historia] Masakra Peterloo w Manchesterze. (1819)" },
  { 1920, "[Polska] Kontruderzenie znad Wieprza przelamalo front w Bitwie Warszawskiej. (1920)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki o Stare Miasto i Srodmiescie. (1944)" },
  { 1960, "[Historia] Cypr uzyskal niepodleglosc. (1960)" },
  { 1977, "[Kultura] Zmarl Elvis Presley. (1977)" },
};

// 17.08
const HistoryEvent HIST_230[] = {
  { 1807, "[Nauka] Robert Fulton rozpoczal regularna zegluge parowcem Clermont. (1807)" },
  { 1920, "[Polska] Wojsko Polskie kontynuowalo poscig po przelomie w Bitwie Warszawskiej. (1920)" },
  { 1945, "[Historia] Indonezja oglosila niepodleglosc. (1945)" },
  { 1982, "[Nauka] Firma Philips zaprezentowala plyte kompaktowa CD. (1982)" },
  { 1988, "[Historia] Zmarl Muhammad Zia ul-Haq w katastrofie lotniczej w Pakistanie. (1988)" },
};

// 18.08
const HistoryEvent HIST_231[] = {
  { 1587, "[Polska] Zygmunt III Waza zostal wybrany krolem Polski. (1587)" },
  { 1920, "[Polska] Bitwa Warszawska przechodzila w polski poscig za Armia Czerwona. (1920)" },
  { 1920, "[Historia] Ratyfikowano 19. poprawke do konstytucji USA, dajaca kobietom prawa wyborcze. (1920)" },
  { 1944, "[Polska] W Powstaniu Warszawskim nasilaly sie walki o Stare Miasto. (1944)" },
  { 1966, "[Nauka] Lunar Orbiter 1 wszedl na orbite Ksiezyca. (1966)" },
};

// 19.08
const HistoryEvent HIST_232[] = {
  { 14, "[Historia] Zmarl cesarz Oktawian August. (14)" },
  { 1692, "[Historia] W Salem wykonano egzekucje pieciu osob oskarzonych o czary. (1692)" },
  { 1920, "[Polska] Wojsko Polskie odzyskalo kolejne miejscowosci po Bitwie Warszawskiej. (1920)" },
  { 1960, "[Nauka] Psy Bielka i Strielka polecialy na orbite w statku Sputnik 5. (1960)" },
  { 0, "[Kultura] Swiatowy Dzien Fotografii." },
};

// 20.08
const HistoryEvent HIST_233[] = {
  { 1914, "[Historia] Niemcy zajely Bruksele podczas I wojny swiatowej. (1914)" },
  { 1940, "[Historia] Lew Trocki zostal smiertelnie ranny w zamachu w Meksyku. (1940)" },
  { 1944, "[Polska] Powstancy zdobyli gmach PAST-y w Warszawie. (1944)" },
  { 1977, "[Nauka] Wystrzelono sonde Voyager 2. (1977)" },
  { 1991, "[Historia] Estonia oglosila przywrocenie niepodleglosci. (1991)" },
};

// 21.08
const HistoryEvent HIST_234[] = {
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki o utrzymanie Starego Miasta. (1944)" },
  { 1968, "[Historia] Wojska ukladu Warszawskiego wkroczyly do Czechoslowacji. (1968)" },
  { 1983, "[Historia] Na Filipinach zamordowano Benigno Aquino mlodszego. (1983)" },
  { 1991, "[Historia] Lotwa oglosila przywrocenie niepodleglosci. (1991)" },
  { 2017, "[Nauka] W Ameryce Polnocnej obserwowano wielkie calkowite zacmienie Slonca. (2017)" },
};

// 22.08
const HistoryEvent HIST_235[] = {
  { 1485, "[Historia] Bitwa pod Bosworth zakonczyla wojne Dwch Roz w Anglii. (1485)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly ciezkie walki na Starym Miescie. (1944)" },
  { 1864, "[Historia] Podpisano pierwsza konwencje genewska. (1864)" },
  { 1989, "[Nauka] Odkryto pierwszy znany pierscien Neptuna na zdjeciach sondy Voyager 2. (1989)" },
  { 1991, "[Historia] Upadl pucz moskiewski przeciw Michailowi Gorbaczowowi. (1991)" },
};

// 23.08
const HistoryEvent HIST_236[] = {
  { 1939, "[Polska] Podpisano pakt Ribbentrop-Molotow z tajnym protokolem o podziale Europy. (1939)" },
  { 1944, "[Polska] Powstancy zdobyli budynek PAST-y przy Zielnej w Warszawie. (1944)" },
  { 1989, "[Historia] Dwa miliony ludzi utworzyly Baltycki Lancuch. (1989)" },
  { 1991, "[Nauka] Tim Berners-Lee udostepnil World Wide Web uzytkownikom spoza CERN. (1991)" },
  { 0, "[Historia] Europejski Dzien Pamieci Ofiar Stalinizmu i Nazizmu." },
};

// 24.08
const HistoryEvent HIST_237[] = {
  { 79, "[Historia] Wybuch Wezuwiusza zniszczyl Pompeje i Herkulanum. (79)" },
  { 1572, "[Historia] Rozpoczela sie noc swietego Bartlomieja we Francji. (1572)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki o Stare Miasto i Srodmiescie. (1944)" },
  { 1991, "[Historia] Ukraina oglosila niepodleglosc. (1991)" },
  { 2006, "[Nauka] Miedzynarodowa Unia Astronomiczna uznala Plutona za planete karlowata. (2006)" },
};

// 25.08
const HistoryEvent HIST_238[] = {
  { 1609, "[Nauka] Galileusz zademonstrowal teleskop w Wenecji. (1609)" },
  { 1920, "[Polska] Zakonczyla sie Bitwa Warszawska wedlug czesto przyjmowanej daty. (1920)" },
  { 1944, "[Polska] W Powstaniu Warszawskim Niemcy nacierali na Stare Miasto. (1944)" },
  { 1944, "[Historia] Alianci wyzwolili Paryz spod okupacji niemieckiej. (1944)" },
  { 1989, "[Nauka] Voyager 2 przelecial obok Neptuna. (1989)" },
};

// 26.08
const HistoryEvent HIST_239[] = {
  { 1789, "[Historia] Francuskie Zgromadzenie uchwalilo Deklaracje Praw Czlowieka i Obywatela. (1789)" },
  { 1939, "[Polska] Incydent jablonkowski poprzedzil wybuch II wojny swiatowej. (1939)" },
  { 1944, "[Polska] W Powstaniu Warszawskim upadal kolejny fragment obrony Starego Miasta. (1944)" },
  { 1978, "[Historia] Albino Luciani zostal papiezem Janem Pawlem I. (1978)" },
  { 0, "[Polska] Uroczystosc Matki Bozej Czestochowskiej." },
};

// 27.08
const HistoryEvent HIST_240[] = {
  { 1859, "[Nauka] Edwin Drake rozpoczal wydobycie ropy w pierwszym komercyjnym szybie w USA. (1859)" },
  { 1883, "[Historia] Erupcja Krakatau wywolala fale tsunami i globalne skutki klimatyczne. (1883)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwaly walki o kanalowe polaczenia miasta. (1944)" },
  { 1962, "[Nauka] Wystrzelono sonde Mariner 2 w kierunku Wenus. (1962)" },
  { 1991, "[Historia] Moldawia oglosila niepodleglosc. (1991)" },
};

// 28.08
const HistoryEvent HIST_241[] = {
  { 1565, "[Historia] Hiszpanie zalozyli St. Augustine, najstarsze stale miasto europejskie w USA. (1565)" },
  { 1963, "[Historia] Martin Luther King wyglosil przemowienie I Have a Dream. (1963)" },
  { 1944, "[Polska] W Powstaniu Warszawskim bronilo sie Stare Miasto i Srodmiescie. (1944)" },
  { 1996, "[Historia] Ksiaze Karol i ksiezna Diana formalnie sie rozwiedli. (1996)" },
  { 2003, "[Nauka] Mars znalazl sie najblizej Ziemi od tysiecy lat. (2003)" },
};

// 29.08
const HistoryEvent HIST_242[] = {
  { 1831, "[Nauka] Michael Faraday odkryl indukcje elektromagnetyczna. (1831)" },
  { 1944, "[Polska] Powstancy warszawscy kontynuowali ewakuacje kanalami ze Starego Miasta. (1944)" },
  { 1949, "[Historia] ZSRR przeprowadzil pierwszy test bomby atomowej. (1949)" },
  { 1966, "[Kultura] The Beatles zagrali ostatni platny koncert na Candlestick Park. (1966)" },
  { 0, "[Historia] Miedzynarodowy Dzien przeciwko Probom Jadrowym." },
};

// 30.08
const HistoryEvent HIST_243[] = {
  { 1918, "[Historia] Fanny Kaplan dokonala zamachu na Wlodzimierza Lenina. (1918)" },
  { 1944, "[Polska] W Powstaniu Warszawskim trwala obrona Starego Miasta przed upadkiem. (1944)" },
  { 1963, "[Historia] Uruchomiono goraca linie Moskwa-Waszyngton po kryzysie kubanskim. (1963)" },
  { 1984, "[Nauka] Wahadlowiec Discovery wystartowal w pierwsza misje. (1984)" },
  { 1991, "[Historia] Azerbejdzan oglosil niepodleglosc od ZSRR. (1991)" },
};

// 31.08
const HistoryEvent HIST_244[] = {
  { 1939, "[Polska] Prowokacja gliwicka poprzedzila atak Niemiec na Polske. (1939)" },
  { 1980, "[Polska] Podpisano Porozumienia Sierpniowe w Gdansku. (1980)" },
  { 1991, "[Historia] Kirgistan oglosil niepodleglosc od ZSRR. (1991)" },
  { 1997, "[Kultura] Zginela ksiezna Diana. (1997)" },
  { 2005, "[Historia] W Bagdadzie doszlo do tragicznej paniki na moscie Al-A'imma. (2005)" },
};

// 01.09
const HistoryEvent HIST_245[] = {
  { 1939, "[Polska] Niemcy zaatakowaly Polske, rozpoczynajac II wojne swiatowa. (1939)" },
  { 1939, "[Polska] Rozpoczela sie obrona Westerplatte. (1939)" },
  { 1914, "[Historia] Zmarl ostatni golab wedrowny, Martha. (1914)" },
  { 1985, "[Nauka] Odkryto wrak Titanica na Atlantyku. (1985)" },
  { 0, "[Historia] Rocznica wybuchu II wojny swiatowej." },
};

// 02.09
const HistoryEvent HIST_246[] = {
  { 31, "[Historia] Bitwa pod Akcjum przesadzila o upadku Marka Antoniusza i Kleopatry. (31)" },
  { 1939, "[Polska] Trwala obrona Westerplatte i walki po agresji Niemiec. (1939)" },
  { 1945, "[Historia] Japonia podpisala akt kapitulacji na USS Missouri. (1945)" },
  { 1969, "[Nauka] Uruchomiono pierwszy bankomat w USA. (1969)" },
  { 1998, "[Nauka] Samolot Swissair 111 rozbil sie u wybrzezy Kanady. (1998)" },
};

// 03.09
const HistoryEvent HIST_247[] = {
  { 1189, "[Historia] Ryszard Lwie Serce zostal koronowany na krola Anglii. (1189)" },
  { 1939, "[Polska] Wielka Brytania i Francja wypowiedzialy wojne Niemcom po ataku na Polske. (1939)" },
  { 1976, "[Nauka] Sonda Viking 2 wyladowala na Marsie. (1976)" },
  { 2004, "[Historia] Zakonczyla sie tragedia zakladnikow w Bieslanie. (2004)" },
  { 0, "[Polska] Dzien Weterana Walk o Niepodleglosc Rzeczypospolitej Polskiej." },
};

// 04.09
const HistoryEvent HIST_248[] = {
  { 476, "[Historia] Obalono Romulusa Augustulusa, co bywa uznawane za koniec cesarstwa zachodniorzymskiego. (476)" },
  { 1888, "[Nauka] George Eastman opatentowal aparat Kodak. (1888)" },
  { 1939, "[Polska] Trwaly walki kampanii wrzesniowej i obrona Westerplatte. (1939)" },
  { 1998, "[Nauka] Larry Page i Sergey Brin zalozyli Google. (1998)" },
  { 2016, "[Kultura] Matka Teresa z Kalkuty zostala kanonizowana. (2016)" },
};

// 05.09
const HistoryEvent HIST_249[] = {
  { 1698, "[Historia] Piotr I wprowadzil podatek od brod w Rosji. (1698)" },
  { 1905, "[Historia] Zakonczono wojne rosyjsko-japonska traktatem w Portsmouth. (1905)" },
  { 1939, "[Polska] Rozpoczela sie bitwa pod Piotrkowem Trybunalskim. (1939)" },
  { 1977, "[Nauka] Wystrzelono sonde Voyager 1. (1977)" },
  { 1980, "[Nauka] Otwarto tunel drogowy Gottharda w Szwajcarii. (1980)" },
};

// 06.09
const HistoryEvent HIST_250[] = {
  { 1522, "[Historia] Victoria powrocila do Hiszpanii, konczac pierwsze oplyniecie Ziemi. (1522)" },
  { 1939, "[Polska] Trwala kampania wrzesniowa i obrona polskich miast. (1939)" },
  { 1941, "[Historia] Niemcy wprowadzily obowiazek noszenia gwiazdy Dawida przez Zydow. (1941)" },
  { 1991, "[Historia] Leningrad oficjalnie odzyskal nazwe Petersburg. (1991)" },
  { 0, "[Kultura] Dzien Czytania Ksiazki bywa obchodzony 6 wrzesnia." },
};

// 07.09
const HistoryEvent HIST_251[] = {
  { 1822, "[Historia] Brazylia oglosila niepodleglosc od Portugalii. (1822)" },
  { 1939, "[Polska] Westerplatte skapitulowalo po siedmiu dniach obrony. (1939)" },
  { 1940, "[Historia] Rozpoczal sie Blitz, naloty Niemiec na Wielka Brytanie. (1940)" },
  { 1977, "[Historia] Podpisano traktaty Torrijos-Carter o przekazaniu Kanalu Panamskiego. (1977)" },
  { 1998, "[Nauka] Powstala domena i wyszukiwarka Google zaczela dzialac jako firma. (1998)" },
};

// 08.09
const HistoryEvent HIST_252[] = {
  { 1380, "[Historia] Bitwa na Kulikowym Polu oslabiala panowanie Zlotej Ordy nad Rusia. (1380)" },
  { 1900, "[Historia] Huragan w Galveston stal sie jedna z najtragiczniejszych katastrof w USA. (1900)" },
  { 1939, "[Polska] Rozpoczela sie bitwa nad Bzura. (1939)" },
  { 1966, "[Kultura] Wyemitowano pierwszy odcinek serialu Star Trek. (1966)" },
  { 1978, "[Historia] W Iranie doszlo do wydarzen Czarnego Piatku w Teheranie. (1978)" },
};

// 09.09
const HistoryEvent HIST_253[] = {
  { 1939, "[Polska] Trwala bitwa nad Bzura, najwieksza bitwa kampanii wrzesniowej. (1939)" },
  { 1948, "[Historia] Utworzono Koreanska Republike Ludowo-Demokratyczna. (1948)" },
  { 1976, "[Historia] Zmarl Mao Zedong. (1976)" },
  { 1991, "[Historia] Tadzykistan oglosil niepodleglosc od ZSRR. (1991)" },
  { 2015, "[Kultura] Elzbieta II zostala najdluzej panujacym monarcha w historii Wielkiej Brytanii. (2015)" },
};

// 10.09
const HistoryEvent HIST_254[] = {
  { 1831, "[Polska] Upadl ostatni bastion obrony Warszawy w powstaniu listopadowym. (1831)" },
  { 1898, "[Kultura] W Genewie zamordowano cesarzowa Elzbiete Bawarska, zwana Sisi. (1898)" },
  { 1939, "[Polska] Trwala obrona Warszawy przed wojskami niemieckimi. (1939)" },
  { 1960, "[Historia] Abebe Bikila wygral maraton olimpijski boso w Rzymie. (1960)" },
  { 2008, "[Nauka] Wielki Zderzacz Hadronow rozpoczal prace w CERN. (2008)" },
};

// 11.09
const HistoryEvent HIST_255[] = {
  { 1297, "[Historia] Szkoci pod wodza Williama Wallace'a wygrali bitwe pod Stirling Bridge. (1297)" },
  { 1939, "[Polska] Trwala bitwa nad Bzura i obrona Warszawy. (1939)" },
  { 1973, "[Historia] Zamach stanu w Chile obalil Salvadora Allende. (1973)" },
  { 2001, "[Historia] Ataki terrorystyczne na Nowy Jork i Waszyngton. (2001)" },
  { 0, "[Historia] Rocznica zamachow z 11 wrzesnia 2001 roku." },
};

// 12.09
const HistoryEvent HIST_256[] = {
  { 1683, "[Polska] Jan III Sobieski zwyciezyl pod Wiedniem. (1683)" },
  { 1940, "[Historia] Odkryto malowidla w jaskini Lascaux we Francji. (1940)" },
  { 1959, "[Nauka] Luna 2 wystartowala w kierunku Ksiezyca. (1959)" },
  { 1962, "[Historia] John F. Kennedy zapowiedzial lot czlowieka na Ksiezyc. (1962)" },
  { 0, "[Historia] Dzien Programisty w latach przestepnych wypada 12 wrzesnia." },
};

// 13.09
const HistoryEvent HIST_257[] = {
  { 1501, "[Kultura] Michal Aniol rozpoczal prace nad rzezba Dawida. (1501)" },
  { 1939, "[Polska] Trwala obrona Warszawy i bitwa nad Bzura. (1939)" },
  { 1959, "[Nauka] Luna 2 jako pierwszy obiekt stworzony przez czlowieka dotarla do Ksiezyca. (1959)" },
  { 1993, "[Historia] Podpisano porozumienia z Oslo miedzy Izraelem i OWP. (1993)" },
  { 0, "[Historia] Dzien Programisty w zwyklych latach wypada 13 wrzesnia." },
};

// 14.09
const HistoryEvent HIST_258[] = {
  { 1812, "[Historia] Napoleon wkroczyl do opuszczonej Moskwy. (1812)" },
  { 1939, "[Polska] Trwala obrona Warszawy podczas kampanii wrzesniowej. (1939)" },
  { 1960, "[Historia] Powstala OPEC. (1960)" },
  { 2000, "[Nauka] Microsoft wydal system Windows ME. (2000)" },
  { 2015, "[Nauka] Detektory LIGO po raz pierwszy zarejestrowaly fale grawitacyjne. (2015)" },
};

// 15.09
const HistoryEvent HIST_259[] = {
  { 1821, "[Historia] Gwatemala, Honduras, Kostaryka, Nikaragua i Salwador oglosily niepodleglosc. (1821)" },
  { 1830, "[Historia] Otwarto linie Liverpool-Manchester, pierwsza duza kolej pasazerska. (1830)" },
  { 1939, "[Polska] Trwala bitwa nad Bzura i obrona Warszawy. (1939)" },
  { 1940, "[Historia] Rozpoczela sie decydujaca faza bitwy o Anglie. (1940)" },
  { 2008, "[Finanse] Upadek Lehman Brothers stal sie symbolem kryzysu finansowego. (2008)" },
};

// 16.09
const HistoryEvent HIST_260[] = {
  { 1620, "[Historia] Statek Mayflower wyplynal z Anglii do Ameryki. (1620)" },
  { 1939, "[Polska] Wojska niemieckie zamknely pierscien wokol Warszawy. (1939)" },
  { 1975, "[Historia] Papua-Nowa Gwinea uzyskala niepodleglosc. (1975)" },
  { 1987, "[Nauka] Podpisano Protokol montrealski o ochronie warstwy ozonowej. (1987)" },
  { 0, "[Historia] Miedzynarodowy Dzien Ochrony Warstwy Ozonowej." },
};

// 17.09
const HistoryEvent HIST_261[] = {
  { 1787, "[Historia] Podpisano Konstytucje Stanow Zjednoczonych. (1787)" },
  { 1939, "[Polska] ZSRR zaatakowal Polske od wschodu. (1939)" },
  { 1939, "[Polska] Rzad RP przekroczyl granice z Rumunia podczas kampanii wrzesniowej. (1939)" },
  { 1978, "[Historia] Podpisano porozumienia Camp David. (1978)" },
  { 0, "[Historia] Swiatowy Dzien Bezpieczenstwa Pacjenta." },
};

// 18.09
const HistoryEvent HIST_262[] = {
  { 1810, "[Historia] Chile rozpoczelo proces niepodleglosciowy. (1810)" },
  { 1939, "[Polska] Prezydent Ignacy Moscicki opuscil terytorium Polski. (1939)" },
  { 1961, "[Historia] Zginal Dag Hammarskjold, sekretarz generalny ONZ. (1961)" },
  { 1977, "[Nauka] Voyager 1 wykonal pierwsze zdjecie Ziemi i Ksiezyca razem. (1977)" },
  { 1997, "[Kultura] Powstala domena internetowa Google.com wedlug rejestracji. (1997)" },
};

// 19.09
const HistoryEvent HIST_263[] = {
  { 1893, "[Historia] Nowa Zelandia jako pierwsze panstwo przyznala kobietom prawa wyborcze. (1893)" },
  { 1939, "[Polska] Trwala obrona Warszawy i Kepa Oksywska podczas kampanii wrzesniowej. (1939)" },
  { 1940, "[Historia] Witold Pilecki dobrowolnie trafil do Auschwitz, by zorganizowac konspiracje. (1940)" },
  { 1982, "[Nauka] Scott Fahlman zaproponowal emotikony :-) i :-(. (1982)" },
  { 1991, "[Historia] Odnaleziono mumie Oetzi w Alpach. (1991)" },
};

// 20.09
const HistoryEvent HIST_264[] = {
  { 1519, "[Historia] Ferdynand Magellan wyplynal w wyprawe dookola swiata. (1519)" },
  { 1870, "[Historia] Zjednoczenie Wloch: wojska wloskie wkroczyly do Rzymu. (1870)" },
  { 1939, "[Polska] Trwala obrona Warszawy i Modlina. (1939)" },
  { 1946, "[Kultura] Rozpoczal sie pierwszy Festiwal Filmowy w Cannes. (1946)" },
  { 0, "[Historia] Ogolnopolski Dzien Przedszkolaka." },
};

// 21.09
const HistoryEvent HIST_265[] = {
  { 1937, "[Kultura] Ukazal sie Hobbit J.R.R. Tolkiena. (1937)" },
  { 1939, "[Polska] Trwala obrona Warszawy podczas kampanii wrzesniowej. (1939)" },
  { 1964, "[Historia] Malta uzyskala niepodleglosc od Wielkiej Brytanii. (1964)" },
  { 1976, "[Kultura] Orlando Letelier zginal w zamachu w Waszyngtonie. (1976)" },
  { 2003, "[Nauka] Sonda Galileo zakonczyla misje, wchodzac w atmosfere Jowisza. (2003)" },
};

// 22.09
const HistoryEvent HIST_266[] = {
  { 1792, "[Historia] Francja proklamowala republike. (1792)" },
  { 1862, "[Historia] Abraham Lincoln oglosil wstepna proklamacje emancypacji. (1862)" },
  { 1939, "[Polska] Trwala obrona Warszawy i Modlina. (1939)" },
  { 1980, "[Historia] Irak zaatakowal Iran, rozpoczynajac dluga wojne. (1980)" },
  { 1994, "[Kultura] Wyemitowano pierwszy odcinek serialu Przyjaciele. (1994)" },
};

// 23.09
const HistoryEvent HIST_267[] = {
  { 1846, "[Nauka] Odkryto planete Neptun. (1846)" },
  { 1939, "[Polska] Trwala obrona Warszawy, Modlina i Helu. (1939)" },
  { 1939, "[Historia] Zmarl Sigmund Freud. (1939)" },
  { 1973, "[Historia] Juan Peron ponownie zostal prezydentem Argentyny. (1973)" },
  { 1980, "[Nauka] Bob Marley zagral ostatni koncert w Pittsburghu. (1980)" },
};

// 24.09
const HistoryEvent HIST_268[] = {
  { 622, "[Historia] Mahomet zakonczyl hidzre, wedrowke z Mekki do Medyny. (622)" },
  { 1939, "[Polska] Trwala obrona Warszawy i Helu. (1939)" },
  { 1948, "[Nauka] Honda Motor Company zostala zalozona w Japonii. (1948)" },
  { 1960, "[Historia] Zwodowano USS Enterprise, pierwszy atomowy lotniskowiec. (1960)" },
  { 1991, "[Kultura] Wydano album Nevermind zespolu Nirvana. (1991)" },
};

// 25.09
const HistoryEvent HIST_269[] = {
  { 1513, "[Historia] Vasco Nunez de Balboa dotarl do Pacyfiku od strony Ameryki. (1513)" },
  { 1939, "[Polska] Niemcy rozpoczeli silny szturm na Warszawe. (1939)" },
  { 1956, "[Nauka] Uruchomiono pierwszy transatlantycki kabel telefoniczny TAT-1. (1956)" },
  { 1981, "[Historia] Sandra Day O'Connor zostala pierwsza kobieta w Sadzie Najwyzszym USA. (1981)" },
  { 2015, "[Historia] ONZ przyjela Agende 2030 i cele zrownowazonego rozwoju. (2015)" },
};

// 26.09
const HistoryEvent HIST_270[] = {
  { 1580, "[Historia] Francis Drake zakonczyl oplyniecie Ziemi. (1580)" },
  { 1939, "[Polska] Trwala obrona Warszawy, Modlina i Helu. (1939)" },
  { 1960, "[Historia] Odbyla sie pierwsza telewizyjna debata prezydencka Kennedy-Nixon. (1960)" },
  { 1983, "[Historia] Stanislaw Petrow zapobiegl potencjalnej eskalacji alarmu nuklearnego. (1983)" },
  { 2008, "[Nauka] Yves Rossy przelecial nad kanalem La Manche z plecakiem odrzutowym. (2008)" },
};

// 27.09
const HistoryEvent HIST_271[] = {
  { 1825, "[Historia] Otwarto kolej Stockton-Darlington w Anglii. (1825)" },
  { 1939, "[Polska] Warszawa skapitulowala po niemieckim obleeniu. (1939)" },
  { 1940, "[Historia] Podpisano pakt trzech: Niemcy, Wlochy i Japonia. (1940)" },
  { 1998, "[Nauka] Google uruchomilo publicznie wyszukiwarke internetowa. (1998)" },
  { 0, "[Kultura] Swiatowy Dzien Turystyki." },
};

// 28.09
const HistoryEvent HIST_272[] = {
  { 1066, "[Historia] Wilhelm Zdobywca rozpoczal inwazje na Anglie. (1066)" },
  { 1939, "[Polska] Kapitulacja Warszawy weszla w zycie po obronie miasta. (1939)" },
  { 1928, "[Nauka] Alexander Fleming odkryl penicyline. (1928)" },
  { 1958, "[Historia] Francuzi przyjeli konstytucje V Republiki w referendum. (1958)" },
  { 2008, "[Nauka] SpaceX Falcon 1 osiagnal orbite jako pierwsza prywatna rakieta na paliwo ciekle. (2008)" },
};

// 29.09
const HistoryEvent HIST_273[] = {
  { 480, "[Historia] Grecy pokonali Persow w bitwie pod Salamina. (480)" },
  { 1939, "[Polska] Twierdza Modlin skapitulowala przed Niemcami. (1939)" },
  { 1954, "[Nauka] CERN zostal utworzony jako europejskie centrum badan jadrowych. (1954)" },
  { 1988, "[Historia] STS-26 byl pierwszym lotem wahadlowca po katastrofie Challengera. (1988)" },
  { 2004, "[Kultura] Asteroida 4179 Toutatis przeleciala blisko Ziemi. (2004)" },
};

// 30.09
const HistoryEvent HIST_274[] = {
  { 1452, "[Historia] W Moguncji wydrukowano pierwsza date w Biblii Gutenberga wedlug tradycji. (1452)" },
  { 1938, "[Historia] Podpisano uklad monachijski bez udzialu Czechoslowacji. (1938)" },
  { 1939, "[Polska] Rzad RP na uchodzstwie powstal we Francji. (1939)" },
  { 1966, "[Historia] Botswana uzyskala niepodleglosc od Wielkiej Brytanii. (1966)" },
  { 2016, "[Nauka] Sonda Rosetta zakonczyla misje kontrolowanym opadnieciem na komete 67P. (2016)" },
};

// 01.10
const HistoryEvent HIST_275[] = {
  { 331, "[Historia] Aleksander Wielki pokonal Dariusza III w bitwie pod Gaugamela. (331)" },
  { 1946, "[Historia] Zakonczono proces glownych zbrodniarzy nazistowskich w Norymberdze. (1946)" },
  { 1949, "[Historia] Proklamowano Chinska Republike Ludowa. (1949)" },
  { 1960, "[Historia] Nigeria uzyskala niepodleglosc od Wielkiej Brytanii. (1960)" },
  { 0, "[Historia] Miedzynarodowy Dzien Osob Starszych." },
};

// 02.10
const HistoryEvent HIST_276[] = {
  { 1187, "[Historia] Saladyn zdobyl Jerozolime po zwyciestwach nad krzyzowcami. (1187)" },
  { 1939, "[Polska] Kapitulacja Helu zakonczyla regularne walki kampanii wrzesniowej. (1939)" },
  { 1950, "[Kultura] Ukazal sie pierwszy pasek komiksowy Peanuts. (1950)" },
  { 1958, "[Historia] Gwinea uzyskala niepodleglosc od Francji. (1958)" },
  { 1968, "[Historia] Doszlo do masakry studentow w Tlatelolco w Meksyku. (1968)" },
};

// 03.10
const HistoryEvent HIST_277[] = {
  { 1906, "[Historia] SOS przyjeto jako miedzynarodowy sygnal ratunkowy. (1906)" },
  { 1932, "[Historia] Irak uzyskal niepodleglosc od Wielkiej Brytanii. (1932)" },
  { 1944, "[Polska] Po upadku Powstania Warszawskiego rozpoczeto systematyczne wysiedlanie ludnosci. (1944)" },
  { 1952, "[Nauka] Wielka Brytania przeprowadzila pierwszy test bomby atomowej. (1952)" },
  { 1990, "[Historia] Nastapilo zjednoczenie Niemiec. (1990)" },
};

// 04.10
const HistoryEvent HIST_278[] = {
  { 1582, "[Historia] Wprowadzono kalendarz gregorianski w krajach katolickich. (1582)" },
  { 1957, "[Nauka] ZSRR wystrzelil Sputnika 1, pierwszego sztucznego satelite Ziemi. (1957)" },
  { 1965, "[Historia] Papiez Pawel VI przemawial w ONZ. (1965)" },
  { 1993, "[Historia] W Moskwie wojsko stlumilo kryzys konstytucyjny. (1993)" },
  { 0, "[Historia] Swiatowy Tydzien Przestrzeni Kosmicznej zaczyna sie 4 pazdziernika." },
};

// 05.10
const HistoryEvent HIST_279[] = {
  { 1582, "[Historia] W kalendarzu gregorianskim po 4 pazdziernika nastapil 15 pazdziernika. (1582)" },
  { 1936, "[Polska] W Gdyni oddano do uzytku Dworzec Morski. (1936)" },
  { 1947, "[Historia] Harry Truman wyglosil pierwsze telewizyjne przemowienie z Bialego Domu. (1947)" },
  { 1962, "[Kultura] Odbyla sie premiera filmu Dr No, pierwszego filmu o Jamesie Bondzie. (1962)" },
  { 2011, "[Nauka] Zmarl Steve Jobs, wspoltworca Apple. (2011)" },
};

// 06.10
const HistoryEvent HIST_280[] = {
  { 1889, "[Kultura] Otwarto Moulin Rouge w Paryzu. (1889)" },
  { 1927, "[Kultura] Premiera filmu The Jazz Singer zapoczatkowala ere kina dzwiekowego. (1927)" },
  { 1973, "[Historia] Rozpoczela sie wojna Jom Kippur na Bliskim Wschodzie. (1973)" },
  { 1979, "[Polska] Jan Pawel II zostal pierwszym papiezem, ktory odwiedzil Bialy Dom. (1979)" },
  { 1981, "[Historia] Egipski prezydent Anwar Sadat zostal zamordowany. (1981)" },
};

// 07.10
const HistoryEvent HIST_281[] = {
  { 1571, "[Historia] Flota Ligi Swietej pokonala Turkow w bitwie pod Lepanto. (1571)" },
  { 1918, "[Polska] Rada Regencyjna oglosila niepodleglosc Krolestwa Polskiego. (1918)" },
  { 1949, "[Historia] Powstala Niemiecka Republika Demokratyczna. (1949)" },
  { 1959, "[Nauka] Sonda Luna 3 sfotografowala niewidoczna strone Ksiezyca. (1959)" },
  { 2001, "[Historia] Rozpoczela sie interwencja USA i sojusznikow w Afganistanie. (2001)" },
};

// 08.10
const HistoryEvent HIST_282[] = {
  { 1871, "[Historia] Wielki pozar Chicago zniszczyl duza czesc miasta. (1871)" },
  { 1912, "[Historia] Rozpoczela sie I wojna balkanska. (1912)" },
  { 1939, "[Polska] Hitler wydal dekret o wcieleniu czesci ziem polskich do III Rzeszy. (1939)" },
  { 1952, "[Historia] Katastrofa kolejowa w Harrow and Wealdstone pochlonela wiele ofiar. (1952)" },
  { 1990, "[Historia] Palestynczycy zgineli podczas starc na Wzgorzu Swiatynnym. (1990)" },
};

// 09.10
const HistoryEvent HIST_283[] = {
  { 1000, "[Polska] Wedlug tradycji zakonczyla sie czesc obchodow zjazdu gnieznienskiego w roku 1000. (1000)" },
  { 1962, "[Historia] Uganda uzyskala niepodleglosc od Wielkiej Brytanii. (1962)" },
  { 1967, "[Historia] Zginal Che Guevara po pojmaniu w Boliwii. (1967)" },
  { 1986, "[Kultura] Premiera musicalu Upior w operze w Londynie. (1986)" },
  { 2006, "[Nauka] Korea Polnocna przeprowadzila pierwszy test nuklearny. (2006)" },
};

// 10.10
const HistoryEvent HIST_284[] = {
  { 732, "[Historia] Frankowie Karola Mlotta zatrzymali Arabow w bitwie pod Tours. (732)" },
  { 1938, "[Polska] Wojsko Polskie zajelo Zaolzie po ukladzie monachijskim. (1938)" },
  { 1964, "[Kultura] Rozpoczely sie XVIII Letnie Igrzyska Olimpijskie w Tokio. (1964)" },
  { 1970, "[Historia] Fidzi uzyskalo niepodleglosc od Wielkiej Brytanii. (1970)" },
  { 0, "[Historia] Swiatowy Dzien Zdrowia Psychicznego." },
};

// 11.10
const HistoryEvent HIST_285[] = {
  { 1138, "[Historia] Trzesienie ziemi w Aleppo nalezalo do najtragiczniejszych w dziejach. (1138)" },
  { 1910, "[Nauka] Theodore Roosevelt odbyl lot samolotem jako pierwszy byly prezydent USA. (1910)" },
  { 1962, "[Nauka] Rozpoczela sie misja Apollo 7, pierwszy zalogowy lot programu Apollo. (1968)" },
  { 1984, "[Historia] Kathryn D. Sullivan jako pierwsza Amerykanka odbyla spacer kosmiczny. (1984)" },
  { 2001, "[Kultura] Polska reprezentacja pilkarska zapewnila sobie awans na mundial 2002. (2001)" },
};

// 12.10
const HistoryEvent HIST_286[] = {
  { 1492, "[Historia] Krzysztof Kolumb dotarl do wysp Bahamow. (1492)" },
  { 1810, "[Historia] W Monachium odbyly sie pierwsze obchody Oktoberfest. (1810)" },
  { 1920, "[Polska] Podpisano umowe preliminaryjna i rozejm z Rosja Radziecka w Rydze. (1920)" },
  { 1964, "[Nauka] ZSRR wystrzelil Woschod 1, pierwszy statek z wieloosobowa zaloga. (1964)" },
  { 2005, "[Nauka] Chiny wyslaly druga misje zalogowa Shenzhou 6. (2005)" },
};

// 13.10
const HistoryEvent HIST_287[] = {
  { 1307, "[Historia] Aresztowano templariuszy we Francji z rozkazu Filipa IV. (1307)" },
  { 1773, "[Nauka] Charles Messier odkryl galaktyke Wir, M51. (1773)" },
  { 1943, "[Historia] Wlochy wypowiedzialy wojne Niemcom. (1943)" },
  { 2010, "[Historia] Rozpoczela sie akcja ratunkowa uwiezionych gornikow w Chile. (2010)" },
  { 0, "[Historia] Miedzynarodowy Dzien Ograniczania Skutkow Katastrof." },
};

// 14.10
const HistoryEvent HIST_288[] = {
  { 1066, "[Historia] Wilhelm Zdobywca pokonal Harolda II w bitwie pod Hastings. (1066)" },
  { 1947, "[Nauka] Chuck Yeager przekroczyl bariere dzwieku w locie poziomym. (1947)" },
  { 1957, "[Kultura] Krolowa Elzbieta II otworzyla parlament Kanady. (1957)" },
  { 1964, "[Historia] Martin Luther King otrzymal Pokojowa Nagrode Nobla. (1964)" },
  { 2012, "[Nauka] Felix Baumgartner skoczyl ze stratosfery. (2012)" },
};

// 15.10
const HistoryEvent HIST_289[] = {
  { 1582, "[Historia] W krajach katolickich byl to pierwszy dzien kalendarza gregorianskiego. (1582)" },
  { 1815, "[Historia] Napoleon zostal zeslany na wyspe Swietej Heleny. (1815)" },
  { 1917, "[Historia] Mata Hari zostala rozstrzelana we Francji. (1917)" },
  { 1956, "[Nauka] FORTRAN zostal po raz pierwszy opisany publicznie przez IBM. (1956)" },
  { 1990, "[Kultura] Michail Gorbaczow otrzymal Pokojowa Nagrode Nobla. (1990)" },
};

// 16.10
const HistoryEvent HIST_290[] = {
  { 1793, "[Historia] Stracono krolowa Francji Marie Antonine. (1793)" },
  { 1978, "[Polska] Kardynal Karol Wojtyla zostal wybrany papiezem Janem Pawlem II. (1978)" },
  { 1964, "[Historia] Chiny przeprowadzily pierwszy test bomby atomowej. (1964)" },
  { 1995, "[Historia] Marsz Miliona Mezczyzn odbyl sie w Waszyngtonie. (1995)" },
  { 0, "[Historia] Swiatowy Dzien Zywnosci." },
};

// 17.10
const HistoryEvent HIST_291[] = {
  { 1814, "[Historia] Katastrofa piwna w Londynie zalala okolice browaru Meux. (1814)" },
  { 1931, "[Historia] Al Capone zostal skazany za uchylanie sie od podatkow. (1931)" },
  { 1979, "[Historia] Matka Teresa otrzymala Pokojowa Nagrode Nobla. (1979)" },
  { 1989, "[Historia] Trzesienie ziemi Loma Prieta nawiedzilo okolice San Francisco. (1989)" },
  { 0, "[Historia] Miedzynarodowy Dzien Walki z Ubostwem." },
};

// 18.10
const HistoryEvent HIST_292[] = {
  { 1867, "[Historia] USA formalnie przejely Alaske od Rosji. (1867)" },
  { 1922, "[Nauka] Powstalo BBC jako British Broadcasting Company. (1922)" },
  { 1944, "[Historia] Armia Czerwona wkroczyla do Czechoslowacji przez Przelecz Dukielska. (1944)" },
  { 1954, "[Nauka] Texas Instruments zaprezentowal pierwsze radio tranzystorowe. (1954)" },
  { 1989, "[Nauka] Sonda Galileo zostala wyniesiona w kierunku Jowisza. (1989)" },
};

// 19.10
const HistoryEvent HIST_293[] = {
  { 1781, "[Historia] Brytyjczycy poddali sie pod Yorktown, co przesadzilo o wyniku wojny USA o niepodleglosc. (1781)" },
  { 1812, "[Historia] Napoleon rozpoczal odwrot spod Moskwy. (1812)" },
  { 1939, "[Polska] Utworzono pierwszy getto zydowskie na okupowanych ziemiach polskich w Piotrkowie Trybunalskim. (1939)" },
  { 1987, "[Historia] Czarny Poniedzialek przyniosl globalny krach gieldowy. (1987)" },
  { 2005, "[Historia] Rozpoczal sie proces Saddama Husajna. (2005)" },
};

// 20.10
const HistoryEvent HIST_294[] = {
  { 1827, "[Historia] Bitwa pod Navarino byla waznym etapem wojny o niepodleglosc Grecji. (1827)" },
  { 1944, "[Historia] Armia Czerwona zajela Belgrad. (1944)" },
  { 1968, "[Kultura] Jacqueline Kennedy poslubila Aristotelisa Onasisa. (1968)" },
  { 1973, "[Historia] Otwarto opere w Sydney. (1973)" },
  { 2011, "[Historia] Zginal Muammar Kaddafi. (2011)" },
};

// 21.10
const HistoryEvent HIST_295[] = {
  { 1805, "[Historia] Bitwa pod Trafalgarem zapewnila Wielkiej Brytanii dominacje morska. (1805)" },
  { 1833, "[Nauka] Urodzil sie Alfred Nobel. (1833)" },
  { 1944, "[Historia] Amerykanie zdobyli Akwizgran, pierwsze duze niemieckie miasto. (1944)" },
  { 1959, "[Kultura] Otwarto Muzeum Guggenheima w Nowym Jorku. (1959)" },
  { 0, "[Historia] Dzien Bez Skarpetek bywa obchodzony 21 pazdziernika." },
};

// 22.10
const HistoryEvent HIST_296[] = {
  { 1797, "[Historia] Andre-Jacques Garnerin wykonal pierwszy udokumentowany skok spadochronowy. (1797)" },
  { 1962, "[Historia] John F. Kennedy oglosil blokade Kuby podczas kryzysu kubanskiego. (1962)" },
  { 1978, "[Polska] Jan Pawel II zainaugurowal pontyfikat. (1978)" },
  { 2001, "[Nauka] Apple zaprezentowal pierwszego iPoda. (2001)" },
  { 2008, "[Kosmos] Indie wystrzelily sonde Chandrayaan-1 w kierunku Ksiezyca. (2008)" },
};

// 23.10
const HistoryEvent HIST_297[] = {
  { 42, "[Historia] Bitwa pod Filippi zakonczyla walke zabojcow Cezara z triumwirami. (42)" },
  { 1915, "[Historia] W Nowym Jorku odbyl sie wielki marsz za prawami wyborczymi kobiet. (1915)" },
  { 1956, "[Historia] Wybuchlo powstanie wegierskie. (1956)" },
  { 1973, "[Historia] Zawarto rozejm konczacy wojne Jom Kippur. (1973)" },
  { 2001, "[Nauka] Apple wprowadzil iPoda do sprzedazy w USA. (2001)" },
};

// 24.10
const HistoryEvent HIST_298[] = {
  { 1648, "[Historia] Pokoj westfalski zakonczyl wojne trzydziestoletnia. (1648)" },
  { 1857, "[Historia] Powstal Sheffield FC, uwazany za najstarszy klub pilkarski. (1857)" },
  { 1929, "[Historia] Czarny Czwartek rozpoczal krach na gieldzie nowojorskiej. (1929)" },
  { 1945, "[Historia] Weszla w zycie Karta Narodow Zjednoczonych. (1945)" },
  { 0, "[Historia] Dzien Narodow Zjednoczonych." },
};

// 25.10
const HistoryEvent HIST_299[] = {
  { 1415, "[Historia] Anglicy zwyciezyli Francuzow w bitwie pod Azincourt. (1415)" },
  { 1936, "[Historia] Niemcy i Wlochy utworzyly os Berlin-Rzym. (1936)" },
  { 1944, "[Polska] PKWN wydal dekret o walce z analfabetyzmem i odbudowie administracji. (1944)" },
  { 1971, "[Historia] Chinska Republika Ludowa zajela miejsce Chin w ONZ. (1971)" },
  { 2001, "[Kultura] Wydano system Windows XP. (2001)" },
};

// 26.10
const HistoryEvent HIST_300[] = {
  { 1863, "[Historia] Powstala Football Association w Anglii, porzadkujac zasady pilki noznej. (1863)" },
  { 1905, "[Historia] Szwecja uznala niepodleglosc Norwegii. (1905)" },
  { 1955, "[Historia] Ngo Dinh Diem oglosil powstanie Republiki Wietnamu. (1955)" },
  { 1979, "[Historia] Park Chung-hee, prezydent Korei Poludniowej, zostal zamordowany. (1979)" },
  { 2002, "[Historia] Terrorysci zajmujacy teatr na Dubrowce zostali obezwladnieni w Moskwie. (2002)" },
};

// 27.10
const HistoryEvent HIST_301[] = {
  { 312, "[Historia] Konstantyn Wielki zwyciezyl w bitwie przy moscie Mulwijskim. (312)" },
  { 1492, "[Historia] Krzysztof Kolumb dotarl do Kuby. (1492)" },
  { 1886, "[Kultura] Odslonieto Statue Wolnosci w Nowym Jorku. (1886)" },
  { 1918, "[Polska] Polska Komisja Likwidacyjna rozpoczela dzialalnosc w Krakowie. (1918)" },
  { 1962, "[Historia] Kryzys kubanski zaczal wygasac po porozumieniu USA i ZSRR. (1962)" },
};

// 28.10
const HistoryEvent HIST_302[] = {
  { 1923, "[Historia] Turcja zostala republika. (1923)" },
  { 1929, "[Historia] Czarny Wtorek pograzyl gielde nowojorska. (1929)" },
  { 1944, "[Polska] Rozpoczela sie akcja Burza na niektorych terenach kresowych we wspomnieniach powojennych. (1944)" },
  { 1969, "[Nauka] Pierwsza wiadomosc przez ARPANET zapoczatkowala internet. (1969)" },
  { 1998, "[Historia] John Glenn wrocil w kosmos jako najstarszy astronauta tamtych czasow. (1998)" },
};

// 29.10
const HistoryEvent HIST_303[] = {
  { 1938, "[Kultura] Orson Welles wyemitowal sluchowisko Wojna swiatow. (1938)" },
  { 1944, "[Polska] PKWN wydal dekret o ochronie panstwa w powojennej Polsce. (1944)" },
  { 1961, "[Nauka] ZSRR zdetonowal Car-bombe, najpotezniejsza bombe jadrowa w historii. (1961)" },
  { 1974, "[Historia] Muhammad Ali pokonal George'a Foremana w walce Rumble in the Jungle. (1974)" },
  { 1995, "[Historia] Quebec odrzucil niepodleglosc w referendum. (1995)" },
};

// 30.10
const HistoryEvent HIST_304[] = {
  { 1517, "[Historia] Marcin Luter oglosil 95 tez w Wittenberdze. (1517)" },
  { 1918, "[Polska] Rozpoczelo sie rozbrajanie Austriakow w Krakowie. (1918)" },
  { 1926, "[Historia] Zmarl Harry Houdini. (1926)" },
  { 1941, "[Nauka] Rozpoczeto prace przy Mount Rushmore. (1941)" },
  { 0, "[Kultura] Halloween obchodzone jest wieczorem 31 pazdziernika." },
};

// 31.10
const HistoryEvent HIST_305[] = {
  { 1755, "[Historia] Trzesienie ziemi zniszczylo Lizbone. (1755)" },
  { 1918, "[Polska] We Lwowie wybuchly walki polsko-ukrainskie. (1918)" },
  { 1952, "[Nauka] USA przeprowadzily pierwszy test bomby wodorowej Ivy Mike. (1952)" },
  { 1993, "[Historia] Powstala Unia Europejska po wejsciu w zycie traktatu z Maastricht. (1993)" },
  { 0, "[Historia] Uroczystosc Wszystkich Swietych w Polsce." },
};

// 01.11
const HistoryEvent HIST_306[] = {
  { 1755, "[Historia] Trzesienie ziemi zniszczylo Lizbone. (1755)" },
  { 1918, "[Polska] We Lwowie wybuchly walki polsko-ukrainskie. (1918)" },
  { 1952, "[Nauka] USA przeprowadzily pierwszy test bomby wodorowej Ivy Mike. (1952)" },
  { 1993, "[Historia] Powstala Unia Europejska po wejsciu w zycie traktatu z Maastricht. (1993)" },
  { 0, "[Historia] Uroczystosc Wszystkich Swietych w Polsce." },
};

// 02.11
const HistoryEvent HIST_307[] = {
  { 1917, "[Historia] Wielka Brytania oglosila deklaracje Balfoura. (1917)" },
  { 1936, "[Historia] BBC rozpoczela regularna emisje telewizyjna. (1936)" },
  { 1947, "[Nauka] Howard Hughes wykonal jedyny lot samolotem H-4 Hercules. (1947)" },
  { 1983, "[Polska] Zmarl ks. Jerzy Popieluszko zostal pochowany w Warszawie. (1984)" },
  { 2000, "[Nauka] Pierwsza stala zaloga zamieszkala na Miedzynarodowej Stacji Kosmicznej. (2000)" },
};

// 03.11
const HistoryEvent HIST_308[] = {
  { 1493, "[Historia] Krzysztof Kolumb dotarl do Dominiki podczas drugiej wyprawy. (1493)" },
  { 1918, "[Polska] Powstala Polska Komisja Likwidacyjna w Krakowie. (1918)" },
  { 1957, "[Nauka] ZSRR wystrzelil Sputnika 2 z psem Lajka. (1957)" },
  { 1978, "[Kultura] Dominika uzyskala niepodleglosc od Wielkiej Brytanii. (1978)" },
  { 1992, "[Historia] Bill Clinton wygral wybory prezydenckie w USA. (1992)" },
};

// 04.11
const HistoryEvent HIST_309[] = {
  { 1794, "[Polska] Wojska rosyjskie zdobyly Prage, konczac obrone Warszawy. (1794)" },
  { 1922, "[Historia] Howard Carter odkryl wejscie do grobowca Tutanchamona. (1922)" },
  { 1946, "[Nauka] UNESCO rozpoczelo dzialalnosc jako agenda ONZ. (1946)" },
  { 1956, "[Historia] Wojska ZSRR stlumily powstanie wegierskie. (1956)" },
  { 2008, "[Historia] Barack Obama zostal wybrany prezydentem USA. (2008)" },
};

// 05.11
const HistoryEvent HIST_310[] = {
  { 1605, "[Historia] Udaremniono spisek prochowy w Anglii. (1605)" },
  { 1916, "[Polska] Akt 5 listopada zapowiadal utworzenie Krolestwa Polskiego. (1916)" },
  { 1935, "[Kultura] Firma Parker Brothers wydala gre Monopoly. (1935)" },
  { 1968, "[Historia] Richard Nixon wygral wybory prezydenckie w USA. (1968)" },
  { 2007, "[Nauka] Sonda Chang'e 1 weszla na orbite Ksiezyca. (2007)" },
};

// 06.11
const HistoryEvent HIST_311[] = {
  { 1860, "[Historia] Abraham Lincoln zostal wybrany prezydentem USA. (1860)" },
  { 1918, "[Polska] Rada Regencyjna przekazala wladze wojskowa Jozefowi Pilsudskiemu kilka dni pozniej. (1918)" },
  { 1943, "[Historia] Armia Czerwona wyzwolila Kijow spod okupacji niemieckiej. (1943)" },
  { 1962, "[Historia] ONZ potepila apartheid w Republice Poludniowej Afryki. (1962)" },
  { 0, "[Historia] Miedzynarodowy Dzien Zapobiegania Wyzyskowi Srodowiska podczas Wojny." },
};

// 07.11
const HistoryEvent HIST_312[] = {
  { 1867, "[Nauka] Urodzila sie Maria Sklodowska-Curie. (1867)" },
  { 1917, "[Historia] Rozpoczela sie rewolucja pazdziernikowa wedlug kalendarza gregorianskiego. (1917)" },
  { 1918, "[Polska] Tymczasowy Rzad Ludowy Republiki Polskiej powstal w Lublinie. (1918)" },
  { 1944, "[Historia] Franklin D. Roosevelt wygral czwarta kadencje prezydencka. (1944)" },
  { 1996, "[Nauka] NASA wystrzelila sonde Mars Global Surveyor. (1996)" },
};

// 08.11
const HistoryEvent HIST_313[] = {
  { 1895, "[Nauka] Wilhelm Roentgen odkryl promienie X. (1895)" },
  { 1923, "[Historia] Adolf Hitler rozpoczal pucz monachijski. (1923)" },
  { 1939, "[Historia] Georg Elser dokonal nieudanego zamachu na Hitlera w Monachium. (1939)" },
  { 1960, "[Historia] John F. Kennedy wygral wybory prezydenckie w USA. (1960)" },
  { 0, "[Historia] Swiatowy Dzien Urbanistyki." },
};

// 09.11
const HistoryEvent HIST_314[] = {
  { 1799, "[Historia] Napoleon Bonaparte przeprowadzil zamach 18 brumaire'a. (1799)" },
  { 1918, "[Polska] Rada Regencyjna rozwiazala sie i przekazala wladze Jozefowi Pilsudskiemu. (1918)" },
  { 1938, "[Historia] Noc krysztalowa: pogrom Zydow w III Rzeszy. (1938)" },
  { 1989, "[Historia] Upadl Mur Berlinski. (1989)" },
  { 0, "[Historia] Miedzynarodowy Dzien Walki z Faszyzmem i Antysemityzmem." },
};

// 10.11
const HistoryEvent HIST_315[] = {
  { 1483, "[Kultura] Urodzil sie Marcin Luter. (1483)" },
  { 1918, "[Polska] Jozef Pilsudski powrocil do Warszawy z Magdeburga. (1918)" },
  { 1969, "[Kultura] Ulica Sezamkowa zadebiutowala w telewizji USA. (1969)" },
  { 1970, "[Nauka] Sonda Luna 17 wystartowala z lazikiem Lunochod 1. (1970)" },
  { 1982, "[Historia] Zmarl Leonid Brezniew. (1982)" },
};

// 11.11
const HistoryEvent HIST_316[] = {
  { 1918, "[Polska] Polska odzyskala niepodleglosc po 123 latach zaborow. (1918)" },
  { 1918, "[Polska] Jozef Pilsudski przejal wladze wojskowa w Warszawie. (1918)" },
  { 1918, "[Historia] Zakonczono I wojne swiatowa rozejmem w Compiegne. (1918)" },
  { 1975, "[Historia] Angola uzyskala niepodleglosc od Portugalii. (1975)" },
  { 0, "[Polska] Narodowe Swieto Niepodleglosci." },
};

// 12.11
const HistoryEvent HIST_317[] = {
  { 1918, "[Polska] Jozef Pilsudski otrzymal misje utworzenia rzadu. (1918)" },
  { 1927, "[Historia] Lew Trocki zostal usuniety z partii komunistycznej ZSRR. (1927)" },
  { 1970, "[Historia] Cyklon Bhola uderzyl w Pakistan Wschodni, powodujac ogromna tragedie. (1970)" },
  { 1980, "[Nauka] Voyager 1 przelecial obok Saturna. (1980)" },
  { 1990, "[Kultura] Tim Berners-Lee opublikowal propozycje systemu World Wide Web. (1990)" },
};

// 13.11
const HistoryEvent HIST_318[] = {
  { 1002, "[Historia] Masakra dnia sw. Brykcjusza w Anglii. (1002)" },
  { 1918, "[Polska] Trwaly prace nad organizacja odrodzonego panstwa polskiego. (1918)" },
  { 1940, "[Kultura] Premiera filmu Fantazja Walta Disneya. (1940)" },
  { 1974, "[Historia] Karen Silkwood zginela w tajemniczym wypadku samochodowym. (1974)" },
  { 1985, "[Nauka] Erupcja wulkanu Nevado del Ruiz zniszczyla Armero w Kolumbii. (1985)" },
};

// 14.11
const HistoryEvent HIST_319[] = {
  { 1851, "[Kultura] Ukazala sie powiesc Moby Dick Hermana Melville'a. (1851)" },
  { 1918, "[Polska] Trwala budowa administracji odrodzonej Rzeczypospolitej. (1918)" },
  { 1960, "[Historia] Ruby Bridges jako dziecko rozpoczela nauke w odsegregowanej szkole w USA. (1960)" },
  { 1969, "[Nauka] Apollo 12 wystartowal w kierunku Ksiezyca. (1969)" },
  { 1971, "[Historia] Mariner 9 wszedl na orbite Marsa jako pierwsza sonda przy innej planecie. (1971)" },
};

// 15.11
const HistoryEvent HIST_320[] = {
  { 1889, "[Historia] Cesarz Brazylii Piotr II zostal obalony, proklamowano republike. (1889)" },
  { 1918, "[Polska] Telegram Jozefa Pilsudskiego notyfikowal powstanie panstwa polskiego. (1918)" },
  { 1920, "[Historia] W Genewie odbylo sie pierwsze zgromadzenie Ligi Narodow. (1920)" },
  { 1971, "[Nauka] Intel wprowadzil mikroprocesor 4004. (1971)" },
  { 1988, "[Historia] Palestynska Rada Narodowa oglosila niepodleglosc Palestyny. (1988)" },
};

// 16.11
const HistoryEvent HIST_321[] = {
  { 1532, "[Historia] Francisco Pizarro pojmal Atahualpe, wladce Inkow. (1532)" },
  { 1918, "[Polska] Naczelnik Pilsudski ksztaltowal pierwsze wladze odrodzonej Polski. (1918)" },
  { 1945, "[Historia] Powstalo UNESCO jako organizacja ONZ ds. edukacji, nauki i kultury. (1945)" },
  { 1974, "[Nauka] Wyslano wiadomosc Arecibo w kierunku gromady M13. (1974)" },
  { 1988, "[Historia] Benazir Bhutto zostala wybrana premierem Pakistanu. (1988)" },
};

// 17.11
const HistoryEvent HIST_322[] = {
  { 1558, "[Historia] Elzbieta I zostala krolowa Anglii. (1558)" },
  { 1869, "[Historia] Otwarto Kanal Sueski. (1869)" },
  { 1918, "[Polska] Jozef Pilsudski zostal Tymczasowym Naczelnikiem Panstwa kilka dni pozniej. (1918)" },
  { 1970, "[Nauka] Luna 17 dostarczyla na Ksiezyc lazik Lunochod 1. (1970)" },
  { 1989, "[Historia] Rozpoczela sie aksamitna rewolucja w Czechoslowacji. (1989)" },
};

// 18.11
const HistoryEvent HIST_323[] = {
  { 1307, "[Legenda] Wedlug tradycji Wilhelm Tell stracil jablko z glowy syna. (1307)" },
  { 1918, "[Polska] W odrodzonej Polsce organizowano wojsko, urzedy i dyplomacje. (1918)" },
  { 1928, "[Kultura] Premiera filmu Steamboat Willie z Myszka Miki. (1928)" },
  { 1978, "[Historia] Jim Jones i czlonkowie sekty zgineli w Jonestown. (1978)" },
  { 1993, "[Historia] Ukraina ratyfikowala traktat START I. (1993)" },
};

// 19.11
const HistoryEvent HIST_324[] = {
  { 1493, "[Historia] Krzysztof Kolumb dotarl do Portoryko podczas drugiej wyprawy. (1493)" },
  { 1918, "[Polska] Trwaly walki o granice i organizacja odrodzonego panstwa. (1918)" },
  { 1942, "[Historia] Rozpoczela sie kontrofensywa Armii Czerwonej pod Stalingradem. (1942)" },
  { 1969, "[Nauka] Apollo 12 wyladowal na Ksiezycu. (1969)" },
  { 1998, "[Historia] Izba Reprezentantow USA rozpoczela przesluchania w sprawie impeachmentu Billa Clintona. (1998)" },
};

// 20.11
const HistoryEvent HIST_325[] = {
  { 1910, "[Historia] Rozpoczela sie rewolucja meksykanska. (1910)" },
  { 1918, "[Polska] Rzad Jedrzeja Moraczewskiego rozpoczal reformy spoleczne. (1918)" },
  { 1945, "[Historia] Rozpoczal sie proces norymberski glownych zbrodniarzy wojennych. (1945)" },
  { 1985, "[Nauka] Microsoft wydal system Windows 1.0. (1985)" },
  { 1998, "[Nauka] Pierwszy modul ISS, Zaria, zostal wyniesiony na orbite. (1998)" },
};

// 21.11
const HistoryEvent HIST_326[] = {
  { 1694, "[Kultura] Urodzil sie Wolter. (1694)" },
  { 1918, "[Polska] Galicja i ziemie centralne scalaly administracje odrodzonej Polski. (1918)" },
  { 1964, "[Historia] Otwarto most Verrazzano-Narrows w Nowym Jorku. (1964)" },
  { 1995, "[Historia] Podpisano porozumienie z Dayton konczace wojne w Bosni. (1995)" },
  { 2013, "[Historia] Rozpoczely sie protesty Euromajdanu w Kijowie. (2013)" },
};

// 22.11
const HistoryEvent HIST_327[] = {
  { 1718, "[Historia] Pirat Czarnobrody zginal w walce u wybrzezy Karoliny Polnocnej. (1718)" },
  { 1918, "[Polska] Jozef Pilsudski zostal Tymczasowym Naczelnikiem Panstwa. (1918)" },
  { 1963, "[Historia] Zamordowano prezydenta USA Johna F. Kennedy'ego. (1963)" },
  { 1975, "[Historia] Juan Carlos I zostal krolem Hiszpanii. (1975)" },
  { 1995, "[Kultura] Premiera filmu Toy Story w USA. (1995)" },
};

// 23.11
const HistoryEvent HIST_328[] = {
  { 534, "[Historia] Ukazala sie ostateczna wersja Kodeksu Justyniana. (534)" },
  { 1936, "[Kultura] Pierwszy numer magazynu Life ukazal sie w USA. (1936)" },
  { 1944, "[Historia] Alianci wyzwolili Strasburg. (1944)" },
  { 1963, "[Kultura] Wyemitowano pierwszy odcinek Doctor Who. (1963)" },
  { 2005, "[Historia] Ellen Johnson Sirleaf zostala wybrana prezydentem Liberii. (2005)" },
};

// 24.11
const HistoryEvent HIST_329[] = {
  { 1642, "[Historia] Abel Tasman dostrzegl Tasmanie. (1642)" },
  { 1859, "[Nauka] Charles Darwin opublikowal O powstawaniu gatunkow. (1859)" },
  { 1918, "[Polska] Rzad odrodzonej Polski oglaszal reformy i umacnial administracje. (1918)" },
  { 1963, "[Historia] Lee Harvey Oswald zostal zastrzelony przez Jacka Ruby'ego. (1963)" },
  { 1991, "[Kultura] Zmarl Freddie Mercury. (1991)" },
};

// 25.11
const HistoryEvent HIST_330[] = {
  { 1795, "[Polska] Stanislaw August Poniatowski abdykowal, konczac panowanie ostatniego krola Polski. (1795)" },
  { 1915, "[Nauka] Albert Einstein przedstawil rownania ogolnej teorii wzglednosci. (1915)" },
  { 1947, "[Historia] Powstala tzw. czarna lista Hollywood. (1947)" },
  { 1975, "[Historia] Surinam uzyskal niepodleglosc od Holandii. (1975)" },
  { 0, "[Historia] Miedzynarodowy Dzien Eliminacji Przemocy wobec Kobiet." },
};

// 26.11
const HistoryEvent HIST_331[] = {
  { 1865, "[Kultura] Ukazala sie Alicja w Krainie Czarow Lewisa Carrolla. (1865)" },
  { 1918, "[Polska] Odrodzona Polska organizowala pierwsze struktury sluzb i administracji. (1918)" },
  { 1922, "[Historia] Howard Carter wszedl do grobowca Tutanchamona. (1922)" },
  { 1942, "[Kultura] Premiera filmu Casablanca w Nowym Jorku. (1942)" },
  { 2008, "[Historia] Zamachy terrorystyczne w Mumbaju. (2008)" },
};

// 27.11
const HistoryEvent HIST_332[] = {
  { 1095, "[Historia] Papiez Urban II wezwal do pierwszej krucjaty na synodzie w Clermont. (1095)" },
  { 1895, "[Nauka] Alfred Nobel podpisal testament fundujacy Nagrody Nobla. (1895)" },
  { 1918, "[Polska] Trwaly walki o granice odrodzonej Rzeczypospolitej. (1918)" },
  { 1942, "[Historia] Flota francuska samozatopila sie w Tulonie. (1942)" },
  { 1971, "[Nauka] Sonda Mars 2 dotarla do Marsa jako pierwsza ludzka konstrukcja na powierzchni. (1971)" },
};

// 28.11
const HistoryEvent HIST_333[] = {
  { 1520, "[Historia] Ferdynand Magellan przeplynal z Atlantyku na Pacyfik. (1520)" },
  { 1918, "[Polska] Naczelnik Panstwa organizowal pierwsze dekrety odrodzonej Polski. (1918)" },
  { 1943, "[Historia] Rozpoczela sie konferencja teheranska. (1943)" },
  { 1964, "[Nauka] NASA wystrzelila sonde Mariner 4 w kierunku Marsa. (1964)" },
  { 1994, "[Historia] Norwegowie odrzucili wejscie do Unii Europejskiej w referendum. (1994)" },
};

// 29.11
const HistoryEvent HIST_334[] = {
  { 1830, "[Polska] Wybuchlo powstanie listopadowe. (1830)" },
  { 1899, "[Kultura] Powstal klub FC Barcelona. (1899)" },
  { 1947, "[Historia] ONZ przyjela plan podzialu Palestyny. (1947)" },
  { 1961, "[Nauka] Enos, szympans NASA, okrazyl Ziemie w kapsule Mercury. (1961)" },
  { 0, "[Historia] Miedzynarodowy Dzien Solidarnosci z Narodem Palestynskim." },
};

// 30.11
const HistoryEvent HIST_335[] = {
  { 1782, "[Historia] USA i Wielka Brytania podpisaly wstepne artykuly pokoju konczace wojne o niepodleglosc. (1782)" },
  { 1830, "[Polska] Powstancy listopadowi przejmowali kontrole nad Warszawa. (1830)" },
  { 1872, "[Sport] Rozegrano pierwszy oficjalny mecz pilkarski miedzypanstwowy: Szkocja-Anglia. (1872)" },
  { 1939, "[Historia] ZSRR zaatakowal Finlandie, rozpoczynajac wojne zimowa. (1939)" },
  { 0, "[Historia] Dzien Pamieci Ofiar Wielkiego Glodu na Ukrainie bywa obchodzony pod koniec listopada." },
};

// 01.12
const HistoryEvent HIST_336[] = {
  { 1918, "[Polska] Jozef Pilsudski podpisal dekret o ordynacji wyborczej do Sejmu Ustawodawczego. (1918)" },
  { 1955, "[Historia] Rosa Parks odmowila ustapienia miejsca w autobusie w Montgomery. (1955)" },
  { 1959, "[Historia] Podpisano traktat antarktyczny. (1959)" },
  { 1990, "[Historia] Polaczono tunelem pod kanalem La Manche strony brytyjska i francuska. (1990)" },
  { 0, "[Historia] Swiatowy Dzien AIDS." },
};

// 02.12
const HistoryEvent HIST_337[] = {
  { 1804, "[Historia] Napoleon Bonaparte koronowal sie na cesarza Francuzow. (1804)" },
  { 1823, "[Historia] USA oglosily doktryne Monroe. (1823)" },
  { 1942, "[Nauka] Enrico Fermi uruchomil pierwszy kontrolowany reaktor jadrowy Chicago Pile-1. (1942)" },
  { 1971, "[Historia] Powstaly Zjednoczone Emiraty Arabskie. (1971)" },
  { 1982, "[Nauka] Po raz pierwszy wszczepiono czlowiekowi sztuczne serce Jarvik 7. (1982)" },
};

// 03.12
const HistoryEvent HIST_338[] = {
  { 1857, "[Kultura] Urodzil sie Joseph Conrad, pisarz polskiego pochodzenia. (1857)" },
  { 1918, "[Polska] W odrodzonej Polsce trwaly przygotowania do wyborow parlamentarnych. (1918)" },
  { 1967, "[Nauka] W Kapsztadzie wykonano pierwszy udany przeszczep serca u czlowieka. (1967)" },
  { 1971, "[Historia] Rozpoczela sie wojna indyjsko-pakistanska o Bangladesz. (1971)" },
  { 1984, "[Historia] Katastrofa w Bhopalu stala sie jedna z najwiekszych katastrof przemyslowych. (1984)" },
};

// 04.12
const HistoryEvent HIST_339[] = {
  { 771, "[Historia] Karol Wielki zostal jedynym wladca Frankow po smierci brata. (771)" },
  { 1791, "[Historia] Ukazal sie pierwszy numer brytyjskiego dziennika The Observer. (1791)" },
  { 1918, "[Polska] Rzad Jedrzeja Moraczewskiego wprowadzal reformy spoleczne w odrodzonej Polsce. (1918)" },
  { 1981, "[Historia] Ronald Reagan podpisal rozkaz rozwoju pociskow MX. (1981)" },
  { 1991, "[Historia] Dziennikarz Terry Anderson zostal uwolniony po latach niewoli w Libanie. (1991)" },
};

// 05.12
const HistoryEvent HIST_340[] = {
  { 1492, "[Historia] Krzysztof Kolumb dotarl do Hispanioli. (1492)" },
  { 1766, "[Kultura] W Londynie odbyla sie pierwsza aukcja domu Christie's. (1766)" },
  { 1933, "[Historia] Zniesiono prohibicje w USA. (1933)" },
  { 1952, "[Historia] Wielki smog londynski rozpoczal kilka dni tragicznego zanieczyszczenia. (1952)" },
  { 1977, "[Nauka] W RPA wykonano pierwszy lot samolotu Atlas Cheetah jako modernizacji Mirage. (1977)" },
};

// 06.12
const HistoryEvent HIST_341[] = {
  { 1240, "[Historia] Mongolowie zdobyli Kijow. (1240)" },
  { 1865, "[Historia] USA ratyfikowaly 13. poprawke znoszaca niewolnictwo. (1865)" },
  { 1917, "[Historia] Finlandia oglosila niepodleglosc od Rosji. (1917)" },
  { 1921, "[Polska] Podpisano traktat polsko-rumunski wzmacniajacy bezpieczenstwo regionu. (1921)" },
  { 1992, "[Historia] Zburzono Babri Masjid w Indiach, co wywolalo zamieszki. (1992)" },
};

// 07.12
const HistoryEvent HIST_342[] = {
  { 43, "[Historia] Zamordowano Cycerona podczas proskrypcji drugiego triumwiratu. (43)" },
  { 1787, "[Historia] Delaware jako pierwszy stan ratyfikowal konstytucje USA. (1787)" },
  { 1941, "[Historia] Japonia zaatakowala Pearl Harbor. (1941)" },
  { 1972, "[Nauka] Apollo 17 wystartowal w ostatnia zalogowa misje ksiezycowa programu Apollo. (1972)" },
  { 1988, "[Historia] Trzesienie ziemi zniszczylo czesc Armenii. (1988)" },
};

// 08.12
const HistoryEvent HIST_343[] = {
  { 1863, "[Historia] Abraham Lincoln oglosil plan odbudowy USA po wojnie secesyjnej. (1863)" },
  { 1886, "[Nauka] Urodzil sie Diego Rivera, meksykanski malarz murali. (1886)" },
  { 1941, "[Polska] Niemcy utworzyli oboz zaglady Chelmno nad Nerem. (1941)" },
  { 1980, "[Kultura] John Lennon zostal zastrzelony w Nowym Jorku. (1980)" },
  { 1991, "[Historia] Przywodcy Rosji, Ukrainy i Bialorusi podpisali porozumienie bialowieskie. (1991)" },
};

// 09.12
const HistoryEvent HIST_344[] = {
  { 1824, "[Historia] Bitwa pod Ayacucho przesadzila o niepodleglosci Peru i koncu wladzy Hiszpanii w Ameryce Poludniowej. (1824)" },
  { 1905, "[Historia] We Francji uchwalono rozdzial Kosciola od panstwa. (1905)" },
  { 1922, "[Polska] Gabriel Narutowicz zostal wybrany pierwszym prezydentem RP. (1922)" },
  { 1968, "[Nauka] Douglas Engelbart zaprezentowal mysz komputerowa i interfejs graficzny. (1968)" },
  { 1987, "[Historia] Rozpoczela sie pierwsza intifada palestynska. (1987)" },
};

// 10.12
const HistoryEvent HIST_345[] = {
  { 1845, "[Nauka] Robert Thompson opatentowal pneumatyczna opone. (1845)" },
  { 1868, "[Historia] Pierwsza sygnalizacja swietlna zaczela dzialac w Londynie. (1868)" },
  { 1901, "[Kultura] Po raz pierwszy wreczono Nagrody Nobla. (1901)" },
  { 1948, "[Historia] ONZ przyjela Powszechna Deklaracje Praw Czlowieka. (1948)" },
  { 1983, "[Polska] Lech Walesa odebral Pokojowa Nagrode Nobla w Oslo przez zone Danute. (1983)" },
};

// 11.12
const HistoryEvent HIST_346[] = {
  { 1918, "[Polska] Rzad Jedrzeja Moraczewskiego wydal dekret o osmiogodzinnym dniu pracy. (1918)" },
  { 1931, "[Historia] Przyjeto Statut Westminsterski, wzmacniajacy autonomie dominionow. (1931)" },
  { 1941, "[Historia] Niemcy i Wlochy wypowiedzialy wojne USA. (1941)" },
  { 1946, "[Kultura] UNICEF zostal powolany przez Zgromadzenie Ogolne ONZ. (1946)" },
  { 1972, "[Nauka] Apollo 17 wyladowal na Ksiezycu. (1972)" },
};

// 12.12
const HistoryEvent HIST_347[] = {
  { 1901, "[Nauka] Guglielmo Marconi odebral pierwszy transatlantycki sygnal radiowy. (1901)" },
  { 1915, "[Kultura] Urodzil sie Frank Sinatra. (1915)" },
  { 1979, "[Historia] Rodezja zmienila nazwe na Zimbabwe-Rodezja w procesie przemian politycznych. (1979)" },
  { 1981, "[Polska] Wladze PRL przygotowywaly wprowadzenie stanu wojennego. (1981)" },
  { 2015, "[Historia] Przyjeto porozumienie paryskie w sprawie klimatu. (2015)" },
};

// 13.12
const HistoryEvent HIST_348[] = {
  { 1577, "[Historia] Francis Drake wyplynal w wyprawe dookola swiata. (1577)" },
  { 1937, "[Historia] Rozpoczela sie masakra nankinska. (1937)" },
  { 1981, "[Polska] Wprowadzono stan wojenny w PRL. (1981)" },
  { 2003, "[Historia] Schwytano Saddama Husajna w Iraku. (2003)" },
  { 0, "[Historia] Dzien Pamieci Ofiar Stanu Wojennego w Polsce." },
};

// 14.12
const HistoryEvent HIST_349[] = {
  { 1542, "[Historia] Maria Stuart zostala krolowa Szkocji jako niemowle. (1542)" },
  { 1911, "[Nauka] Roald Amundsen dotarl do bieguna poludniowego. (1911)" },
  { 1918, "[Polska] Kobiety w Polsce korzystaly z nowych praw wyborczych przy przygotowaniach do wyborow. (1918)" },
  { 1995, "[Historia] Podpisano uklad z Dayton konczacy wojne w Bosni i Hercegowinie. (1995)" },
  { 2004, "[Nauka] Sonda Huygens oddzielila sie od Cassini w drodze na Tytana. (2004)" },
};

// 15.12
const HistoryEvent HIST_350[] = {
  { 37, "[Historia] Urodzil sie Neron, cesarz rzymski. (37)" },
  { 1791, "[Historia] Ratyfikowano pierwsze dziesiec poprawek do konstytucji USA, Bill of Rights. (1791)" },
  { 1916, "[Historia] Zakonczyla sie bitwa pod Verdun. (1916)" },
  { 1970, "[Nauka] Sonda Wenera 7 jako pierwsza przekazala dane z powierzchni innej planety. (1970)" },
  { 0, "[Historia] Dzien Esperanto, rocznica urodzin Ludwika Zamenhofa." },
};

// 16.12
const HistoryEvent HIST_351[] = {
  { 1653, "[Historia] Oliver Cromwell zostal Lordem Protektorem Anglii, Szkocji i Irlandii. (1653)" },
  { 1773, "[Historia] Bostonskie picie herbaty bylo protestem kolonistow przeciw podatkom. (1773)" },
  { 1922, "[Polska] Zamordowano prezydenta Gabriela Narutowicza. (1922)" },
  { 1944, "[Historia] Rozpoczela sie niemiecka ofensywa w Ardenach. (1944)" },
  { 0, "[Historia] Rocznica zabojstwa pierwszego prezydenta II RP." },
};

// 17.12
const HistoryEvent HIST_352[] = {
  { 1903, "[Nauka] Bracia Wright wykonali pierwszy udany lot samolotem silnikowym. (1903)" },
  { 1939, "[Historia] Bitwa u ujscia La Platy zakonczyla sie samozatopieniem Grafa Spee. (1939)" },
  { 1970, "[Polska] W Gdyni i innych miastach Wybrzeza doszlo do krwawo stlumionych protestow. (1970)" },
  { 1989, "[Historia] Premiera serialu The Simpsons w USA. (1989)" },
  { 2010, "[Historia] Mohamed Bouazizi podpalil sie, zapoczatkowujac Arabska Wiosne. (2010)" },
};

// 18.12
const HistoryEvent HIST_353[] = {
  { 1865, "[Historia] Ratyfikacja 13. poprawki formalnie zniosla niewolnictwo w USA. (1865)" },
  { 1912, "[Nauka] Odkryto czaszke czlowieka z Piltdown, pozniejszego falszerstwa naukowego. (1912)" },
  { 1970, "[Polska] Trwaly protesty robotnicze na Wybrzezu. (1970)" },
  { 1972, "[Historia] USA rozpoczely operacje Linebacker II nad Wietnamem Polnocnym. (1972)" },
  { 1997, "[Nauka] HTML 4.0 zostal opublikowany jako rekomendacja W3C. (1997)" },
};

// 19.12
const HistoryEvent HIST_354[] = {
  { 1843, "[Kultura] Ukazala sie Opowiesc wigilijna Charlesa Dickensa. (1843)" },
  { 1909, "[Nauka] Zalozono Borussia Dortmund, pozniej znany klub sportowy. (1909)" },
  { 1970, "[Polska] Edward Gierek zastapil Wladyslawa Gomulke jako I sekretarz PZPR. (1970)" },
  { 1984, "[Historia] Podpisano deklaracje chinsko-brytyjska w sprawie Hongkongu. (1984)" },
  { 1998, "[Historia] Izba Reprezentantow USA przeglosowala impeachment Billa Clintona. (1998)" },
};

// 20.12
const HistoryEvent HIST_355[] = {
  { 1803, "[Historia] USA finalizowaly zakup Luizjany od Francji. (1803)" },
  { 1970, "[Polska] Edward Gierek wyglosil przemowienie po wydarzeniach Grudnia 1970. (1970)" },
  { 1989, "[Historia] USA rozpoczely inwazje na Paname. (1989)" },
  { 1995, "[Nauka] NATO rozpoczelo misje IFOR w Bosni i Hercegowinie. (1995)" },
  { 0, "[Historia] Miedzynarodowy Dzien Solidarnosci Ludzkiej." },
};

// 21.12
const HistoryEvent HIST_356[] = {
  { 1898, "[Nauka] Maria i Piotr Curie odkryli rad. (1898)" },
  { 1913, "[Kultura] W gazecie New York World opublikowano pierwsza krzyzowke. (1913)" },
  { 1937, "[Kultura] Premiera filmu Krolewna Sniezka i siedmiu krasnoludkow. (1937)" },
  { 1988, "[Historia] Nad Lockerbie eksplodowal samolot Pan Am 103. (1988)" },
  { 1991, "[Historia] Przywodcy republik radzieckich podpisali deklaracje o rozwiazaniu ZSRR. (1991)" },
};

// 22.12
const HistoryEvent HIST_357[] = {
  { 1808, "[Kultura] Beethoven zaprezentowal V i VI symfonie w Wiedniu. (1808)" },
  { 1970, "[Polska] Sejm PRL zatwierdzil zmiany personalne po Grudniu 1970. (1970)" },
  { 1978, "[Nauka] Sonda Venera 12 wyladowala na Wenus. (1978)" },
  { 1989, "[Historia] Brama Brandenburska zostala ponownie otwarta. (1989)" },
  { 1990, "[Historia] Lech Walesa zostal zaprzysiezony na prezydenta RP. (1990)" },
};

// 23.12
const HistoryEvent HIST_358[] = {
  { 1913, "[Nauka] Utworzono System Rezerwy Federalnej USA. (1913)" },
  { 1947, "[Nauka] John Bardeen i Walter Brattain zademonstrowali tranzystor. (1947)" },
  { 1972, "[Nauka] Ocaleni z katastrofy lotu Fuerza Aerea Uruguaya 571 zostali uratowani w Andach. (1972)" },
  { 1986, "[Historia] Samolot Voyager zakonczyl pierwszy lot dookola swiata bez ladowania i tankowania. (1986)" },
  { 0, "[Kultura] W Polsce 23 grudnia to czesto dzien ostatnich przygotowan do Wigilii." },
};

// 24.12
const HistoryEvent HIST_359[] = {
  { 1818, "[Kultura] Po raz pierwszy wykonano kolede Cicha noc. (1818)" },
  { 1914, "[Historia] Rozpoczely sie rozejmy bozonarodzeniowe na froncie zachodnim. (1914)" },
  { 1968, "[Nauka] Apollo 8 wszedl na orbite Ksiezyca. (1968)" },
  { 1979, "[Historia] ZSRR rozpoczal interwencje w Afganistanie. (1979)" },
  { 0, "[Polska] Wigilia Bozego Narodzenia." },
};

// 25.12
const HistoryEvent HIST_360[] = {
  { 800, "[Historia] Karol Wielki zostal koronowany na cesarza w Rzymie. (800)" },
  { 1066, "[Historia] Wilhelm Zdobywca zostal koronowany na krola Anglii. (1066)" },
  { 1914, "[Historia] Trwal rozejm bozonarodzeniowy na froncie zachodnim. (1914)" },
  { 1991, "[Historia] Michail Gorbaczow zrezygnowal z funkcji prezydenta ZSRR. (1991)" },
  { 0, "[Polska] Boze Narodzenie, pierwszy dzien swiat." },
};

// 26.12
const HistoryEvent HIST_361[] = {
  { 1790, "[Nauka] Heinrich Schliemann urodzil sie w Niemczech, pozniejszy archeolog Troi. (1822)" },
  { 1865, "[Nauka] James Mason opatentowal perkolator do kawy w USA. (1865)" },
  { 1898, "[Nauka] Maria i Piotr Curie oglosili odkrycie radu Francuskiej Akademii Nauk. (1898)" },
  { 2004, "[Historia] Trzesienie ziemi na Oceanie Indyjskim wywolalo katastrofalne tsunami. (2004)" },
  { 0, "[Polska] Drugi dzien swiat Bozego Narodzenia." },
};

// 27.12
const HistoryEvent HIST_362[] = {
  { 1831, "[Historia] Karol Darwin wyplynal w rejs na HMS Beagle. (1831)" },
  { 1918, "[Polska] Wybuchlo powstanie wielkopolskie w Poznaniu. (1918)" },
  { 1945, "[Historia] Utworzono Bank Swiatowy i Miedzynarodowy Fundusz Walutowy. (1945)" },
  { 1978, "[Historia] Hiszpania przyjela demokratyczna konstytucje po rzadach Franco. (1978)" },
  { 2007, "[Kultura] Benazir Bhutto zginela w zamachu w Pakistanie. (2007)" },
};

// 28.12
const HistoryEvent HIST_363[] = {
  { 1065, "[Historia] Konsekrowano Opactwo Westminsterskie w Londynie. (1065)" },
  { 1895, "[Kultura] Bracia Lumiere pokazali publicznie filmy w Paryzu. (1895)" },
  { 1918, "[Polska] Trwalo powstanie wielkopolskie. (1918)" },
  { 1945, "[Historia] Kongres USA uznal przysiege wiernosci fladze za oficjalna. (1945)" },
  { 1973, "[Kultura] Opublikowano Archipelag Gulag Aleksandra Solzenicyna na Zachodzie. (1973)" },
};

// 29.12
const HistoryEvent HIST_364[] = {
  { 1170, "[Historia] Tomasz Becket zostal zamordowany w katedrze Canterbury. (1170)" },
  { 1845, "[Historia] Teksas zostal 28. stanem USA. (1845)" },
  { 1911, "[Historia] Mongolia oglosila niepodleglosc od Chin. (1911)" },
  { 1918, "[Polska] Trwalo powstanie wielkopolskie i organizacja frontu. (1918)" },
  { 1998, "[Historia] Przywodcy Czerwonych Khmerow przeprosili za zbrodnie rezimu. (1998)" },
};

// 30.12
const HistoryEvent HIST_365[] = {
  { 1922, "[Historia] Utworzono Zwiazek Socjalistycznych Republik Radzieckich. (1922)" },
  { 1924, "[Nauka] Edwin Hubble oglosil odkrycie gwiazd cefeid w Andromedzie. (1924)" },
  { 1947, "[Historia] Krol Michal I zostal zmuszony do abdykacji w Rumunii. (1947)" },
  { 2006, "[Historia] Stracono Saddama Husajna. (2006)" },
  { 0, "[Polska] Trwa okres miedzy Bozym Narodzeniem a Sylwestrem." },
};

// 31.12
const HistoryEvent HIST_366[] = {
  { 1600, "[Historia] Powstala Brytyjska Kompania Wschodnioindyjska. (1600)" },
  { 1879, "[Nauka] Thomas Edison publicznie zaprezentowal zarowke. (1879)" },
  { 1944, "[Polska] Trwalo powstanie wielkopolskie w kolejne rocznice wspominane pod koniec roku. (1918)" },
  { 1991, "[Historia] ZSRR formalnie przestal istniec. (1991)" },
  { 0, "[Kultura] Sylwester: ostatni dzien roku kalendarzowego." },
};

const HistoryDay HISTORIA_366[366] = {
  { HIST_001, 5 },
  { HIST_002, 5 },
  { HIST_003, 5 },
  { HIST_004, 5 },
  { HIST_005, 5 },
  { HIST_006, 5 },
  { HIST_007, 5 },
  { HIST_008, 5 },
  { HIST_009, 5 },
  { HIST_010, 5 },
  { HIST_011, 5 },
  { HIST_012, 5 },
  { HIST_013, 5 },
  { HIST_014, 5 },
  { HIST_015, 5 },
  { HIST_016, 5 },
  { HIST_017, 5 },
  { HIST_018, 5 },
  { HIST_019, 5 },
  { HIST_020, 5 },
  { HIST_021, 5 },
  { HIST_022, 5 },
  { HIST_023, 5 },
  { HIST_024, 5 },
  { HIST_025, 5 },
  { HIST_026, 5 },
  { HIST_027, 5 },
  { HIST_028, 5 },
  { HIST_029, 5 },
  { HIST_030, 5 },
  { HIST_031, 5 },
  { HIST_032, 5 },
  { HIST_033, 5 },
  { HIST_034, 5 },
  { HIST_035, 5 },
  { HIST_036, 5 },
  { HIST_037, 5 },
  { HIST_038, 5 },
  { HIST_039, 5 },
  { HIST_040, 5 },
  { HIST_041, 5 },
  { HIST_042, 5 },
  { HIST_043, 5 },
  { HIST_044, 5 },
  { HIST_045, 5 },
  { HIST_046, 5 },
  { HIST_047, 5 },
  { HIST_048, 5 },
  { HIST_049, 5 },
  { HIST_050, 5 },
  { HIST_051, 5 },
  { HIST_052, 5 },
  { HIST_053, 5 },
  { HIST_054, 5 },
  { HIST_055, 5 },
  { HIST_056, 5 },
  { HIST_057, 5 },
  { HIST_058, 5 },
  { HIST_059, 5 },
  { HIST_060, 5 },
  { HIST_061, 5 },
  { HIST_062, 5 },
  { HIST_063, 5 },
  { HIST_064, 5 },
  { HIST_065, 5 },
  { HIST_066, 5 },
  { HIST_067, 5 },
  { HIST_068, 5 },
  { HIST_069, 5 },
  { HIST_070, 5 },
  { HIST_071, 5 },
  { HIST_072, 5 },
  { HIST_073, 5 },
  { HIST_074, 5 },
  { HIST_075, 5 },
  { HIST_076, 5 },
  { HIST_077, 5 },
  { HIST_078, 5 },
  { HIST_079, 5 },
  { HIST_080, 5 },
  { HIST_081, 5 },
  { HIST_082, 5 },
  { HIST_083, 5 },
  { HIST_084, 5 },
  { HIST_085, 5 },
  { HIST_086, 5 },
  { HIST_087, 5 },
  { HIST_088, 5 },
  { HIST_089, 5 },
  { HIST_090, 5 },
  { HIST_091, 5 },
  { HIST_092, 5 },
  { HIST_093, 5 },
  { HIST_094, 5 },
  { HIST_095, 5 },
  { HIST_096, 5 },
  { HIST_097, 5 },
  { HIST_098, 5 },
  { HIST_099, 5 },
  { HIST_100, 5 },
  { HIST_101, 5 },
  { HIST_102, 5 },
  { HIST_103, 5 },
  { HIST_104, 5 },
  { HIST_105, 5 },
  { HIST_106, 5 },
  { HIST_107, 5 },
  { HIST_108, 5 },
  { HIST_109, 5 },
  { HIST_110, 5 },
  { HIST_111, 5 },
  { HIST_112, 5 },
  { HIST_113, 5 },
  { HIST_114, 5 },
  { HIST_115, 5 },
  { HIST_116, 5 },
  { HIST_117, 5 },
  { HIST_118, 5 },
  { HIST_119, 5 },
  { HIST_120, 5 },
  { HIST_121, 5 },
  { HIST_122, 5 },
  { HIST_123, 5 },
  { HIST_124, 5 },
  { HIST_125, 5 },
  { HIST_126, 5 },
  { HIST_127, 5 },
  { HIST_128, 5 },
  { HIST_129, 5 },
  { HIST_130, 5 },
  { HIST_131, 5 },
  { HIST_132, 5 },
  { HIST_133, 5 },
  { HIST_134, 5 },
  { HIST_135, 5 },
  { HIST_136, 5 },
  { HIST_137, 5 },
  { HIST_138, 5 },
  { HIST_139, 5 },
  { HIST_140, 5 },
  { HIST_141, 5 },
  { HIST_142, 5 },
  { HIST_143, 5 },
  { HIST_144, 5 },
  { HIST_145, 5 },
  { HIST_146, 5 },
  { HIST_147, 5 },
  { HIST_148, 5 },
  { HIST_149, 5 },
  { HIST_150, 5 },
  { HIST_151, 5 },
  { HIST_152, 5 },
  { HIST_153, 5 },
  { HIST_154, 5 },
  { HIST_155, 5 },
  { HIST_156, 5 },
  { HIST_157, 5 },
  { HIST_158, 5 },
  { HIST_159, 5 },
  { HIST_160, 5 },
  { HIST_161, 5 },
  { HIST_162, 5 },
  { HIST_163, 5 },
  { HIST_164, 5 },
  { HIST_165, 5 },
  { HIST_166, 5 },
  { HIST_167, 5 },
  { HIST_168, 5 },
  { HIST_169, 5 },
  { HIST_170, 5 },
  { HIST_171, 5 },
  { HIST_172, 5 },
  { HIST_173, 5 },
  { HIST_174, 5 },
  { HIST_175, 5 },
  { HIST_176, 5 },
  { HIST_177, 5 },
  { HIST_178, 5 },
  { HIST_179, 5 },
  { HIST_180, 5 },
  { HIST_181, 5 },
  { HIST_182, 5 },
  { HIST_183, 5 },
  { HIST_184, 5 },
  { HIST_185, 5 },
  { HIST_186, 5 },
  { HIST_187, 5 },
  { HIST_188, 5 },
  { HIST_189, 5 },
  { HIST_190, 5 },
  { HIST_191, 5 },
  { HIST_192, 5 },
  { HIST_193, 5 },
  { HIST_194, 5 },
  { HIST_195, 5 },
  { HIST_196, 5 },
  { HIST_197, 5 },
  { HIST_198, 5 },
  { HIST_199, 5 },
  { HIST_200, 5 },
  { HIST_201, 5 },
  { HIST_202, 5 },
  { HIST_203, 5 },
  { HIST_204, 5 },
  { HIST_205, 5 },
  { HIST_206, 5 },
  { HIST_207, 5 },
  { HIST_208, 5 },
  { HIST_209, 5 },
  { HIST_210, 5 },
  { HIST_211, 5 },
  { HIST_212, 5 },
  { HIST_213, 5 },
  { HIST_214, 5 },
  { HIST_215, 5 },
  { HIST_216, 5 },
  { HIST_217, 5 },
  { HIST_218, 5 },
  { HIST_219, 5 },
  { HIST_220, 5 },
  { HIST_221, 5 },
  { HIST_222, 5 },
  { HIST_223, 5 },
  { HIST_224, 5 },
  { HIST_225, 5 },
  { HIST_226, 5 },
  { HIST_227, 5 },
  { HIST_228, 5 },
  { HIST_229, 5 },
  { HIST_230, 5 },
  { HIST_231, 5 },
  { HIST_232, 5 },
  { HIST_233, 5 },
  { HIST_234, 5 },
  { HIST_235, 5 },
  { HIST_236, 5 },
  { HIST_237, 5 },
  { HIST_238, 5 },
  { HIST_239, 5 },
  { HIST_240, 5 },
  { HIST_241, 5 },
  { HIST_242, 5 },
  { HIST_243, 5 },
  { HIST_244, 5 },
  { HIST_245, 5 },
  { HIST_246, 5 },
  { HIST_247, 5 },
  { HIST_248, 5 },
  { HIST_249, 5 },
  { HIST_250, 5 },
  { HIST_251, 5 },
  { HIST_252, 5 },
  { HIST_253, 5 },
  { HIST_254, 5 },
  { HIST_255, 5 },
  { HIST_256, 5 },
  { HIST_257, 5 },
  { HIST_258, 5 },
  { HIST_259, 5 },
  { HIST_260, 5 },
  { HIST_261, 5 },
  { HIST_262, 5 },
  { HIST_263, 5 },
  { HIST_264, 5 },
  { HIST_265, 5 },
  { HIST_266, 5 },
  { HIST_267, 5 },
  { HIST_268, 5 },
  { HIST_269, 5 },
  { HIST_270, 5 },
  { HIST_271, 5 },
  { HIST_272, 5 },
  { HIST_273, 5 },
  { HIST_274, 5 },
  { HIST_275, 5 },
  { HIST_276, 5 },
  { HIST_277, 5 },
  { HIST_278, 5 },
  { HIST_279, 5 },
  { HIST_280, 5 },
  { HIST_281, 5 },
  { HIST_282, 5 },
  { HIST_283, 5 },
  { HIST_284, 5 },
  { HIST_285, 5 },
  { HIST_286, 5 },
  { HIST_287, 5 },
  { HIST_288, 5 },
  { HIST_289, 5 },
  { HIST_290, 5 },
  { HIST_291, 5 },
  { HIST_292, 5 },
  { HIST_293, 5 },
  { HIST_294, 5 },
  { HIST_295, 5 },
  { HIST_296, 5 },
  { HIST_297, 5 },
  { HIST_298, 5 },
  { HIST_299, 5 },
  { HIST_300, 5 },
  { HIST_301, 5 },
  { HIST_302, 5 },
  { HIST_303, 5 },
  { HIST_304, 5 },
  { HIST_305, 5 },
  { HIST_306, 5 },
  { HIST_307, 5 },
  { HIST_308, 5 },
  { HIST_309, 5 },
  { HIST_310, 5 },
  { HIST_311, 5 },
  { HIST_312, 5 },
  { HIST_313, 5 },
  { HIST_314, 5 },
  { HIST_315, 5 },
  { HIST_316, 5 },
  { HIST_317, 5 },
  { HIST_318, 5 },
  { HIST_319, 5 },
  { HIST_320, 5 },
  { HIST_321, 5 },
  { HIST_322, 5 },
  { HIST_323, 5 },
  { HIST_324, 5 },
  { HIST_325, 5 },
  { HIST_326, 5 },
  { HIST_327, 5 },
  { HIST_328, 5 },
  { HIST_329, 5 },
  { HIST_330, 5 },
  { HIST_331, 5 },
  { HIST_332, 5 },
  { HIST_333, 5 },
  { HIST_334, 5 },
  { HIST_335, 5 },
  { HIST_336, 5 },
  { HIST_337, 5 },
  { HIST_338, 5 },
  { HIST_339, 5 },
  { HIST_340, 5 },
  { HIST_341, 5 },
  { HIST_342, 5 },
  { HIST_343, 5 },
  { HIST_344, 5 },
  { HIST_345, 5 },
  { HIST_346, 5 },
  { HIST_347, 5 },
  { HIST_348, 5 },
  { HIST_349, 5 },
  { HIST_350, 5 },
  { HIST_351, 5 },
  { HIST_352, 5 },
  { HIST_353, 5 },
  { HIST_354, 5 },
  { HIST_355, 5 },
  { HIST_356, 5 },
  { HIST_357, 5 },
  { HIST_358, 5 },
  { HIST_359, 5 },
  { HIST_360, 5 },
  { HIST_361, 5 },
  { HIST_362, 5 },
  { HIST_363, 5 },
  { HIST_364, 5 },
  { HIST_365, 5 },
  { HIST_366, 5 },
};

#endif
