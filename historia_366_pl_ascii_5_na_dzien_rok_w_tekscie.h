#ifndef HISTORY_366_H
#define HISTORY_366_H

// Baza 366 dni do e-paper / Arduino.
// Tekst UTF-8: z polskimi znakami, krótkie opisy do małych ekranów.
// Każdy dzień ma 5 wpisów. Wszystkie wpisy mają rok oraz rok w tekście.
// Wydanie finalne po audycie: poprawiono daty dzienne, wpisy niepewne, duplikaty i literówki.
// W każdym dniu wydarzenia są posortowane rosnąco po roku: od najstarszych do najnowszych.
// UWAGA: zakres 01.01-15.12 zostal podmieniony wedlug audytu rozmowy; dalsza czesc roku pozostaje z oryginalnego pliku i wymaga kontynuacji audytu.

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
  { 1801, "[Nauka] Giuseppe Piazzi odkrył planetoidę Ceres. (1801)" },
  { 1863, "[Historia] Urodził się Pierre de Coubertin, odnowiciel igrzysk olimpijskich. (1863)" },
  { 1942, "[Historia] W Waszyngtonie podpisano Deklarację Narodów Zjednoczonych. (1942)" },
  { 1999, "[Polska] W Polsce weszła w życie reforma administracyjna z 16 województwami. (1999)" },
  { 2024, "[Kultura] Steamboat Willie z Myszką Miki trafił do domeny publicznej. (2024)" },
};

// 02.01
const HistoryEvent HIST_002[] = {
  { 1492, "[Świat] Zdobycie Grenady zakończyło rekonkwistę w Hiszpanii. (1492)" },
  { 1905, "[Historia] Rosjanie poddali Port Arthur Japonii. (1905)" },
  { 1939, "[Polska] Zmarł Roman Dmowski, współtwórca niepodległej Polski. (1939)" },
  { 1959, "[Nauka] Wystrzelono Lunę 1, pierwszą sondę, która minęła Księżyc. (1959)" },
  { 2024, "[Historia] Doszło do kolizji samolotów na lotnisku Haneda w Tokio. (2024)" },
};

// 03.01
const HistoryEvent HIST_003[] = {
  { 1521, "[Świat] Papież Leon X ekskomunikował Marcina Lutra. (1521)" },
  { 1661, "[Polska] Wydano pierwszy numer Merkuriusza Polskiego. (1661)" },
  { 1888, "[Nauka] Marvin Stone otrzymał patent na papierową słomkę. (1888)" },
  { 1892, "[Kultura] Urodził się J.R.R. Tolkien, autor Władcy Pierścieni. (1892)" },
  { 1959, "[Historia] Alaska została 49. stanem USA. (1959)" },
};

// 04.01
const HistoryEvent HIST_004[] = {
  { 1643, "[Nauka] Urodził się Isaac Newton według kalendarza gregoriańskiego. (1643)" },
  { 1785, "[Kultura] Urodził się Jacob Grimm, badacz baśni i języka. (1785)" },
  { 1948, "[Świat] Birma ogłosiła niepodległość od Wielkiej Brytanii. (1948)" },
  { 2010, "[Historia] Otwarto Burj Khalifa, najwyższy budynek świata. (2010)" },
  { 2019, "[Polska] Doszło do tragicznego pożaru escape roomu w Koszalinie. (2019)" },
};

// 05.01
const HistoryEvent HIST_005[] = {
  { 1895, "[Świat] Alfred Dreyfus został publicznie zdegradowany w Paryżu. (1895)" },
  { 1896, "[Nauka] Prasa ogłosiła odkrycie promieni X Röntgena. (1896)" },
  { 1932, "[Kultura] Urodził się Umberto Eco, pisarz i semiotyk. (1932)" },
  { 2005, "[Nauka] Odkryto planetę karłowatą Eris. (2005)" },
  { 2024, "[Historia] Lot Alaska Airlines 1282 awaryjnie wrócił po utracie panelu. (2024)" },
};

// 06.01
const HistoryEvent HIST_006[] = {
  { 1838, "[Nauka] Samuel Morse publicznie zaprezentował telegraf. (1838)" },
  { 1884, "[Nauka] Zmarł Gregor Mendel, twórca podstaw genetyki. (1884)" },
  { 1919, "[Historia] Zmarł Theodore Roosevelt, 26. prezydent USA. (1919)" },
  { 2011, "[Polska] Trzech Króli znów było w Polsce dniem wolnym od pracy. (2011)" },
  { 2021, "[Historia] Zwolennicy Donalda Trumpa wtargnęli do Kapitolu USA. (2021)" },
};

// 07.01
const HistoryEvent HIST_007[] = {
  { 1610, "[Nauka] Galileusz po raz pierwszy zaobserwował księżyce Jowisza. (1610)" },
  { 1785, "[Świat] Blanchard i Jeffries przelecieli balonem nad kanałem La Manche. (1785)" },
  { 1927, "[Nauka] Odbyła się pierwsza oficjalna rozmowa telefoniczna Nowy Jork-Londyn. (1927)" },
  { 1943, "[Nauka] Zmarł Nikola Tesla, pionier elektrotechniki. (1943)" },
  { 2015, "[Historia] Doszło do ataku na redakcję Charlie Hebdo w Paryżu. (2015)" },
};

// 08.01
const HistoryEvent HIST_008[] = {
  { 1642, "[Nauka] Zmarł Galileusz, pionier astronomii teleskopowej. (1642)" },
  { 1894, "[Polska] Urodził się Maksymilian Maria Kolbe. (1894)" },
  { 1918, "[Świat] Woodrow Wilson ogłosił program czternastu punktów. (1918)" },
  { 1935, "[Kultura] Urodził się Elvis Presley. (1935)" },
  { 1942, "[Nauka] Urodził się Stephen Hawking, fizyk teoretyczny. (1942)" },
};

// 09.01
const HistoryEvent HIST_009[] = {
  { 1797, "[Polska] Podpisano umowę tworzącą Legiony Polskie we Włoszech. (1797)" },
  { 1861, "[Historia] Missisipi wystąpiło z Unii przed wojną secesyjną. (1861)" },
  { 1908, "[Kultura] Urodziła się Simone de Beauvoir, pisarka i filozofka. (1908)" },
  { 1951, "[Świat] Oficjalnie otwarto siedzibę ONZ w Nowym Jorku. (1951)" },
  { 2007, "[Nauka] Steve Jobs zaprezentował pierwszego iPhone'a. (2007)" },
};

// 10.01
const HistoryEvent HIST_010[] = {
  { 1776, "[Historia] Ukazał się pamflet Common Sense Thomasa Paine'a. (1776)" },
  { 1863, "[Świat] Otwarto pierwszą linię metra w Londynie. (1863)" },
  { 1920, "[Historia] Wszedł w życie traktat wersalski po I wojnie światowej. (1920)" },
  { 1927, "[Kultura] Odbyła się premiera filmu Metropolis Fritza Langa. (1927)" },
  { 1946, "[Nauka] W projekcie Diana odebrano echo radarowe od Księżyca. (1946)" },
};

// 11.01
const HistoryEvent HIST_011[] = {
  { 1787, "[Nauka] William Herschel odkrył Tytanię i Oberona, księżyce Urana. (1787)" },
  { 1842, "[Nauka] Urodził się William James, psycholog i filozof. (1842)" },
  { 1922, "[Nauka] Leonard Thompson otrzymał pierwszy zastrzyk insuliny. (1922)" },
  { 1935, "[Historia] Amelia Earhart wystartowała samotnie z Hawajów do Kalifornii. (1935)" },
  { 2020, "[Historia] Chiny zgłosiły pierwszy znany zgon związany z COVID-19. (2020)" },
};

// 12.01
const HistoryEvent HIST_012[] = {
  { 1876, "[Kultura] Urodził się Jack London, pisarz. (1876)" },
  { 1966, "[Kultura] ABC wyemitowała pierwszy odcinek serialu Batman. (1966)" },
  { 1993, "[Polska] Zmarł Józef Czapski, malarz i pisarz. (1993)" },
  { 2005, "[Nauka] NASA wystrzeliła sondę Deep Impact do komety Tempel 1. (2005)" },
  { 2010, "[Świat] Haiti nawiedziło katastrofalne trzęsienie ziemi. (2010)" },
};

// 13.01
const HistoryEvent HIST_013[] = {
  { 1610, "[Nauka] Galileusz odkrył Kallisto, księżyc Jowisza. (1610)" },
  { 1888, "[Nauka] W Waszyngtonie założono National Geographic Society. (1888)" },
  { 1898, "[Świat] Émile Zola opublikował list J'accuse w obronie Dreyfusa. (1898)" },
  { 1941, "[Kultura] Zmarł James Joyce, autor Ulissesa. (1941)" },
  { 1964, "[Polska] Karol Wojtyła został mianowany arcybiskupem Krakowa. (1964)" },
};

// 14.01
const HistoryEvent HIST_014[] = {
  { 1875, "[Kultura] Urodził się Albert Schweitzer, lekarz, filozof i muzyk. (1875)" },
  { 1954, "[Kultura] Marilyn Monroe poślubiła Joe DiMaggio. (1954)" },
  { 1993, "[Polska] Zatonął prom Jan Heweliusz na Morzu Bałtyckim. (1993)" },
  { 2005, "[Nauka] Sonda Huygens wylądowała na Tytanie. (2005)" },
  { 2024, "[Historia] Małgorzata II abdykowała, a Frederik X został królem Danii. (2024)" },
};

// 15.01
const HistoryEvent HIST_015[] = {
  { 1559, "[Świat] Koronowano Elżbietę I na królową Anglii. (1559)" },
  { 1759, "[Kultura] Otwarto British Museum w Londynie. (1759)" },
  { 1929, "[Historia] Urodził się Martin Luther King Jr. (1929)" },
  { 1945, "[Polska] Armia Czerwona wkroczyła do Kielc. (1945)" },
  { 2001, "[Nauka] Uruchomiono Wikipedię. (2001)" },
};

// 16.01
const HistoryEvent HIST_016[] = {
  { 1547, "[Świat] Iwan IV Groźny koronował się na cara Rosji. (1547)" },
  { 1919, "[Świat] Ratyfikowano 18. poprawkę do Konstytucji USA. (1919)" },
  { 1933, "[Kultura] Urodziła się Susan Sontag, pisarka i eseistka. (1933)" },
  { 1945, "[Polska] Armia Czerwona zajęła Radom. (1945)" },
  { 2003, "[Nauka] Prom Columbia wystartował do misji STS-107. (2003)" },
};

// 17.01
const HistoryEvent HIST_017[] = {
  { 1706, "[Kultura] Urodził się Benjamin Franklin. (1706)" },
  { 1773, "[Nauka] James Cook przekroczył koło podbiegunowe południowe. (1773)" },
  { 1899, "[Świat] Urodził się Al Capone, gangster z Chicago. (1899)" },
  { 1945, "[Polska] Armia Czerwona weszła do ruin lewobrzeżnej Warszawy. (1945)" },
  { 1991, "[Historia] Rozpoczęła się operacja Pustynna Burza. (1991)" },
};

// 18.01
const HistoryEvent HIST_018[] = {
  { 1871, "[Świat] Proklamowano Cesarstwo Niemieckie w Wersalu. (1871)" },
  { 1882, "[Kultura] Urodził się A.A. Milne, autor Kubusia Puchatka. (1882)" },
  { 1919, "[Historia] Rozpoczęła się konferencja pokojowa w Paryżu. (1919)" },
  { 1945, "[Polska] Armia Czerwona zajęła centralne części Krakowa. (1945)" },
  { 2005, "[Nauka] Publicznie zaprezentowano Airbusa A380. (2005)" },
};

// 19.01
const HistoryEvent HIST_019[] = {
  { 1809, "[Kultura] Urodził się Edgar Allan Poe. (1809)" },
  { 1839, "[Kultura] Urodził się Paul Cézanne, malarz. (1839)" },
  { 1947, "[Polska] Odbyły się wybory do Sejmu Ustawodawczego. (1947)" },
  { 1983, "[Nauka] Apple zaprezentował komputer Lisa. (1983)" },
  { 2006, "[Nauka] Sonda New Horizons wystartowała ku Plutonowi. (2006)" },
};

// 20.01
const HistoryEvent HIST_020[] = {
  { 1320, "[Polska] Władysław Łokietek został koronowany na króla Polski. (1320)" },
  { 1920, "[Kultura] Urodził się Federico Fellini, reżyser filmowy. (1920)" },
  { 1930, "[Nauka] Urodził się Buzz Aldrin, astronauta Apollo 11. (1930)" },
  { 1942, "[Historia] Odbyła się konferencja w Wannsee. (1942)" },
  { 1961, "[Historia] John F. Kennedy został zaprzysiężony na prezydenta USA. (1961)" },
};

// 21.01
const HistoryEvent HIST_021[] = {
  { 1793, "[Historia] Stracono króla Francji Ludwika XVI. (1793)" },
  { 1905, "[Kultura] Urodził się Christian Dior, projektant mody. (1905)" },
  { 1919, "[Historia] Zasadzka pod Soloheadbeg rozpoczęła wojnę o niepodległość Irlandii. (1919)" },
  { 1924, "[Świat] Zmarł Włodzimierz Lenin. (1924)" },
  { 1976, "[Nauka] Rozpoczęły się regularne loty pasażerskie Concorde. (1976)" },
};

// 22.01
const HistoryEvent HIST_022[] = {
  { 1788, "[Kultura] Urodził się George Gordon Byron, poeta romantyczny. (1788)" },
  { 1863, "[Polska] Wybuchło powstanie styczniowe przeciw Rosji. (1863)" },
  { 1905, "[Historia] Krwawa Niedziela w Petersburgu rozpoczęła rewolucję 1905 roku. (1905)" },
  { 1973, "[Świat] Sąd Najwyższy USA ogłosił wyrok Roe v. Wade. (1973)" },
  { 1984, "[Kultura] Apple wyemitował reklamę 1984 komputera Macintosh. (1984)" },
};

// 23.01
const HistoryEvent HIST_023[] = {
  { 1579, "[Historia] Podpisano Unię Utrechcką, ważny akt historii Niderlandów. (1579)" },
  { 1793, "[Polska] Rosja i Prusy podpisały traktat drugiego rozbioru Polski. (1793)" },
  { 1832, "[Kultura] Urodził się Édouard Manet, malarz francuski. (1832)" },
  { 1849, "[Nauka] Elizabeth Blackwell została pierwszą lekarką z dyplomem w USA. (1849)" },
  { 1960, "[Nauka] Batyskaf Trieste dotarł do dna Rowu Mariańskiego. (1960)" },
};

// 24.01
const HistoryEvent HIST_024[] = {
  { 1588, "[Polska] Bitwa pod Byczyną zakończyła wojnę o tron polski. (1588)" },
  { 1776, "[Kultura] Urodził się E.T.A. Hoffmann, pisarz i kompozytor. (1776)" },
  { 1848, "[Świat] Odkrycie złota w Sutter's Mill rozpoczęło gorączkę złota. (1848)" },
  { 1966, "[Historia] Samolot Air India 101 rozbił się na Mont Blanc. (1966)" },
  { 1984, "[Nauka] Apple zaprezentował komputer Macintosh. (1984)" },
};

// 25.01
const HistoryEvent HIST_025[] = {
  { 1831, "[Polska] Sejm ogłosił detronizację cara Mikołaja I. (1831)" },
  { 1882, "[Kultura] Urodziła się Virginia Woolf, pisarka. (1882)" },
  { 1909, "[Kultura] Odbyła się premiera opery Elektra Richarda Straussa. (1909)" },
  { 1924, "[Historia] Rozpoczęły się pierwsze zimowe igrzyska w Chamonix. (1924)" },
  { 1949, "[Kultura] Odbyła się pierwsza ceremonia rozdania nagród Emmy. (1949)" },
};

// 26.01
const HistoryEvent HIST_026[] = {
  { 1788, "[Świat] Brytyjczycy założyli osadę karną w Sydney Cove. (1788)" },
  { 1880, "[Historia] Urodził się Douglas MacArthur, dowódca wojskowy. (1880)" },
  { 1919, "[Polska] Odbyły się wybory do Sejmu Ustawodawczego II RP. (1919)" },
  { 1926, "[Nauka] John Logie Baird publicznie zademonstrował telewizję. (1926)" },
  { 1950, "[Historia] W Indiach weszła w życie konstytucja; kraj stał się republiką. (1950)" },
};

// 27.01
const HistoryEvent HIST_027[] = {
  { 1756, "[Kultura] Urodził się Wolfgang Amadeusz Mozart. (1756)" },
  { 1944, "[Historia] Zakończyła się blokada Leningradu. (1944)" },
  { 1945, "[Historia] Armia Czerwona wyzwoliła niemiecki obóz Auschwitz. (1945)" },
  { 1967, "[Nauka] Otwarto do podpisu traktat o przestrzeni kosmicznej. (1967)" },
  { 1973, "[Historia] Podpisano paryskie porozumienia pokojowe w sprawie Wietnamu. (1973)" },
};

// 28.01
const HistoryEvent HIST_028[] = {
  { 814, "[Świat] Zmarł Karol Wielki, władca Franków i cesarz. (814)" },
  { 1573, "[Polska] Podpisano konfederację warszawską o tolerancji religijnej. (1573)" },
  { 1813, "[Kultura] Ukazała się Duma i uprzedzenie Jane Austen. (1813)" },
  { 1918, "[Polska] Założono Polską Partię Socjalistyczną zaboru pruskiego. (1918)" },
  { 1986, "[Nauka] Doszło do katastrofy promu kosmicznego Challenger. (1986)" },
};

// 29.01
const HistoryEvent HIST_029[] = {
  { 1845, "[Kultura] Kruk Edgara Allana Poe ukazał się w Nowym Jorku. (1845)" },
  { 1860, "[Kultura] Urodził się Anton Czechow, pisarz i dramaturg. (1860)" },
  { 1861, "[Świat] Kansas został 34. stanem USA. (1861)" },
  { 1886, "[Nauka] Karl Benz zgłosił patent na pojazd z silnikiem spalinowym. (1886)" },
  { 1964, "[Kultura] Odbyła się premiera filmu Dr Strangelove Kubricka. (1964)" },
};

// 30.01
const HistoryEvent HIST_030[] = {
  { 1667, "[Polska] Podpisano rozejm w Andruszowie z Carstwem Rosyjskim. (1667)" },
  { 1882, "[Historia] Urodził się Franklin D. Roosevelt, prezydent USA. (1882)" },
  { 1933, "[Świat] Adolf Hitler został kanclerzem Niemiec. (1933)" },
  { 1948, "[Historia] Zamordowano Mahatmę Gandhiego w Nowym Delhi. (1948)" },
  { 1964, "[Nauka] NASA wystrzeliła sondę Ranger 6 ku Księżycowi. (1964)" },
};

// 31.01
const HistoryEvent HIST_031[] = {
  { 1606, "[Świat] Stracono Guya Fawkesa za udział w spisku prochowym. (1606)" },
  { 1797, "[Kultura] Urodził się Franz Schubert, kompozytor. (1797)" },
  { 1867, "[Polska] Urodził się Mariusz Zaruski, żeglarz i generał. (1867)" },
  { 1958, "[Nauka] Wystrzelono Explorer 1, pierwszego satelitę USA. (1958)" },
  { 1961, "[Nauka] Szympans Ham odbył lot suborbitalny w kapsule Mercury. (1961)" },
};

// 01.02
const HistoryEvent HIST_032[] = {
  { 1411, "[Polska] Podpisano pierwszy pokój toruński z Krzyżakami. (1411)" },
  { 1884, "[Kultura] Ukazał się pierwszy zeszyt Oxford English Dictionary. (1884)" },
  { 1896, "[Kultura] Odbyła się premiera opery Cyganeria Pucciniego. (1896)" },
  { 1946, "[Historia] Trygve Lie został pierwszym sekretarzem generalnym ONZ. (1946)" },
  { 2003, "[Nauka] Prom Columbia rozpadł się podczas powrotu na Ziemię. (2003)" },
};

// 02.02
const HistoryEvent HIST_033[] = {
  { 962, "[Historia] Otton I został koronowany na cesarza w Rzymie. (962)" },
  { 1848, "[Historia] USA i Meksyk podpisały traktat z Guadalupe Hidalgo. (1848)" },
  { 1882, "[Kultura] Urodził się James Joyce, autor Ulissesa. (1882)" },
  { 1943, "[Historia] Zakończyła się bitwa stalingradzka. (1943)" },
  { 1971, "[Nauka] Podpisano konwencję ramsarską o ochronie mokradeł. (1971)" },
};

// 03.02
const HistoryEvent HIST_034[] = {
  { 1468, "[Nauka] Zmarł Johannes Gutenberg, pionier druku ruchomą czcionką. (1468)" },
  { 1735, "[Polska] Urodził się Ignacy Krasicki, poeta i biskup. (1735)" },
  { 1913, "[Historia] Ratyfikowano 16. poprawkę do Konstytucji USA. (1913)" },
  { 1959, "[Kultura] Zginęli Buddy Holly, Ritchie Valens i The Big Bopper. (1959)" },
  { 1966, "[Nauka] Sonda Luna 9 miękko wylądowała na Księżycu. (1966)" },
};

// 04.02
const HistoryEvent HIST_035[] = {
  { 1505, "[Polska] Urodził się Mikołaj Rej, ojciec polskiej literatury. (1505)" },
  { 1945, "[Historia] Rozpoczęła się konferencja jałtańska. (1945)" },
  { 1966, "[Nauka] Luna 9 przesłała pierwsze zdjęcia z powierzchni Księżyca. (1966)" },
  { 2000, "[Historia] W Paryżu podpisano Kartę Paryską przeciw rakowi. (2000)" },
  { 2004, "[Nauka] Mark Zuckerberg uruchomił serwis TheFacebook. (2004)" },
};

// 05.02
const HistoryEvent HIST_036[] = {
  { 1818, "[Świat] Jean-Baptiste Bernadotte został królem Szwecji i Norwegii. (1818)" },
  { 1909, "[Polska] Urodziła się Grażyna Bacewicz, kompozytorka i skrzypaczka. (1909)" },
  { 1919, "[Kultura] Założono wytwórnię filmową United Artists. (1919)" },
  { 1971, "[Nauka] Apollo 14 wylądował na Księżycu. (1971)" },
  { 1988, "[Historia] Manuel Noriega został oskarżony w USA o przemyt narkotyków. (1988)" },
};

// 06.02
const HistoryEvent HIST_037[] = {
  { 1895, "[Kultura] Urodził się Babe Ruth, legenda baseballu. (1895)" },
  { 1911, "[Świat] Urodził się Ronald Reagan, późniejszy prezydent USA. (1911)" },
  { 1935, "[Kultura] Parker Brothers zaczęło wydawać grę Monopoly. (1935)" },
  { 1952, "[Historia] Elżbieta II została królową Wielkiej Brytanii. (1952)" },
  { 1971, "[Nauka] Alan Shepard uderzył piłki golfowe na Księżycu. (1971)" },
};

// 07.02
const HistoryEvent HIST_038[] = {
  { 1812, "[Kultura] Urodził się Charles Dickens, pisarz angielski. (1812)" },
  { 1962, "[Historia] Weszło w życie embargo USA wobec Kuby. (1962)" },
  { 1964, "[Kultura] The Beatles przylecieli po raz pierwszy do USA. (1964)" },
  { 1992, "[Historia] Podpisano traktat z Maastricht, podstawę Unii Europejskiej. (1992)" },
  { 1999, "[Nauka] Wystartowała sonda Stardust do komety Wild 2. (1999)" },
};

// 08.02
const HistoryEvent HIST_039[] = {
  { 1587, "[Historia] Stracono Marię Stuart, królową Szkotów. (1587)" },
  { 1828, "[Kultura] Urodził się Juliusz Verne, pisarz fantastyki naukowej. (1828)" },
  { 1834, "[Nauka] Urodził się Dmitrij Mendelejew, twórca układu okresowego. (1834)" },
  { 1904, "[Świat] Japonia zaatakowała rosyjską flotę w Port Arthur. (1904)" },
  { 1950, "[Historia] W NRD utworzono Ministerstwo Bezpieczeństwa Państwowego, Stasi. (1950)" },
};

// 09.02
const HistoryEvent HIST_040[] = {
  { 1865, "[Nauka] Urodził się Erich von Drygalski, badacz Antarktydy. (1865)" },
  { 1943, "[Polska] Niemcy dokonali pacyfikacji wsi Parośla na Wołyniu. (1943)" },
  { 1950, "[Historia] Joseph McCarthy wygłosił przemówienie w Wheeling. (1950)" },
  { 1964, "[Kultura] The Beatles wystąpili w programie Ed Sullivan Show. (1964)" },
  { 1996, "[Nauka] Odkryto pierwiastek 112, później nazwany kopernikiem. (1996)" },
};

// 10.02
const HistoryEvent HIST_041[] = {
  { 1763, "[Historia] Pokój paryski zakończył wojnę siedmioletnią. (1763)" },
  { 1890, "[Kultura] Urodził się Borys Pasternak, pisarz. (1890)" },
  { 1920, "[Polska] Odbyły się zaślubiny Polski z Morzem w Pucku. (1920)" },
  { 1947, "[Świat] Podpisano traktaty pokojowe po II wojnie światowej. (1947)" },
  { 1996, "[Nauka] Deep Blue po raz pierwszy pokonał Kasparowa w partii. (1996)" },
};

// 11.02
const HistoryEvent HIST_042[] = {
  { 1847, "[Nauka] Urodził się Thomas Edison, wynalazca. (1847)" },
  { 1929, "[Historia] Podpisano traktaty laterańskie, tworząc Państwo Watykańskie. (1929)" },
  { 1945, "[Historia] Zakończyła się konferencja jałtańska. (1945)" },
  { 1990, "[Świat] Nelson Mandela wyszedł z więzienia po 27 latach. (1990)" },
  { 2016, "[Nauka] LIGO ogłosiło pierwszą detekcję fal grawitacyjnych. (2016)" },
};

// 12.02
const HistoryEvent HIST_043[] = {
  { 1809, "[Nauka] Urodził się Karol Darwin, twórca teorii ewolucji. (1809)" },
  { 1809, "[Historia] Urodził się Abraham Lincoln, prezydent USA. (1809)" },
  { 1881, "[Kultura] Urodziła się Anna Pawłowa, słynna balerina. (1881)" },
  { 1912, "[Świat] Puyi, ostatni cesarz Chin, oficjalnie abdykował. (1912)" },
  { 2001, "[Nauka] Sonda NEAR Shoemaker wylądowała na asteroidzie Eros. (2001)" },
};

// 13.02
const HistoryEvent HIST_044[] = {
  { 1633, "[Nauka] Galileusz przybył do Rzymu przed procesem inkwizycji. (1633)" },
  { 1883, "[Kultura] Zmarł Richard Wagner, kompozytor. (1883)" },
  { 1945, "[Historia] Zakończyło się oblężenie Budapesztu. (1945)" },
  { 1945, "[Historia] Rozpoczęło się alianckie bombardowanie Drezna. (1945)" },
  { 1960, "[Świat] Francja przeprowadziła pierwszą próbę jądrową. (1960)" },
};

// 14.02
const HistoryEvent HIST_045[] = {
  { 1779, "[Historia] Zginął James Cook, brytyjski żeglarz i odkrywca. (1779)" },
  { 1876, "[Nauka] Alexander Graham Bell złożył patent na telefon. (1876)" },
  { 1895, "[Kultura] Odbyła się premiera sztuki The Importance of Being Earnest. (1895)" },
  { 1942, "[Polska] Związek Walki Zbrojnej przemianowano na Armię Krajową. (1942)" },
  { 2005, "[Nauka] Zarejestrowano domenę YouTube.com. (2005)" },
};

// 15.02
const HistoryEvent HIST_046[] = {
  { 1564, "[Nauka] Urodził się Galileusz, włoski astronom i fizyk. (1564)" },
  { 1820, "[Historia] Urodziła się Susan B. Anthony, działaczka praw kobiet. (1820)" },
  { 1898, "[Świat] Eksplozja USS Maine poprzedziła wojnę USA z Hiszpanią. (1898)" },
  { 1946, "[Nauka] Publicznie zaprezentowano komputer ENIAC. (1946)" },
  { 1971, "[Historia] Wielka Brytania wprowadziła dziesiętny system pieniężny. (1971)" },
};

// 16.02
const HistoryEvent HIST_047[] = {
  { 1918, "[Świat] Litewska Rada Państwowa ogłosiła niepodległość Litwy. (1918)" },
  { 1923, "[Historia] Howard Carter otworzył komorę grobową Tutanchamona. (1923)" },
  { 1948, "[Nauka] Gerard Kuiper odkrył Mirandę, księżyc Urana. (1948)" },
  { 1959, "[Historia] Fidel Castro został premierem Kuby. (1959)" },
  { 2005, "[Nauka] Wszedł w życie protokół z Kioto. (2005)" },
};

// 17.02
const HistoryEvent HIST_048[] = {
  { 1600, "[Historia] Giordano Bruno został spalony na stosie w Rzymie. (1600)" },
  { 1863, "[Polska] Rozegrała się bitwa pod Miechowem w powstaniu styczniowym. (1863)" },
  { 1904, "[Kultura] Odbyła się premiera opery Madama Butterfly w Mediolanie. (1904)" },
  { 1972, "[Historia] Volkswagen Garbus pobił rekord produkcji Forda T. (1972)" },
  { 2008, "[Świat] Kosowo ogłosiło niepodległość. (2008)" },
};

// 18.02
const HistoryEvent HIST_049[] = {
  { 1386, "[Polska] Władysław Jagiełło poślubił Jadwigę Andegaweńską. (1386)" },
  { 1516, "[Historia] Urodziła się Maria I Tudor, królowa Anglii. (1516)" },
  { 1745, "[Nauka] Urodził się Alessandro Volta, pionier elektryczności. (1745)" },
  { 1885, "[Kultura] W USA wydano Przygody Hucka Finna Marka Twaina. (1885)" },
  { 1930, "[Nauka] Clyde Tombaugh odkrył Plutona. (1930)" },
};

// 19.02
const HistoryEvent HIST_050[] = {
  { 1473, "[Nauka] Urodził się Mikołaj Kopernik w Toruniu. (1473)" },
  { 1878, "[Nauka] Thomas Edison otrzymał patent na fonograf. (1878)" },
  { 1942, "[Historia] Roosevelt podpisał rozkaz o internowaniu Japończyków w USA. (1942)" },
  { 1945, "[Historia] Rozpoczęła się bitwa o Iwo Jimę. (1945)" },
  { 1953, "[Kultura] Urodził się Massimo Troisi, włoski aktor i reżyser. (1953)" },
};

// 20.02
const HistoryEvent HIST_051[] = {
  { 1816, "[Kultura] Odbyła się premiera Cyrulika sewilskiego Rossiniego. (1816)" },
  { 1919, "[Polska] Sejm Ustawodawczy przyjął Małą Konstytucję. (1919)" },
  { 1943, "[Nauka] Wybuchł wulkan Paricutin w Meksyku. (1943)" },
  { 1962, "[Historia] John Glenn jako pierwszy Amerykanin okrążył Ziemię. (1962)" },
  { 1986, "[Nauka] Wystrzelono stację kosmiczną Mir. (1986)" },
};

// 21.02
const HistoryEvent HIST_052[] = {
  { 1804, "[Nauka] Lokomotywa Trevithicka odbyła pierwszy przejazd kolejowy. (1804)" },
  { 1846, "[Polska] Rozpoczęło się powstanie krakowskie. (1846)" },
  { 1925, "[Kultura] Ukazał się pierwszy numer tygodnika The New Yorker. (1925)" },
  { 1952, "[Historia] W Dhace zginęli demonstranci języka bengalskiego. (1952)" },
  { 1965, "[Historia] Malcolm X został zastrzelony w Nowym Jorku. (1965)" },
};

// 22.02
const HistoryEvent HIST_053[] = {
  { 1732, "[Historia] Urodził się George Washington, pierwszy prezydent USA. (1732)" },
  { 1848, "[Historia] W Paryżu rozpoczęła się rewolucja lutowa. (1848)" },
  { 1857, "[Historia] Urodził się Robert Baden-Powell, twórca skautingu. (1857)" },
  { 1980, "[Świat] USA pokonały ZSRR w hokeju, tzw. Cud na lodzie. (1980)" },
  { 2017, "[Nauka] NASA ogłosiła odkrycie siedmiu planet TRAPPIST-1. (2017)" },
};

// 23.02
const HistoryEvent HIST_054[] = {
  { 1685, "[Kultura] Urodził się Georg Friedrich Handel. (1685)" },
  { 1893, "[Nauka] Rudolf Diesel otrzymał patent na silnik wysokoprężny. (1893)" },
  { 1903, "[Świat] Kuba wydzierżawiła USA teren Guantanamo. (1903)" },
  { 1945, "[Historia] Joe Rosenthal sfotografował flagę USA na Iwo Jimie. (1945)" },
  { 1998, "[Polska] Ratyfikowano konkordat między Polską a Stolicą Apostolską. (1998)" },
};

// 24.02
const HistoryEvent HIST_055[] = {
  { 1530, "[Historia] Karol V został koronowany na cesarza w Bolonii. (1530)" },
  { 1582, "[Świat] Grzegorz XIII ogłosił bullę reformującą kalendarz. (1582)" },
  { 1871, "[Nauka] Ukazało się dzieło Darwina O pochodzeniu człowieka. (1871)" },
  { 1920, "[Historia] Hitler przedstawił 25-punktowy program NSDAP. (1920)" },
  { 2022, "[Historia] Rosja rozpoczęła pełnoskalową inwazję na Ukrainę. (2022)" },
};

// 25.02
const HistoryEvent HIST_056[] = {
  { 1570, "[Świat] Papież Pius V ekskomunikował Elżbietę I. (1570)" },
  { 1831, "[Polska] Rozegrała się bitwa pod Olszynką Grochowską. (1831)" },
  { 1841, "[Kultura] Urodził się Pierre-Auguste Renoir, malarz. (1841)" },
  { 1956, "[Historia] Chruszczow wygłosił tajny referat o zbrodniach Stalina. (1956)" },
  { 1986, "[Historia] Ferdinand Marcos opuścił Filipiny po rewolucji People Power. (1986)" },
};

// 26.02
const HistoryEvent HIST_057[] = {
  { 1802, "[Kultura] Urodził się Victor Hugo, autor Nędzników. (1802)" },
  { 1815, "[Historia] Napoleon opuścił Elbę, wracając do walki o władzę. (1815)" },
  { 1927, "[Polska] Mazurek Dąbrowskiego został oficjalnym hymnem Polski. (1927)" },
  { 1935, "[Nauka] Watson-Watt i Wilkins pokazali działanie radaru. (1935)" },
  { 1993, "[Historia] Doszło do zamachu bombowego na World Trade Center. (1993)" },
};

// 27.02
const HistoryEvent HIST_058[] = {
  { 1861, "[Polska] Rosjanie krwawo stłumili manifestację w Warszawie. (1861)" },
  { 1900, "[Historia] Powstał Komitet Reprezentacji Pracy, zalążek Labour Party. (1900)" },
  { 1932, "[Nauka] James Chadwick opublikował pracę o odkryciu neutronu. (1932)" },
  { 1933, "[Historia] Spłonął Reichstag w Berlinie. (1933)" },
  { 1991, "[Świat] George H.W. Bush ogłosił wyzwolenie Kuwejtu. (1991)" },
};

// 28.02
const HistoryEvent HIST_059[] = {
  { 1922, "[Świat] Wielka Brytania uznała niepodległość Egiptu. (1922)" },
  { 1953, "[Nauka] Watson i Crick ustalili model podwójnej helisy DNA. (1953)" },
  { 1983, "[Kultura] Wyemitowano finałowy odcinek serialu MASH. (1983)" },
  { 1986, "[Historia] W Sztokholmie zamordowano premiera Olofa Palmego. (1986)" },
  { 1991, "[Świat] Zakończono działania bojowe w wojnie w Zatoce Perskiej. (1991)" },
};

// 29.02
const HistoryEvent HIST_060[] = {
  { 1504, "[Nauka] Kolumb użył zaćmienia Księżyca na Jamajce. (1504)" },
  { 1792, "[Kultura] Urodził się Gioacchino Rossini, kompozytor. (1792)" },
  { 1940, "[Kultura] Hattie McDaniel jako pierwsza czarnoskóra osoba zdobyła Oscara. (1940)" },
  { 1960, "[Świat] Trzęsienie ziemi zniszczyło Agadir w Maroku. (1960)" },
  { 1996, "[Historia] Oficjalnie zakończyło się oblężenie Sarajewa. (1996)" },
};

// 01.03
const HistoryEvent HIST_061[] = {
  { 1565, "[Świat] Portugalczycy założyli miasto Rio de Janeiro. (1565)" },
  { 1815, "[Historia] Napoleon wylądował we Francji po opuszczeniu Elby. (1815)" },
  { 1872, "[Świat] Utworzono Park Narodowy Yellowstone. (1872)" },
  { 1896, "[Nauka] Henri Becquerel odkrył promieniotwórczość naturalną. (1896)" },
  { 1951, "[Polska] Stracono przywódców IV Zarządu WiN. (1951)" },
};

// 02.03
const HistoryEvent HIST_062[] = {
  { 1864, "[Polska] Car Aleksander II wydał ukaz uwłaszczeniowy. (1864)" },
  { 1933, "[Kultura] Odbyła się premiera filmu King Kong w Nowym Jorku. (1933)" },
  { 1939, "[Świat] Eugenio Pacelli został wybrany papieżem Piusem XII. (1939)" },
  { 1949, "[Nauka] Lucky Lady II zakończył pierwszy lot non stop wokół Ziemi. (1949)" },
  { 1969, "[Nauka] Odbył się pierwszy lot naddźwiękowego samolotu Concorde. (1969)" },
};

// 03.03
const HistoryEvent HIST_063[] = {
  { 1861, "[Historia] Aleksander II ogłosił manifest znoszący poddaństwo w Rosji. (1861)" },
  { 1875, "[Kultura] Odbyła się premiera opery Carmen Bizeta w Paryżu. (1875)" },
  { 1918, "[Historia] Podpisano traktat brzeski, wycofujący Rosję z I wojny. (1918)" },
  { 1923, "[Kultura] Ukazał się pierwszy numer magazynu Time. (1923)" },
  { 1973, "[Nauka] Podpisano konwencję CITES o handlu gatunkami. (1973)" },
};

// 04.03
const HistoryEvent HIST_064[] = {
  { 1386, "[Polska] Władysław Jagiełło został koronowany na króla Polski. (1386)" },
  { 1678, "[Kultura] Urodził się Antonio Vivaldi, kompozytor. (1678)" },
  { 1789, "[Świat] Weszła w życie Konstytucja Stanów Zjednoczonych. (1789)" },
  { 1933, "[Historia] Franklin D. Roosevelt został prezydentem USA. (1933)" },
  { 1975, "[Kultura] Charlie Chaplin otrzymał tytuł szlachecki. (1975)" },
};

// 05.03
const HistoryEvent HIST_065[] = {
  { 1616, "[Nauka] Dzieło Kopernika De revolutionibus trafiło na indeks ksiąg zakazanych. (1616)" },
  { 1936, "[Nauka] Odbył się pierwszy lot myśliwca Supermarine Spitfire. (1936)" },
  { 1940, "[Polska] Biuro Polityczne ZSRR podjęło decyzję o zbrodni katyńskiej. (1940)" },
  { 1953, "[Historia] Zmarł Józef Stalin. (1953)" },
  { 1953, "[Kultura] Zmarł Siergiej Prokofiew, kompozytor. (1953)" },
};

// 06.03
const HistoryEvent HIST_066[] = {
  { 1454, "[Polska] Kazimierz IV Jagiellończyk włączył Prusy do Korony. (1454)" },
  { 1475, "[Kultura] Urodził się Michał Anioł. (1475)" },
  { 1836, "[Historia] Zakończyła się bitwa o Alamo w Teksasie. (1836)" },
  { 1869, "[Nauka] Dmitrij Mendelejew przedstawił układ okresowy pierwiastków. (1869)" },
  { 1899, "[Nauka] Bayer zarejestrował znak towarowy Aspirin. (1899)" },
};

// 07.03
const HistoryEvent HIST_067[] = {
  { 321, "[Świat] Konstantyn Wielki ustanowił niedzielę dniem odpoczynku. (321)" },
  { 1875, "[Kultura] Urodził się Maurice Ravel, kompozytor. (1875)" },
  { 1876, "[Nauka] Alexander Graham Bell otrzymał patent na telefon. (1876)" },
  { 1936, "[Historia] Niemcy ponownie obsadziły wojskiem Nadrenię. (1936)" },
  { 1965, "[Historia] Krwawa Niedziela w Selmie stała się symbolem walki o prawa obywatelskie. (1965)" },
};

// 08.03
const HistoryEvent HIST_068[] = {
  { 1910, "[Nauka] Raymonde de Laroche została pierwszą kobietą z licencją pilota. (1910)" },
  { 1917, "[Historia] W Piotrogrodzie wybuchły strajki, początek rewolucji lutowej. (1917)" },
  { 1957, "[Historia] Kanał Sueski ponownie otwarto po kryzysie sueskim. (1957)" },
  { 1968, "[Polska] Rozpoczęły się protesty studenckie Marca 1968 w Warszawie. (1968)" },
  { 1978, "[Kultura] BBC nadała pierwszy odcinek Autostopem przez Galaktykę. (1978)" },
};

// 09.03
const HistoryEvent HIST_069[] = {
  { 1454, "[Świat] Urodził się Amerigo Vespucci, włoski żeglarz. (1454)" },
  { 1814, "[Kultura] Urodził się Taras Szewczenko, poeta ukraiński. (1814)" },
  { 1934, "[Świat] Urodził się Jurij Gagarin, pierwszy człowiek w kosmosie. (1934)" },
  { 1959, "[Kultura] Barbie zadebiutowała na targach zabawek w Nowym Jorku. (1959)" },
  { 1990, "[Historia] Biuro Polityczne Mongolii podało się do dymisji. (1990)" },
};

// 10.03
const HistoryEvent HIST_070[] = {
  { 1863, "[Polska] Marian Langiewicz ogłosił się dyktatorem powstania styczniowego. (1863)" },
  { 1876, "[Nauka] Alexander Graham Bell wykonał pierwszą udaną rozmowę telefoniczną. (1876)" },
  { 1903, "[Kultura] Urodził się Bix Beiderbecke, trębacz jazzowy. (1903)" },
  { 1922, "[Świat] Mahatma Gandhi został aresztowany za działalność antykolonialną. (1922)" },
  { 1959, "[Historia] W Lhasie rozpoczęło się powstanie tybetańskie. (1959)" },
};

// 11.03
const HistoryEvent HIST_071[] = {
  { 1702, "[Kultura] W Londynie ukazał się pierwszy numer The Daily Courant. (1702)" },
  { 1985, "[Świat] Michaił Gorbaczow został przywódcą ZSRR. (1985)" },
  { 1990, "[Historia] Litwa ogłosiła odrodzenie niepodległości. (1990)" },
  { 2004, "[Historia] Doszło do zamachów bombowych na pociągi w Madrycie. (2004)" },
  { 2011, "[Historia] Trzęsienie ziemi i tsunami doprowadziły do katastrofy w Fukushimie. (2011)" },
};

// 12.03
const HistoryEvent HIST_072[] = {
  { 1894, "[Kultura] Coca-Cola została po raz pierwszy sprzedana w butelkach. (1894)" },
  { 1912, "[Świat] W USA powstała organizacja Girl Scouts. (1912)" },
  { 1922, "[Kultura] Urodził się Jack Kerouac, pisarz pokolenia beatników. (1922)" },
  { 1930, "[Historia] Mahatma Gandhi rozpoczął Marsz Solny. (1930)" },
  { 1999, "[Polska] Polska, Czechy i Węgry zostały członkami NATO. (1999)" },
};

// 13.03
const HistoryEvent HIST_073[] = {
  { 1781, "[Nauka] William Herschel odkrył Urana. (1781)" },
  { 1881, "[Świat] Zamordowano cara Aleksandra II. (1881)" },
  { 1929, "[Polska] Urodził się Zbigniew Messner, ekonomista i polityk. (1929)" },
  { 1943, "[Polska] Niemcy rozpoczęli likwidację getta krakowskiego. (1943)" },
  { 2013, "[Historia] Jorge Mario Bergoglio został wybrany papieżem Franciszkiem. (2013)" },
};

// 14.03
const HistoryEvent HIST_074[] = {
  { 1794, "[Nauka] Eli Whitney opatentował odziarniarkę bawełny. (1794)" },
  { 1879, "[Nauka] Urodził się Albert Einstein. (1879)" },
  { 1883, "[Historia] Zmarł Karl Marx. (1883)" },
  { 1943, "[Polska] Zakończyła się likwidacja getta krakowskiego. (1943)" },
  { 1988, "[Nauka] W San Francisco odbyły się pierwsze znane obchody Dnia Liczby Pi. (1988)" },
};

// 15.03
const HistoryEvent HIST_075[] = {
  { -44, "[Historia] Zamordowano Juliusza Cezara w idy marcowe. (44 p.n.e.)" },
  { 1493, "[Historia] Kolumb wrócił do Hiszpanii po pierwszej wyprawie do Ameryki. (1493)" },
  { 1765, "[Polska] Utworzono Szkołę Rycerską w Warszawie. (1765)" },
  { 1848, "[Świat] Wybuchła rewolucja węgierska. (1848)" },
  { 1985, "[Nauka] Zarejestrowano pierwszą domenę internetową Symbolics.com. (1985)" },
};

// 16.03
const HistoryEvent HIST_076[] = {
  { 37, "[Historia] Zmarł cesarz Tyberiusz. (37)" },
  { 1521, "[Historia] Wyprawa Magellana dotarła do Filipin. (1521)" },
  { 1859, "[Nauka] Urodził się Aleksandr Popow, pionier radiotechniki. (1859)" },
  { 1926, "[Nauka] Robert Goddard wystrzelił pierwszą rakietę na paliwo ciekłe. (1926)" },
  { 1968, "[Historia] Doszło do masakry w My Lai podczas wojny w Wietnamie. (1968)" },
};

// 17.03
const HistoryEvent HIST_077[] = {
  { 1861, "[Świat] Proklamowano Królestwo Włoch. (1861)" },
  { 1921, "[Polska] Uchwalono Konstytucję marcową II Rzeczypospolitej. (1921)" },
  { 1958, "[Nauka] Wystrzelono satelitę Vanguard 1. (1958)" },
  { 1969, "[Historia] Golda Meir została premierem Izraela. (1969)" },
  { 1992, "[Historia] W RPA biali wyborcy poparli koniec apartheidu. (1992)" },
};

// 18.03
const HistoryEvent HIST_078[] = {
  { 1844, "[Kultura] Urodził się Nikołaj Rimski-Korsakow, kompozytor. (1844)" },
  { 1871, "[Historia] Rozpoczęła się Komuna Paryska. (1871)" },
  { 1921, "[Polska] Podpisano traktat ryski kończący wojnę polsko-bolszewicką. (1921)" },
  { 1962, "[Świat] Francja i algierski FLN podpisały układy z Évian. (1962)" },
  { 1965, "[Nauka] Aleksiej Leonow odbył pierwszy spacer kosmiczny. (1965)" },
};

// 19.03
const HistoryEvent HIST_079[] = {
  { 1238, "[Polska] Zmarł Henryk Brodaty, książę śląski i krakowski. (1238)" },
  { 1882, "[Kultura] Położono kamień węgielny pod Sagradę Familię. (1882)" },
  { 1915, "[Nauka] Lowell Observatory sfotografowało Plutona, jeszcze go nie rozpoznając. (1915)" },
  { 1932, "[Świat] Oficjalnie otwarto Sydney Harbour Bridge. (1932)" },
  { 1953, "[Kultura] Po raz pierwszy transmitowano telewizyjnie ceremonię Oscarów. (1953)" },
};

// 20.03
const HistoryEvent HIST_080[] = {
  { 1602, "[Świat] Powstała Holenderska Kompania Wschodnioindyjska. (1602)" },
  { 1852, "[Kultura] Ukazała się Chata wuja Toma Harriet Beecher Stowe. (1852)" },
  { 1921, "[Polska] Odbył się plebiscyt na Górnym Śląsku. (1921)" },
  { 1995, "[Świat] W tokijskim metrze doszło do ataku sarinem sekty Aum Shinrikyo. (1995)" },
  { 2003, "[Historia] Rozpoczęła się wojna w Iraku. (2003)" },
};

// 21.03
const HistoryEvent HIST_081[] = {
  { 1804, "[Historia] Ogłoszono Kodeks Napoleona, ważny dla prawa cywilnego Europy. (1804)" },
  { 1960, "[Świat] Doszło do masakry w Sharpeville w Republice Południowej Afryki. (1960)" },
  { 1963, "[Historia] Zamknięto federalne więzienie Alcatraz. (1963)" },
  { 1965, "[Historia] Rozpoczął się marsz z Selmy do Montgomery o prawa wyborcze. (1965)" },
  { 2006, "[Nauka] Jack Dorsey wysłał pierwszy wpis w serwisie Twitter. (2006)" },
};

// 22.03
const HistoryEvent HIST_082[] = {
  { 1765, "[Historia] Parlament brytyjski uchwalił Stamp Act dla kolonii amerykańskich. (1765)" },
  { 1832, "[Kultura] Zmarł Johann Wolfgang Goethe, pisarz i poeta. (1832)" },
  { 1895, "[Kultura] Bracia Lumière pokazali prywatnie film robotników wychodzących z fabryki. (1895)" },
  { 1945, "[Świat] Utworzono Ligę Państw Arabskich. (1945)" },
  { 1993, "[Historia] Po raz pierwszy obchodzono Światowy Dzień Wody. (1993)" },
};

// 23.03
const HistoryEvent HIST_083[] = {
  { 1839, "[Kultura] W Boston Morning Post ukazał się skrót OK. (1839)" },
  { 1919, "[Świat] Benito Mussolini założył Fasci Italiani di Combattimento. (1919)" },
  { 1933, "[Historia] Reichstag uchwalił ustawę o pełnomocnictwach dla Hitlera. (1933)" },
  { 1961, "[Historia] Po raz pierwszy obchodzono Światowy Dzień Meteorologii. (1961)" },
  { 1965, "[Nauka] Gemini 3 wykonała pierwszy załogowy lot programu Gemini. (1965)" },
};

// 24.03
const HistoryEvent HIST_084[] = {
  { 1603, "[Historia] Zmarła Elżbieta I, królowa Anglii. (1603)" },
  { 1794, "[Polska] Tadeusz Kościuszko złożył przysięgę na rynku w Krakowie. (1794)" },
  { 1882, "[Nauka] Robert Koch ogłosił odkrycie prątka gruźlicy. (1882)" },
  { 1980, "[Historia] Zamordowano arcybiskupa Óscara Romero w Salwadorze. (1980)" },
  { 1989, "[Świat] Tankowiec Exxon Valdez spowodował wielki wyciek ropy. (1989)" },
};

// 25.03
const HistoryEvent HIST_085[] = {
  { 1306, "[Historia] Robert Bruce został koronowany na króla Szkocji. (1306)" },
  { 1655, "[Nauka] Christiaan Huygens odkrył Tytana, księżyc Saturna. (1655)" },
  { 1807, "[Świat] Brytyjska ustawa zakazująca handlu niewolnikami uzyskała sankcję. (1807)" },
  { 1881, "[Kultura] Urodził się Béla Bartók, kompozytor węgierski. (1881)" },
  { 1957, "[Historia] Podpisano traktaty rzymskie, ważny krok do powstania UE. (1957)" },
};

// 26.03
const HistoryEvent HIST_086[] = {
  { 1827, "[Kultura] Zmarł Ludwig van Beethoven, kompozytor. (1827)" },
  { 1943, "[Polska] Grupy Szarych Szeregów przeprowadziły akcję pod Arsenałem. (1943)" },
  { 1953, "[Nauka] Jonas Salk ogłosił udane testy szczepionki przeciw polio. (1953)" },
  { 1979, "[Świat] Egipt i Izrael podpisały traktat pokojowy w Waszyngtonie. (1979)" },
  { 1995, "[Historia] Układ z Schengen zaczął praktycznie znosić kontrole graniczne. (1995)" },
};

// 27.03
const HistoryEvent HIST_087[] = {
  { 1794, "[Świat] Kongres USA uchwalił Naval Act, zalążek nowej marynarki. (1794)" },
  { 1899, "[Nauka] Marconi przesłał sygnał radiowy przez kanał La Manche. (1899)" },
  { 1962, "[Kultura] Po raz pierwszy obchodzono Międzynarodowy Dzień Teatru. (1962)" },
  { 1968, "[Nauka] Jurij Gagarin zginął w katastrofie lotniczej. (1968)" },
  { 1977, "[Historia] Katastrofa lotnicza na Teneryfie pochłonęła 583 ofiary. (1977)" },
};

// 28.03
const HistoryEvent HIST_088[] = {
  { 1854, "[Historia] Wielka Brytania wypowiedziała wojnę Rosji w wojnie krymskiej. (1854)" },
  { 1910, "[Nauka] Henri Fabre wykonał pierwszy udany lot hydroplanem. (1910)" },
  { 1930, "[Świat] Konstantynopol oficjalnie przemianowano na Stambuł. (1930)" },
  { 1941, "[Kultura] Zmarła Virginia Woolf, pisarka. (1941)" },
  { 1979, "[Nauka] Rozpoczęła się awaria elektrowni Three Mile Island. (1979)" },
};

// 29.03
const HistoryEvent HIST_089[] = {
  { 1461, "[Historia] Rozegrała się bitwa pod Towton w Wojnie Dwóch Róż. (1461)" },
  { 1848, "[Świat] Zator lodowy niemal zatrzymał przepływ wodospadu Niagara. (1848)" },
  { 1973, "[Historia] Ostatnie jednostki bojowe USA opuściły Wietnam Południowy. (1973)" },
  { 1974, "[Nauka] W Chinach odkryto Armię Terakotową. (1974)" },
  { 2004, "[Historia] Siedem państw Europy Środkowo-Wschodniej dołączyło do NATO. (2004)" },
};

// 30.03
const HistoryEvent HIST_090[] = {
  { 1746, "[Kultura] Urodził się Francisco Goya, malarz hiszpański. (1746)" },
  { 1856, "[Świat] Traktat paryski zakończył wojnę krymską. (1856)" },
  { 1867, "[Historia] USA uzgodniły zakup Alaski od Rosji za 7,2 mln dolarów. (1867)" },
  { 1892, "[Polska] Urodził się Stefan Banach, wybitny matematyk. (1892)" },
  { 1981, "[Historia] Doszło do zamachu na prezydenta USA Ronalda Reagana. (1981)" },
};

// 31.03
const HistoryEvent HIST_091[] = {
  { 1596, "[Kultura] Urodził się René Descartes, filozof i matematyk. (1596)" },
  { 1889, "[Historia] Gustave Eiffel uroczyście zakończył budowę wieży Eiffla. (1889)" },
  { 1892, "[Polska] Urodził się Stanisław Maczek, generał broni Wojska Polskiego. (1892)" },
  { 1949, "[Świat] Nowa Fundlandia dołączyła do Kanady. (1949)" },
  { 1966, "[Nauka] Wystartowała Luna 10, pierwsza sonda na orbicie Księżyca. (1966)" },
};

// 01.04
const HistoryEvent HIST_092[] = {
  { 1656, "[Polska] Jan Kazimierz złożył śluby lwowskie. (1656)" },
  { 1924, "[Historia] Adolf Hitler został skazany po puczu monachijskim. (1924)" },
  { 1939, "[Świat] Francisco Franco ogłosił koniec wojny domowej w Hiszpanii. (1939)" },
  { 1976, "[Nauka] Jobs, Wozniak i Wayne założyli Apple Computer. (1976)" },
  { 1999, "[Historia] Utworzono kanadyjskie terytorium Nunavut. (1999)" },
};

// 02.04
const HistoryEvent HIST_093[] = {
  { 1805, "[Kultura] Urodził się Hans Christian Andersen. (1805)" },
  { 1917, "[Świat] Woodrow Wilson poprosił Kongres USA o wypowiedzenie wojny Niemcom. (1917)" },
  { 1972, "[Kultura] Charlie Chaplin wrócił do USA po latach wygnania. (1972)" },
  { 1982, "[Historia] Argentyna zajęła Falklandy, zaczynając wojnę z Wielką Brytanią. (1982)" },
  { 2005, "[Polska] Zmarł Jan Paweł II. (2005)" },
};

// 03.04
const HistoryEvent HIST_094[] = {
  { 1043, "[Historia] Edward Wyznawca został koronowany na króla Anglii. (1043)" },
  { 1860, "[Świat] Ruszyła pierwsza poczta Pony Express. (1860)" },
  { 1897, "[Kultura] Zmarł Johannes Brahms, kompozytor. (1897)" },
  { 1922, "[Historia] Józef Stalin został sekretarzem generalnym partii bolszewickiej. (1922)" },
  { 1973, "[Nauka] Martin Cooper wykonał pierwszą publiczną rozmowę telefonem komórkowym. (1973)" },
};

// 04.04
const HistoryEvent HIST_095[] = {
  { 1581, "[Historia] Francis Drake otrzymał tytuł szlachecki na Golden Hind. (1581)" },
  { 1794, "[Polska] Powstańcy kościuszkowscy wygrali bitwę pod Racławicami. (1794)" },
  { 1949, "[Historia] Podpisano traktat północnoatlantycki, podstawę NATO. (1949)" },
  { 1968, "[Świat] Zamordowano Martina Luthera Kinga Jr. w Memphis. (1968)" },
  { 1975, "[Nauka] Bill Gates i Paul Allen założyli Microsoft. (1975)" },
};

// 05.04
const HistoryEvent HIST_096[] = {
  { 1614, "[Historia] Pocahontas poślubiła Johna Rolfe'a w Jamestown. (1614)" },
  { 1722, "[Historia] Jacob Roggeveen dotarł do Wyspy Wielkanocnej. (1722)" },
  { 1879, "[Historia] Chile wypowiedziało wojnę Peru i Boliwii. (1879)" },
  { 1955, "[Świat] Winston Churchill zrezygnował z funkcji premiera Wielkiej Brytanii. (1955)" },
  { 1994, "[Kultura] Zmarł Kurt Cobain, lider Nirvany. (1994)" },
};

// 06.04
const HistoryEvent HIST_097[] = {
  { 1520, "[Kultura] Zmarł Rafael Santi, malarz renesansu. (1520)" },
  { 1652, "[Historia] Jan van Riebeeck dotarł do Przylądka Dobrej Nadziei. (1652)" },
  { 1896, "[Historia] Rozpoczęły się pierwsze nowożytne igrzyska olimpijskie. (1896)" },
  { 1917, "[Świat] USA formalnie przystąpiły do I wojny światowej. (1917)" },
  { 1943, "[Kultura] W USA ukazał się Mały Książę Saint-Exupéry'ego. (1943)" },
};

// 07.04
const HistoryEvent HIST_098[] = {
  { 1805, "[Kultura] Odbyło się pierwsze publiczne wykonanie III Symfonii Beethovena. (1805)" },
  { 1939, "[Świat] Włochy zaatakowały Albanię. (1939)" },
  { 1948, "[Nauka] Weszła w życie konstytucja WHO. (1948)" },
  { 1964, "[Nauka] IBM zaprezentował rodzinę komputerów System/360. (1964)" },
  { 1994, "[Historia] Rozpoczęło się ludobójstwo Tutsi w Rwandzie. (1994)" },
};

// 08.04
const HistoryEvent HIST_099[] = {
  { 1820, "[Historia] Na wyspie Melos odnaleziono rzeźbę Wenus z Milo. (1820)" },
  { 1904, "[Historia] Podpisano entente cordiale między Francją i Wielką Brytanią. (1904)" },
  { 1946, "[Świat] Rozpoczęła się ostatnia sesja Ligi Narodów. (1946)" },
  { 1973, "[Kultura] Zmarł Pablo Picasso, jeden z najważniejszych malarzy XX wieku. (1973)" },
  { 1974, "[Historia] Hank Aaron pobił rekord home runów Babe'a Rutha. (1974)" },
};

// 09.04
const HistoryEvent HIST_100[] = {
  { 1241, "[Polska] Mongołowie pokonali wojska Henryka Pobożnego pod Legnicą. (1241)" },
  { 1821, "[Kultura] Urodził się Charles Baudelaire, poeta francuski. (1821)" },
  { 1865, "[Świat] Robert E. Lee poddał armię Konfederacji pod Appomattox. (1865)" },
  { 1967, "[Nauka] Boeing 737 wykonał pierwszy lot. (1967)" },
  { 2003, "[Historia] Upadek pomnika Saddama Husajna stał się symbolem wojny w Iraku. (2003)" },
};

// 10.04
const HistoryEvent HIST_101[] = {
  { 1525, "[Polska] Albrecht Hohenzollern złożył hołd pruski Zygmuntowi Staremu. (1525)" },
  { 1912, "[Historia] Titanic wypłynął z Southampton w pierwszy rejs. (1912)" },
  { 1998, "[Świat] Podpisano porozumienie wielkopiątkowe w Irlandii Północnej. (1998)" },
  { 2010, "[Polska] Katastrofa smoleńska: zginęło 96 osób, w tym Lech Kaczyński. (2010)" },
  { 2019, "[Nauka] Pokazano pierwszy obraz cienia czarnej dziury M87*. (2019)" },
};

// 11.04
const HistoryEvent HIST_102[] = {
  { 1689, "[Historia] Wilhelm III i Maria II zostali koronowani na władców Anglii. (1689)" },
  { 1814, "[Historia] Podpisano traktat z Fontainebleau, kończący rządy Napoleona. (1814)" },
  { 1951, "[Świat] Prezydent Truman odwołał generała Douglasa MacArthura. (1951)" },
  { 1961, "[Historia] W Jerozolimie rozpoczął się proces Adolfa Eichmanna. (1961)" },
  { 1970, "[Nauka] Wystartowała misja Apollo 13. (1970)" },
};

// 12.04
const HistoryEvent HIST_103[] = {
  { 1861, "[Świat] Atak na Fort Sumter rozpoczął wojnę secesyjną w USA. (1861)" },
  { 1945, "[Historia] Zmarł Franklin D. Roosevelt, prezydent USA. (1945)" },
  { 1955, "[Nauka] Ogłoszono skuteczność szczepionki Salka przeciw polio. (1955)" },
  { 1961, "[Nauka] Jurij Gagarin jako pierwszy człowiek poleciał w kosmos. (1961)" },
  { 1981, "[Nauka] Wystartowała misja STS-1 z promem Columbia. (1981)" },
};

// 13.04
const HistoryEvent HIST_104[] = {
  { 1598, "[Świat] Henryk IV wydał edykt nantejski. (1598)" },
  { 1742, "[Kultura] W Dublinie odbyła się premiera oratorium Mesjasz Haendla. (1742)" },
  { 1943, "[Polska] Niemcy oficjalnie ogłosili odkrycie grobów katyńskich. (1943)" },
  { 1970, "[Nauka] Eksplozja zbiornika tlenu zagroziła misji Apollo 13. (1970)" },
  { 1997, "[Historia] Tiger Woods wygrał Masters jako najmłodszy zwycięzca turnieju. (1997)" },
};

// 14.04
const HistoryEvent HIST_105[] = {
  { 1828, "[Kultura] Noah Webster opublikował słownik języka angielskiego. (1828)" },
  { 1865, "[Historia] Abraham Lincoln został postrzelony w teatrze Forda. (1865)" },
  { 1912, "[Historia] Titanic uderzył w górę lodową na Atlantyku. (1912)" },
  { 1931, "[Świat] Proklamowano Drugą Republikę Hiszpańską. (1931)" },
  { 2003, "[Nauka] Ogłoszono zakończenie Human Genome Project. (2003)" },
};

// 15.04
const HistoryEvent HIST_106[] = {
  { 1452, "[Kultura] Urodził się Leonardo da Vinci, artysta i wynalazca. (1452)" },
  { 1865, "[Historia] Zmarł Abraham Lincoln po zamachu w teatrze Forda. (1865)" },
  { 1912, "[Historia] Zatonął Titanic podczas pierwszego rejsu. (1912)" },
  { 1947, "[Historia] Jackie Robinson zadebiutował w MLB, przełamując barierę rasową. (1947)" },
  { 1989, "[Historia] Katastrofa na stadionie Hillsborough pochłonęła 97 ofiar. (1989)" },
};

// 16.04
const HistoryEvent HIST_107[] = {
  { 1889, "[Kultura] Urodził się Charlie Chaplin, aktor i reżyser. (1889)" },
  { 1917, "[Świat] Lenin wrócił do Piotrogrodu z emigracji. (1917)" },
  { 1943, "[Nauka] Albert Hofmann przypadkowo odkrył działanie LSD. (1943)" },
  { 1945, "[Historia] Rozpoczęła się bitwa o Berlin. (1945)" },
  { 1972, "[Nauka] Wystartowała misja Apollo 16 na Księżyc. (1972)" },
};

// 17.04
const HistoryEvent HIST_108[] = {
  { 1492, "[Historia] Podpisano kapitulacje z Santa Fe dla wyprawy Kolumba. (1492)" },
  { 1946, "[Świat] Syria uzyskała pełną niepodległość po wycofaniu wojsk francuskich. (1946)" },
  { 1961, "[Historia] Rozpoczęła się inwazja w Zatoce Świń na Kubie. (1961)" },
  { 1964, "[Kultura] Ford zaprezentował model Mustang. (1964)" },
  { 1970, "[Nauka] Załoga Apollo 13 bezpiecznie wodowała na Pacyfiku. (1970)" },
};

// 18.04
const HistoryEvent HIST_109[] = {
  { 1775, "[Historia] Paul Revere ruszył z ostrzeżeniem przed wojskami brytyjskimi. (1775)" },
  { 1906, "[Świat] Trzęsienie ziemi zniszczyło San Francisco. (1906)" },
  { 1942, "[Historia] Rajd Doolittle'a uderzył w Japonię podczas II wojny światowej. (1942)" },
  { 1955, "[Nauka] Zmarł Albert Einstein, fizyk i noblista. (1955)" },
  { 1980, "[Historia] Zimbabwe ogłosiło niepodległość. (1980)" },
};

// 19.04
const HistoryEvent HIST_110[] = {
  { 1775, "[Historia] Bitwy pod Lexington i Concord rozpoczęły rewolucję amerykańską. (1775)" },
  { 1882, "[Nauka] Zmarł Charles Darwin, twórca teorii ewolucji. (1882)" },
  { 1943, "[Polska] Wybuchło powstanie w getcie warszawskim. (1943)" },
  { 1943, "[Nauka] Albert Hofmann odbył słynną rowerową podróż po LSD. (1943)" },
  { 1995, "[Świat] Zamach bombowy w Oklahoma City zabił 168 osób. (1995)" },
};

// 20.04
const HistoryEvent HIST_111[] = {
  { 1889, "[Historia] Urodził się Adolf Hitler. (1889)" },
  { 1912, "[Kultura] Zmarł Bram Stoker, autor Draculi. (1912)" },
  { 1972, "[Nauka] Apollo 16 wylądował na Księżycu. (1972)" },
  { 1999, "[Historia] Masakra w Columbine wstrząsnęła opinią publiczną w USA. (1999)" },
  { 2010, "[Świat] Eksplozja platformy Deepwater Horizon wywołała katastrofę ekologiczną. (2010)" },
};

// 21.04
const HistoryEvent HIST_112[] = {
  { 1509, "[Historia] Henryk VIII został królem Anglii po śmierci ojca. (1509)" },
  { 1918, "[Historia] Zginął Manfred von Richthofen, Czerwony Baron. (1918)" },
  { 1926, "[Świat] Urodziła się Elżbieta II, późniejsza królowa Wielkiej Brytanii. (1926)" },
  { 1960, "[Historia] Brasília została stolicą Brazylii. (1960)" },
  { 1989, "[Kultura] Nintendo wydało konsolę Game Boy w Japonii. (1989)" },
};

// 22.04
const HistoryEvent HIST_113[] = {
  { 1529, "[Historia] Hiszpania i Portugalia podpisały traktat w Saragossie. (1529)" },
  { 1724, "[Kultura] Urodził się Immanuel Kant, filozof oświecenia. (1724)" },
  { 1870, "[Historia] Urodził się Włodzimierz Lenin. (1870)" },
  { 1915, "[Historia] Pod Ypres Niemcy użyli chloru jako broni chemicznej. (1915)" },
  { 1970, "[Świat] Odbył się pierwszy Dzień Ziemi. (1970)" },
};

// 23.04
const HistoryEvent HIST_114[] = {
  { 997, "[Polska] Zginął święty Wojciech podczas misji w Prusach. (997)" },
  { 1616, "[Kultura] Zmarł William Shakespeare w Stratford-upon-Avon. (1616)" },
  { 1616, "[Kultura] W Madrycie pochowano Miguela de Cervantesa. (1616)" },
  { 1920, "[Historia] W Ankarze zebrało się Wielkie Zgromadzenie Narodowe Turcji. (1920)" },
  { 2005, "[Nauka] W serwisie YouTube opublikowano pierwszy film Me at the zoo. (2005)" },
};

// 24.04
const HistoryEvent HIST_115[] = {
  { 1800, "[Kultura] Utworzono Bibliotekę Kongresu USA. (1800)" },
  { 1915, "[Historia] Aresztowania Ormian w Stambule zapoczątkowały ludobójstwo. (1915)" },
  { 1916, "[Historia] W Dublinie rozpoczęło się powstanie wielkanocne. (1916)" },
  { 1942, "[Kultura] Urodziła się Barbra Streisand. (1942)" },
  { 1990, "[Nauka] Wystartował teleskop kosmiczny Hubble'a. (1990)" },
};

// 25.04
const HistoryEvent HIST_116[] = {
  { 1874, "[Nauka] Urodził się Guglielmo Marconi, pionier radia. (1874)" },
  { 1915, "[Historia] Wojska ANZAC wylądowały na półwyspie Gallipoli. (1915)" },
  { 1945, "[Historia] CLNAI ogłosił powstanie przeciw nazistom i faszystom. (1945)" },
  { 1953, "[Nauka] Nature opublikowało pracę Watsona i Cricka o DNA. (1953)" },
  { 1974, "[Świat] Rewolucja goździków obaliła dyktaturę w Portugalii. (1974)" },
};

// 26.04
const HistoryEvent HIST_117[] = {
  { 1564, "[Kultura] Ochrzczono Williama Shakespeare'a w Stratford-upon-Avon. (1564)" },
  { 1920, "[Polska] Wojska polsko-ukraińskie zajęły Żytomierz w ofensywie kijowskiej. (1920)" },
  { 1937, "[Historia] Bombardowanie Guerniki stało się symbolem okrucieństwa wojny. (1937)" },
  { 1964, "[Świat] Tanganika i Zanzibar połączyły się, tworząc Tanzanię. (1964)" },
  { 1986, "[Nauka] Doszło do katastrofy elektrowni jądrowej w Czarnobylu. (1986)" },
};

// 27.04
const HistoryEvent HIST_118[] = {
  { 1521, "[Świat] Ferdynand Magellan zginął na wyspie Mactan. (1521)" },
  { 1810, "[Kultura] Beethoven zapisał utwór znany jako Dla Elizy. (1810)" },
  { 1961, "[Historia] Sierra Leone uzyskało niepodległość od Wielkiej Brytanii. (1961)" },
  { 1967, "[Kultura] Odbyła się ceremonia otwarcia Expo 67 w Montrealu. (1967)" },
  { 1994, "[Historia] W RPA rozpoczęły się pierwsze powszechne wybory bez apartheidu. (1994)" },
};

// 28.04
const HistoryEvent HIST_119[] = {
  { 1789, "[Historia] Na HMS Bounty doszło do buntu przeciw Williamowi Blighowi. (1789)" },
  { 1937, "[Historia] Urodził się Saddam Husajn, późniejszy przywódca Iraku. (1937)" },
  { 1945, "[Świat] Włoscy partyzanci stracili Benito Mussoliniego. (1945)" },
  { 2001, "[Nauka] Dennis Tito wystartował jako pierwszy kosmiczny turysta. (2001)" },
  { 2003, "[Historia] ILO zaczęła obchodzić Światowy Dzień BHP w Pracy. (2003)" },
};

// 29.04
const HistoryEvent HIST_120[] = {
  { 1727, "[Kultura] Urodził się Jean-Georges Noverre, reformator baletu. (1727)" },
  { 1770, "[Historia] James Cook wylądował w Zatoce Botanicznej w Australii. (1770)" },
  { 1901, "[Świat] Urodził się Hirohito, późniejszy cesarz Japonii. (1901)" },
  { 1945, "[Historia] Wojska USA wyzwoliły obóz koncentracyjny Dachau. (1945)" },
  { 1992, "[Historia] W Los Angeles wybuchły zamieszki po wyroku w sprawie Rodneya Kinga. (1992)" },
};

// 30.04
const HistoryEvent HIST_121[] = {
  { 1789, "[Historia] George Washington został zaprzysiężony na prezydenta USA. (1789)" },
  { 1803, "[Świat] USA i Francja podpisały traktat zakupu Luizjany. (1803)" },
  { 1945, "[Historia] Adolf Hitler popełnił samobójstwo w Berlinie. (1945)" },
  { 1975, "[Historia] Upadek Sajgonu zakończył wojnę w Wietnamie. (1975)" },
  { 1993, "[Nauka] CERN udostępnił World Wide Web w domenie publicznej. (1993)" },
};

// 01.05
const HistoryEvent HIST_122[] = {
  { 1576, "[Polska] Stefan Batory został koronowany na króla Polski. (1576)" },
  { 1707, "[Świat] Powstało Królestwo Wielkiej Brytanii. (1707)" },
  { 1851, "[Kultura] Otwarto Wielką Wystawę w londyńskim Crystal Palace. (1851)" },
  { 1890, "[Historia] Odbyły się pierwsze masowe obchody Święta Pracy 1 maja. (1890)" },
  { 2004, "[Polska] Polska przystąpiła do Unii Europejskiej. (2004)" },
};

// 02.05
const HistoryEvent HIST_123[] = {
  { 1519, "[Kultura] Zmarł Leonardo da Vinci, artysta i uczony renesansu. (1519)" },
  { 1808, "[Historia] W Madrycie wybuchło powstanie Dos de Mayo. (1808)" },
  { 1945, "[Polska] Polscy żołnierze zawiesili flagę na Kolumnie Zwycięstwa w Berlinie. (1945)" },
  { 1952, "[Nauka] De Havilland Comet rozpoczął pierwszy pasażerski rejs odrzutowca. (1952)" },
  { 2011, "[Historia] W Abbottabad zginął Osama bin Laden. (2011)" },
};

// 03.05
const HistoryEvent HIST_124[] = {
  { 1469, "[Kultura] Urodził się Niccolò Machiavelli, autor Księcia. (1469)" },
  { 1791, "[Polska] Uchwalono Konstytucję 3 Maja. (1791)" },
  { 1808, "[Historia] Francuzi rozstrzelali powstańców madryckich. (1808)" },
  { 1947, "[Historia] Weszła w życie nowa konstytucja Japonii. (1947)" },
  { 1978, "[Nauka] Wysłano pierwszą komercyjną wiadomość spam w ARPANET. (1978)" },
};

// 04.05
const HistoryEvent HIST_125[] = {
  { 1919, "[Świat] Chińscy studenci rozpoczęli Ruch 4 Maja w Pekinie. (1919)" },
  { 1949, "[Historia] Katastrofa Superga zabiła piłkarzy Torino FC. (1949)" },
  { 1959, "[Kultura] Odbyła się pierwsza ceremonia nagród Grammy. (1959)" },
  { 1979, "[Świat] Margaret Thatcher została premierem Wielkiej Brytanii. (1979)" },
  { 1989, "[Nauka] Sonda Magellan wystartowała w kierunku Wenus. (1989)" },
};

// 05.05
const HistoryEvent HIST_126[] = {
  { 1818, "[Historia] Urodził się Karol Marks, filozof i ekonomista. (1818)" },
  { 1862, "[Świat] Meksyk pokonał wojska francuskie w bitwie pod Pueblą. (1862)" },
  { 1945, "[Historia] Wybuchło powstanie praskie przeciw okupacji niemieckiej. (1945)" },
  { 1949, "[Historia] Podpisano statut Rady Europy w Londynie. (1949)" },
  { 1961, "[Nauka] Alan Shepard odbył pierwszy amerykański lot w kosmos. (1961)" },
};

// 06.05
const HistoryEvent HIST_127[] = {
  { 1527, "[Historia] Sacco di Roma: wojska cesarskie splądrowały Rzym. (1527)" },
  { 1840, "[Świat] Penny Black zaczął obowiązywać jako znaczek pocztowy. (1840)" },
  { 1856, "[Nauka] Urodził się Sigmund Freud, twórca psychoanalizy. (1856)" },
  { 1937, "[Historia] Doszło do katastrofy sterowca Hindenburg. (1937)" },
  { 1994, "[Nauka] Oficjalnie otwarto tunel pod kanałem La Manche. (1994)" },
};

// 07.05
const HistoryEvent HIST_128[] = {
  { 1763, "[Polska] Urodził się książę Józef Poniatowski. (1763)" },
  { 1824, "[Kultura] W Wiedniu odbyła się premiera IX Symfonii Beethovena. (1824)" },
  { 1895, "[Nauka] Aleksandr Popow zaprezentował odbiornik radiowy. (1895)" },
  { 1915, "[Historia] Niemiecki U-Boot zatopił RMS Lusitania. (1915)" },
  { 1945, "[Historia] Niemcy podpisały akt bezwarunkowej kapitulacji w Reims. (1945)" },
};

// 08.05
const HistoryEvent HIST_129[] = {
  { 1886, "[Świat] W Atlancie po raz pierwszy sprzedano Coca-Colę. (1886)" },
  { 1945, "[Historia] Obchodzono Dzień Zwycięstwa w Europie. (1945)" },
  { 1970, "[Kultura] Ukazał się album Let It Be zespołu The Beatles. (1970)" },
  { 1978, "[Nauka] Messner i Habeler weszli na Everest bez dodatkowego tlenu. (1978)" },
  { 1980, "[Nauka] WHO ogłosiła eradykację ospy prawdziwej. (1980)" },
};

// 09.05
const HistoryEvent HIST_130[] = {
  { 1877, "[Historia] Parlament Rumunii ogłosił niepodległość kraju. (1877)" },
  { 1901, "[Świat] Otwarto pierwsze posiedzenie parlamentu Australii. (1901)" },
  { 1950, "[Historia] Robert Schuman przedstawił deklarację integracji europejskiej. (1950)" },
  { 1960, "[Nauka] FDA zatwierdziła pigułkę antykoncepcyjną Enovid. (1960)" },
  { 1987, "[Polska] Rozbił się samolot PLL LOT Tadeusz Kościuszko. (1987)" },
};

// 10.05
const HistoryEvent HIST_131[] = {
  { 1774, "[Historia] Ludwik XVI został królem Francji po śmierci Ludwika XV. (1774)" },
  { 1869, "[Nauka] Ukończono pierwszą transkontynentalną linię kolejową USA. (1869)" },
  { 1933, "[Kultura] W Niemczech naziści publicznie palili zakazane książki. (1933)" },
  { 1940, "[Świat] Niemcy zaatakowały Belgię, Holandię i Luksemburg. (1940)" },
  { 1994, "[Historia] Nelson Mandela został zaprzysiężony na prezydenta RPA. (1994)" },
};

// 11.05
const HistoryEvent HIST_132[] = {
  { 330, "[Historia] Konstantynopol uroczyście zainaugurowano jako Nowy Rzym. (330)" },
  { 1573, "[Polska] Henryk Walezy został ogłoszony królem Polski i Litwy. (1573)" },
  { 1949, "[Świat] Izrael został przyjęty do Organizacji Narodów Zjednoczonych. (1949)" },
  { 1981, "[Kultura] Zmarł Bob Marley, ikona muzyki reggae. (1981)" },
  { 1997, "[Nauka] Deep Blue pokonał Garry'ego Kasparowa w meczu szachowym. (1997)" },
};

// 12.05
const HistoryEvent HIST_133[] = {
  { 1820, "[Nauka] Urodziła się Florence Nightingale, pionierka pielęgniarstwa. (1820)" },
  { 1926, "[Polska] Rozpoczął się przewrót majowy w Warszawie. (1926)" },
  { 1937, "[Kultura] Odbyła się koronacja Jerzego VI w Londynie. (1937)" },
  { 1949, "[Świat] Zakończyła się blokada Berlina Zachodniego. (1949)" },
  { 2008, "[Historia] Trzęsienie ziemi w Syczuanie spowodowało ogromne zniszczenia. (2008)" },
};

// 13.05
const HistoryEvent HIST_134[] = {
  { 1846, "[Świat] Kongres USA wypowiedział wojnę Meksykowi. (1846)" },
  { 1888, "[Świat] W Brazylii podpisano Złote Prawo znoszące niewolnictwo. (1888)" },
  { 1950, "[Kultura] Odbył się pierwszy wyścig mistrzostw świata Formuły 1. (1950)" },
  { 1981, "[Historia] Doszło do zamachu na Jana Pawła II w Watykanie. (1981)" },
  { 1992, "[Nauka] Astronauci Endeavour przechwycili satelitę Intelsat VI. (1992)" },
};

// 14.05
const HistoryEvent HIST_135[] = {
  { 1643, "[Historia] Ludwik XIV został królem Francji po śmierci ojca. (1643)" },
  { 1792, "[Polska] Ogłoszono akt konfederacji targowickiej. (1792)" },
  { 1804, "[Świat] Wyprawa Lewisa i Clarka wyruszyła z Camp Dubois. (1804)" },
  { 1948, "[Historia] Proklamowano powstanie państwa Izrael. (1948)" },
  { 1973, "[Nauka] Wystrzelono Skylab, pierwszą stację kosmiczną USA. (1973)" },
};

// 15.05
const HistoryEvent HIST_136[] = {
  { 1891, "[Historia] Papież Leon XIII ogłosił encyklikę Rerum novarum. (1891)" },
  { 1928, "[Kultura] Odbył się testowy pokaz kreskówki Plane Crazy. (1928)" },
  { 1940, "[Kultura] Bracia McDonald otworzyli restaurację w San Bernardino. (1940)" },
  { 1955, "[Świat] Podpisano traktat przywracający suwerenność Austrii. (1955)" },
  { 1960, "[Nauka] Wystrzelono Korabl-Sputnik 1, próbę statku Wostok. (1960)" },
};

// 16.05
const HistoryEvent HIST_137[] = {
  { 1920, "[Historia] Joanna d'Arc została kanonizowana w Rzymie. (1920)" },
  { 1929, "[Kultura] Odbyła się pierwsza ceremonia rozdania Oscarów. (1929)" },
  { 1966, "[Świat] W Chinach wydano okólnik rozpoczynający rewolucję kulturalną. (1966)" },
  { 1969, "[Nauka] Radziecka sonda Wenera 5 weszła w atmosferę Wenus. (1969)" },
  { 1975, "[Historia] Junko Tabei jako pierwsza kobieta zdobyła Mount Everest. (1975)" },
};

// 17.05
const HistoryEvent HIST_138[] = {
  { 1814, "[Świat] Podpisano konstytucję Norwegii w Eidsvoll. (1814)" },
  { 1865, "[Nauka] Powstała Międzynarodowa Unia Telegraficzna, późniejsza ITU. (1865)" },
  { 1875, "[Kultura] Odbył się pierwszy wyścig Kentucky Derby. (1875)" },
  { 1954, "[Świat] Sąd Najwyższy USA wydał wyrok Brown v. Board. (1954)" },
  { 2004, "[Historia] Massachusetts dopuściło małżeństwa jednopłciowe. (2004)" },
};

// 18.05
const HistoryEvent HIST_139[] = {
  { 1804, "[Świat] Napoleon Bonaparte został ogłoszony cesarzem Francuzów. (1804)" },
  { 1899, "[Historia] Rozpoczęła się pierwsza konferencja pokojowa w Hadze. (1899)" },
  { 1920, "[Polska] Urodził się Karol Wojtyła, późniejszy Jan Paweł II. (1920)" },
  { 1944, "[Polska] II Korpus Polski zdobył ruiny klasztoru Monte Cassino. (1944)" },
  { 1969, "[Nauka] Wystartowała misja Apollo 10. (1969)" },
};

// 19.05
const HistoryEvent HIST_140[] = {
  { 1536, "[Historia] Stracono Annę Boleyn, królową Anglii. (1536)" },
  { 1802, "[Historia] Napoleon ustanowił francuską Legię Honorową. (1802)" },
  { 1919, "[Świat] Mustafa Kemal wylądował w Samsun, zaczynając opór turecki. (1919)" },
  { 1971, "[Nauka] ZSRR wystrzelił sondę Mars 2 w kierunku Marsa. (1971)" },
  { 1991, "[Świat] W Chorwacji odbyło się referendum niepodległościowe. (1991)" },
};

// 20.05
const HistoryEvent HIST_141[] = {
  { 1498, "[Świat] Vasco da Gama dotarł drogą morską do Indii. (1498)" },
  { 1862, "[Świat] Abraham Lincoln podpisał ustawę Homestead Act. (1862)" },
  { 1873, "[Nauka] Levi Strauss i Jacob Davis opatentowali dżinsy z nitami. (1873)" },
  { 1902, "[Świat] Kuba uzyskała formalną niepodległość od USA. (1902)" },
  { 1927, "[Historia] Charles Lindbergh wystartował do samotnego lotu przez Atlantyk. (1927)" },
};

// 21.05
const HistoryEvent HIST_142[] = {
  { 1674, "[Polska] Jan III Sobieski został wybrany królem Polski. (1674)" },
  { 1904, "[Historia] W Paryżu założono FIFA. (1904)" },
  { 1927, "[Świat] Charles Lindbergh zakończył samotny przelot przez Atlantyk. (1927)" },
  { 1932, "[Historia] Amelia Earhart wylądowała po samotnym przelocie przez Atlantyk. (1932)" },
  { 1956, "[Nauka] USA przeprowadziły pierwszy zrzut bomby wodorowej z samolotu. (1956)" },
};

// 22.05
const HistoryEvent HIST_143[] = {
  { 1455, "[Świat] Bitwa pod St Albans rozpoczęła wojnę Dwóch Róż. (1455)" },
  { 1859, "[Kultura] Urodził się Arthur Conan Doyle, twórca Sherlocka Holmesa. (1859)" },
  { 1906, "[Nauka] Bracia Wright otrzymali patent na maszynę latającą. (1906)" },
  { 1960, "[Nauka] W Chile wystąpiło najsilniejsze zmierzone trzęsienie ziemi. (1960)" },
  { 1992, "[Nauka] W Nairobi przyjęto tekst Konwencji o różnorodności biologicznej. (1992)" },
};

// 23.05
const HistoryEvent HIST_144[] = {
  { 1618, "[Historia] Defenestracja praska zapoczątkowała wojnę trzydziestoletnią. (1618)" },
  { 1842, "[Polska] Urodziła się Maria Konopnicka, autorka Roty. (1842)" },
  { 1915, "[Świat] Włochy wypowiedziały wojnę Austro-Węgrom. (1915)" },
  { 1934, "[Historia] Policja zastrzeliła Bonnie Parker i Clyde'a Barrowa. (1934)" },
  { 1949, "[Świat] Weszła w życie Ustawa Zasadnicza RFN. (1949)" },
};

// 24.05
const HistoryEvent HIST_145[] = {
  { 1543, "[Polska] Zmarł Mikołaj Kopernik, autor De revolutionibus. (1543)" },
  { 1844, "[Nauka] Samuel Morse wysłał pierwszy telegram do Baltimore. (1844)" },
  { 1883, "[Świat] Otwarto Most Brookliński w Nowym Jorku. (1883)" },
  { 1941, "[Kultura] Urodził się Bob Dylan, pieśniarz i noblista. (1941)" },
  { 1962, "[Nauka] Scott Carpenter okrążył Ziemię w kapsule Aurora 7. (1962)" },
};

// 25.05
const HistoryEvent HIST_146[] = {
  { 1895, "[Historia] Oscar Wilde został skazany na dwa lata ciężkich robót. (1895)" },
  { 1948, "[Polska] Stracono rotmistrza Witolda Pileckiego. (1948)" },
  { 1963, "[Świat] W Addis Abebie powstała Organizacja Jedności Afrykańskiej. (1963)" },
  { 1977, "[Kultura] Odbyła się premiera filmu Star Wars w USA. (1977)" },
  { 2008, "[Nauka] Lądownik Phoenix osiadł na Marsie. (2008)" },
};

// 26.05
const HistoryEvent HIST_147[] = {
  { 1831, "[Polska] Rozegrała się bitwa pod Ostrołęką. (1831)" },
  { 1896, "[Świat] Koronowano cara Mikołaja II w Moskwie. (1896)" },
  { 1914, "[Kultura] W Krakowie odbyły się pierwsze obchody Dnia Matki w Polsce. (1914)" },
  { 1926, "[Kultura] Urodził się Miles Davis, trębacz jazzowy. (1926)" },
  { 1969, "[Nauka] Apollo 10 powrócił na Ziemię po próbie lądowania księżycowego. (1969)" },
};

// 27.05
const HistoryEvent HIST_148[] = {
  { 1703, "[Świat] Car Piotr I założył Petersburg. (1703)" },
  { 1931, "[Nauka] Auguste Piccard i Paul Kipfer dotarli balonem do stratosfery. (1931)" },
  { 1937, "[Historia] Most Golden Gate otwarto dla pieszych w San Francisco. (1937)" },
  { 1963, "[Kultura] Ukazał się album The Freewheelin' Bob Dylan. (1963)" },
  { 1990, "[Polska] Odbyły się pierwsze wolne wybory samorządowe po 1989 roku. (1990)" },
};

// 28.05
const HistoryEvent HIST_149[] = {
  { -585, "[Historia] Zaćmienie Słońca przerwało bitwę nad rzeką Halys. (585 p.n.e.)" },
  { 1908, "[Kultura] Urodził się Ian Fleming, twórca Jamesa Bonda. (1908)" },
  { 1937, "[Nauka] Utworzono spółkę Volkswagen do budowy auta ludowego. (1937)" },
  { 1961, "[Świat] Artykuł Petera Benensona dał początek Amnesty International. (1961)" },
  { 1981, "[Polska] Zmarł prymas Stefan Wyszyński. (1981)" },
};

// 29.05
const HistoryEvent HIST_150[] = {
  { 1453, "[Świat] Turcy osmańscy zdobyli Konstantynopol. (1453)" },
  { 1913, "[Kultura] W Paryżu odbyła się premiera Święta wiosny Strawińskiego. (1913)" },
  { 1919, "[Nauka] Podczas zaćmienia testowano ogólną teorię względności Einsteina. (1919)" },
  { 1953, "[Historia] Edmund Hillary i Tenzing Norgay zdobyli Mount Everest. (1953)" },
  { 1985, "[Historia] Doszło do tragedii na stadionie Heysel w Brukseli. (1985)" },
};

// 30.05
const HistoryEvent HIST_151[] = {
  { 1431, "[Historia] Spalono Joannę d'Arc na stosie w Rouen. (1431)" },
  { 1911, "[Historia] Odbył się pierwszy wyścig Indianapolis 500. (1911)" },
  { 1913, "[Świat] Podpisano traktat londyński kończący I wojnę bałkańską. (1913)" },
  { 1922, "[Kultura] W Waszyngtonie poświęcono pomnik Lincolna. (1922)" },
  { 1971, "[Nauka] Wystrzelono sondę Mariner 9 w kierunku Marsa. (1971)" },
};

// 31.05
const HistoryEvent HIST_152[] = {
  { 1859, "[Nauka] Wielki Zegar w wieży Westminsterskiej zaczął odmierzać czas. (1859)" },
  { 1911, "[Świat] W Belfaście zwodowano transatlantyk RMS Titanic. (1911)" },
  { 1926, "[Polska] Zgromadzenie Narodowe wybrało Piłsudskiego, lecz odmówił. (1926)" },
  { 1961, "[Świat] Republika Południowej Afryki stała się republiką. (1961)" },
  { 1970, "[Historia] Trzęsienie w Peru wywołało lawinę spod Huascaránu. (1970)" },
};

// 01.06
const HistoryEvent HIST_153[] = {
  { 1792, "[Świat] Kentucky zostało 15. stanem Stanów Zjednoczonych. (1792)" },
  { 1926, "[Kultura] Urodziła się Marilyn Monroe. (1926)" },
  { 1962, "[Historia] Adolf Eichmann został stracony w Izraelu. (1962)" },
  { 1967, "[Kultura] Wydano album Sgt. Pepper's Lonely Hearts Club Band. (1967)" },
  { 1980, "[Nauka] Rozpoczęła nadawanie telewizyjna sieć informacyjna CNN. (1980)" },
};

// 02.06
const HistoryEvent HIST_154[] = {
  { 1946, "[Świat] We Włoszech odbyło się referendum za republiką zamiast monarchii. (1946)" },
  { 1953, "[Historia] Koronowano Elżbietę II w opactwie westminsterskim. (1953)" },
  { 1966, "[Nauka] Sonda Surveyor 1 miękko wylądowała na Księżycu. (1966)" },
  { 1979, "[Polska] Jan Paweł II rozpoczął pierwszą pielgrzymkę do Polski. (1979)" },
  { 1989, "[Kultura] W USA odbyła się premiera filmu Stowarzyszenie Umarłych Poetów. (1989)" },
};

// 03.06
const HistoryEvent HIST_155[] = {
  { 1621, "[Świat] Holenderska Kompania Zachodnioindyjska otrzymała kartę. (1621)" },
  { 1888, "[Kultura] W San Francisco Examiner ukazał się wiersz Casey at the Bat. (1888)" },
  { 1924, "[Kultura] Zmarł Franz Kafka, autor Procesu. (1924)" },
  { 1963, "[Historia] Zmarł papież Jan XXIII. (1963)" },
  { 1965, "[Nauka] Edward White odbył pierwszy amerykański spacer kosmiczny. (1965)" },
};

// 04.06
const HistoryEvent HIST_156[] = {
  { 1783, "[Nauka] Bracia Montgolfier pokazali publicznie balon na gorące powietrze. (1783)" },
  { 1919, "[Historia] Kongres USA przyjął 19. poprawkę o prawach wyborczych kobiet. (1919)" },
  { 1942, "[Historia] Rozpoczęła się bitwa o Midway na Pacyfiku. (1942)" },
  { 1989, "[Polska] Odbyły się wybory czerwcowe, przełom w upadku komunizmu. (1989)" },
  { 1989, "[Świat] W Pekinie wojsko stłumiło protesty na placu Tiananmen. (1989)" },
};

// 05.06
const HistoryEvent HIST_157[] = {
  { 1257, "[Polska] Bolesław Wstydliwy lokował Kraków na prawie magdeburskim. (1257)" },
  { 1898, "[Kultura] Urodził się Federico García Lorca, poeta i dramaturg. (1898)" },
  { 1967, "[Świat] Rozpoczęła się wojna sześciodniowa na Bliskim Wschodzie. (1967)" },
  { 1972, "[Nauka] W Sztokholmie rozpoczęła się konferencja ONZ o środowisku. (1972)" },
  { 1981, "[Nauka] CDC opisało przypadki choroby później nazwanej AIDS. (1981)" },
};

// 06.06
const HistoryEvent HIST_158[] = {
  { 1799, "[Kultura] Urodził się Aleksandr Puszkin, klasyk literatury rosyjskiej. (1799)" },
  { 1933, "[Kultura] Otwarto pierwsze kino samochodowe drive-in w USA. (1933)" },
  { 1944, "[Historia] D-Day: alianci wylądowali w Normandii. (1944)" },
  { 1971, "[Nauka] Wystartował Sojuz 11, misja do stacji Salut 1. (1971)" },
  { 1982, "[Świat] Izrael rozpoczął operację Pokój dla Galilei w Libanie. (1982)" },
};

// 07.06
const HistoryEvent HIST_159[] = {
  { 1494, "[Historia] Podpisano traktat w Tordesillas. (1494)" },
  { 1917, "[Kultura] Urodził się Dean Martin, piosenkarz i aktor. (1917)" },
  { 1954, "[Nauka] Zmarł Alan Turing, pionier informatyki. (1954)" },
  { 1965, "[Świat] Sąd Najwyższy USA wydał wyrok Griswold v. Connecticut. (1965)" },
  { 1981, "[Historia] Izrael zbombardował iracki reaktor jądrowy Osirak. (1981)" },
};

// 08.06
const HistoryEvent HIST_160[] = {
  { 1783, "[Świat] Rozpoczęła się erupcja wulkanu Laki na Islandii. (1783)" },
  { 1789, "[Historia] James Madison przedstawił poprawki znane jako Bill of Rights. (1789)" },
  { 1949, "[Kultura] Wydano powieść Rok 1984 George'a Orwella. (1949)" },
  { 1967, "[Historia] Izrael zaatakował USS Liberty podczas wojny sześciodniowej. (1967)" },
  { 2004, "[Nauka] Zaobserwowano tranzyt Wenus widoczny z wielu części świata. (2004)" },
};

// 09.06
const HistoryEvent HIST_161[] = {
  { 1595, "[Polska] Urodził się Władysław IV Waza, król Polski. (1595)" },
  { 1815, "[Historia] Podpisano Akt końcowy kongresu wiedeńskiego. (1815)" },
  { 1870, "[Kultura] Zmarł Charles Dickens, autor Olivera Twista. (1870)" },
  { 1934, "[Kultura] Kaczor Donald zadebiutował w filmie The Wise Little Hen. (1934)" },
  { 1973, "[Historia] Secretariat wygrał Belmont Stakes i Potrójną Koronę. (1973)" },
};

// 10.06
const HistoryEvent HIST_162[] = {
  { 1190, "[Historia] Fryderyk Barbarossa utonął podczas III wyprawy krzyżowej. (1190)" },
  { 1940, "[Historia] Włochy wypowiedziały wojnę Francji i Wielkiej Brytanii. (1940)" },
  { 1942, "[Świat] Niemcy zniszczyli czeską wieś Lidice. (1942)" },
  { 1967, "[Historia] Zakończyła się wojna sześciodniowa na Bliskim Wschodzie. (1967)" },
  { 2003, "[Nauka] NASA wystrzeliła łazik marsjański Spirit. (2003)" },
};

// 11.06
const HistoryEvent HIST_163[] = {
  { 1770, "[Nauka] Statek Endeavour Cooka osiadł na rafie Wielkiej Rafy Koralowej. (1770)" },
  { 1776, "[Historia] Kongres powołał Komitet Pięciu do Deklaracji Niepodległości. (1776)" },
  { 1955, "[Świat] W katastrofie Le Mans zginęły 84 osoby. (1955)" },
  { 1982, "[Kultura] Film E.T. wszedł do kin w Stanach Zjednoczonych. (1982)" },
  { 2002, "[Nauka] Kongres USA uhonorował Antonia Meucciego jako pioniera telefonu. (2002)" },
};

// 12.06
const HistoryEvent HIST_164[] = {
  { 1776, "[Historia] Przyjęto Wirgińską Deklarację Praw. (1776)" },
  { 1898, "[Świat] Filipiny ogłosiły niepodległość od Hiszpanii. (1898)" },
  { 1929, "[Kultura] Urodziła się Anne Frank, autorka słynnego dziennika. (1929)" },
  { 1967, "[Nauka] Wystrzelono sondę Wenera 4 w kierunku Wenus. (1967)" },
  { 1987, "[Historia] Ronald Reagan wygłosił przemówienie Tear down this wall. (1987)" },
};

// 13.06
const HistoryEvent HIST_165[] = {
  { 1611, "[Polska] Wojska Rzeczypospolitej zdobyły Smoleńsk. (1611)" },
  { 1865, "[Kultura] Urodził się William Butler Yeats, poeta irlandzki. (1865)" },
  { 1966, "[Historia] Sąd Najwyższy USA wydał wyrok Miranda v. Arizona. (1966)" },
  { 1971, "[Historia] New York Times zaczął publikować Pentagon Papers. (1971)" },
  { 1983, "[Nauka] Pioneer 10 przekroczył orbitę Neptuna. (1983)" },
};

// 14.06
const HistoryEvent HIST_166[] = {
  { 1777, "[Świat] Kongres USA przyjął wzór flagi z gwiazdami i pasami. (1777)" },
  { 1940, "[Polska] Pierwszy transport polskich więźniów dotarł do Auschwitz. (1940)" },
  { 1951, "[Nauka] UNIVAC I przekazano amerykańskiemu Biuru Spisowemu. (1951)" },
  { 1982, "[Historia] Wojska argentyńskie skapitulowały na Falklandach. (1982)" },
  { 2004, "[Nauka] Po raz pierwszy obchodzono Światowy Dzień Krwiodawcy. (2004)" },
};

// 15.06
const HistoryEvent HIST_167[] = {
  { 1215, "[Historia] Król Jan bez Ziemi zatwierdził Magna Carta. (1215)" },
  { 1846, "[Świat] USA i Wielka Brytania podpisały traktat o Oregonie. (1846)" },
  { 1904, "[Historia] Parowiec General Slocum spłonął na East River. (1904)" },
  { 1919, "[Nauka] Alcock i Brown zakończyli pierwszy lot non stop przez Atlantyk. (1919)" },
  { 1977, "[Świat] W Hiszpanii odbyły się pierwsze wolne wybory po dyktaturze. (1977)" },
};

// 16.06
const HistoryEvent HIST_168[] = {
  { 1815, "[Historia] Napoleon wygrał bitwę pod Ligny z Prusakami. (1815)" },
  { 1903, "[Nauka] Założono Ford Motor Company w Detroit. (1903)" },
  { 1963, "[Nauka] Walentina Tierieszkowa wystartowała jako pierwsza kobieta w kosmos. (1963)" },
  { 1976, "[Świat] W Soweto rozpoczął się bunt uczniów przeciw apartheidowi. (1976)" },
  { 2012, "[Nauka] Chiny wysłały załogową misję Shenzhou 9. (2012)" },
};

// 17.06
const HistoryEvent HIST_169[] = {
  { 1696, "[Polska] Zmarł Jan III Sobieski, zwycięzca spod Wiednia. (1696)" },
  { 1885, "[Świat] Do Nowego Jorku przybyła Statua Wolności w częściach. (1885)" },
  { 1944, "[Świat] Islandia ogłosiła republikę i niezależność od Danii. (1944)" },
  { 1972, "[Historia] Zatrzymano włamywaczy w kompleksie Watergate. (1972)" },
  { 1994, "[Nauka] W Paryżu przyjęto Konwencję ONZ przeciw pustynnieniu. (1994)" },
};

// 18.06
const HistoryEvent HIST_170[] = {
  { 1792, "[Polska] Wojska polskie wygrały bitwę pod Zieleńcami. (1792)" },
  { 1815, "[Historia] Bitwa pod Waterloo zakończyła epokę Napoleona. (1815)" },
  { 1940, "[Świat] Charles de Gaulle wygłosił apel 18 czerwca. (1940)" },
  { 1942, "[Kultura] Urodził się Paul McCartney. (1942)" },
  { 1983, "[Nauka] Sally Ride została pierwszą Amerykanką w kosmosie. (1983)" },
};

// 19.06
const HistoryEvent HIST_171[] = {
  { 1846, "[Kultura] W Hoboken rozegrano mecz baseballu według nowych zasad. (1846)" },
  { 1865, "[Historia] W Galveston ogłoszono wolność zniewolonych ludzi. (1865)" },
  { 1867, "[Świat] W Meksyku stracono cesarza Maksymiliana I. (1867)" },
  { 1976, "[Nauka] Sonda Viking 1 weszła na orbitę Marsa. (1976)" },
  { 1978, "[Kultura] Ukazał się pierwszy komiks Garfield. (1978)" },
};

// 20.06
const HistoryEvent HIST_172[] = {
  { 1782, "[Świat] Kongres Kontynentalny przyjął Wielką Pieczęć USA. (1782)" },
  { 1837, "[Świat] Królowa Wiktoria objęła tron Wielkiej Brytanii. (1837)" },
  { 1922, "[Polska] Wojsko Polskie wkroczyło do Katowic. (1922)" },
  { 1975, "[Kultura] Film Szczęki trafił do szerokiej dystrybucji w USA. (1975)" },
  { 1990, "[Nauka] Odkryto Eurekę, pierwszą planetoidę trojańską Marsa. (1990)" },
};

// 21.06
const HistoryEvent HIST_173[] = {
  { 1788, "[Historia] New Hampshire ratyfikowało Konstytucję USA. (1788)" },
  { 1942, "[Historia] Wojska Osi zdobyły Tobruk w Afryce Północnej. (1942)" },
  { 1948, "[Kultura] Columbia Records zaprezentowała płytę długogrającą LP. (1948)" },
  { 1982, "[Kultura] Urodził się książę William. (1982)" },
  { 2004, "[Nauka] SpaceShipOne wykonał prywatny lot suborbitalny. (2004)" },
};

// 22.06
const HistoryEvent HIST_174[] = {
  { 1633, "[Nauka] Galileusz został zmuszony do odwołania heliocentryzmu. (1633)" },
  { 1792, "[Polska] Król ustanowił Order Virtuti Militari. (1792)" },
  { 1940, "[Świat] Francja podpisała zawieszenie broni z Niemcami. (1940)" },
  { 1941, "[Historia] Niemcy zaatakowały ZSRR, rozpoczynając Barbarossę. (1941)" },
  { 1978, "[Nauka] Odkryto Charona, największy księżyc Plutona. (1978)" },
};

// 23.06
const HistoryEvent HIST_175[] = {
  { 1868, "[Nauka] Christopher Sholes opatentował maszynę do pisania. (1868)" },
  { 1894, "[Historia] W Paryżu powstał Międzynarodowy Komitet Olimpijski. (1894)" },
  { 1912, "[Kultura] Urodził się Alan Turing, matematyk i kryptolog. (1912)" },
  { 1961, "[Nauka] Wszedł w życie Traktat antarktyczny. (1961)" },
  { 2016, "[Świat] Brytyjczycy zagłosowali za wyjściem z Unii Europejskiej. (2016)" },
};

// 24.06
const HistoryEvent HIST_176[] = {
  { 972, "[Polska] Wojska Mieszka I wygrały bitwę pod Cedynią. (972)" },
  { 1314, "[Historia] Szkoci zwyciężyli Anglików pod Bannockburn. (1314)" },
  { 1812, "[Świat] Napoleon rozpoczął wyprawę na Rosję. (1812)" },
  { 1901, "[Kultura] Otwarto pierwszą paryską wystawę Pabla Picassa. (1901)" },
  { 1947, "[Nauka] Kenneth Arnold zgłosił obserwację latających spodków. (1947)" },
};

// 25.06
const HistoryEvent HIST_177[] = {
  { 1950, "[Historia] Rozpoczęła się wojna koreańska. (1950)" },
  { 1976, "[Polska] Wybuchły protesty robotnicze w Radomiu, Ursusie i Płocku. (1976)" },
  { 1991, "[Świat] Słowenia i Chorwacja ogłosiły niepodległość. (1991)" },
  { 1997, "[Nauka] Statek Progress zderzył się ze stacją Mir. (1997)" },
  { 2009, "[Kultura] Zmarł Michael Jackson, ikona muzyki pop. (2009)" },
};

// 26.06
const HistoryEvent HIST_178[] = {
  { 1295, "[Polska] Przemysł II został koronowany na króla Polski. (1295)" },
  { 1945, "[Historia] Podpisano Kartę Narodów Zjednoczonych. (1945)" },
  { 1960, "[Świat] Madagaskar uzyskał niepodległość od Francji. (1960)" },
  { 1974, "[Nauka] Po raz pierwszy zeskanowano kod kreskowy UPC. (1974)" },
  { 1997, "[Kultura] Wydano pierwszą powieść o Harrym Potterze. (1997)" },
};

// 27.06
const HistoryEvent HIST_179[] = {
  { 1697, "[Polska] August II Mocny został wybrany królem Polski. (1697)" },
  { 1905, "[Historia] Rozpoczął się bunt na pancerniku Potiomkin. (1905)" },
  { 1950, "[Świat] USA zdecydowały o wsparciu Korei Południowej. (1950)" },
  { 1967, "[Nauka] W Londynie uruchomiono pierwszy bankomat Barclaysa. (1967)" },
  { 1977, "[Świat] Dżibuti uzyskało niepodległość od Francji. (1977)" },
};

// 28.06
const HistoryEvent HIST_180[] = {
  { 1577, "[Kultura] Urodził się Peter Paul Rubens, malarz baroku. (1577)" },
  { 1914, "[Historia] Zamach w Sarajewie stał się iskrą I wojny światowej. (1914)" },
  { 1919, "[Świat] Podpisano traktat wersalski kończący I wojnę światową. (1919)" },
  { 1956, "[Polska] Rozpoczął się Poznański Czerwiec 1956. (1956)" },
  { 1969, "[Historia] W Nowym Jorku rozpoczęły się zamieszki Stonewall. (1969)" },
};

// 29.06
const HistoryEvent HIST_181[] = {
  { 1613, "[Kultura] Spłonął teatr Globe w Londynie. (1613)" },
  { 1913, "[Historia] Rozpoczęła się II wojna bałkańska. (1913)" },
  { 1956, "[Nauka] USA uchwaliły ustawę o autostradach międzystanowych. (1956)" },
  { 1995, "[Nauka] Wahadłowiec Atlantis połączył się ze stacją Mir. (1995)" },
  { 2007, "[Nauka] Do sprzedaży trafił pierwszy iPhone. (2007)" },
};

// 30.06
const HistoryEvent HIST_182[] = {
  { 1908, "[Historia] Katastrofa tunguska powaliła las na Syberii. (1908)" },
  { 1936, "[Kultura] Ukazała się powieść Przeminęło z wiatrem. (1936)" },
  { 1946, "[Polska] Odbyło się referendum ludowe 3 razy tak. (1946)" },
  { 1960, "[Świat] Kongo uzyskało niepodległość od Belgii. (1960)" },
  { 1971, "[Nauka] Załoga Sojuza 11 zginęła podczas powrotu na Ziemię. (1971)" },
};

// 01.07
const HistoryEvent HIST_183[] = {
  { 1569, "[Polska] Podpisano unię lubelską, tworząc Rzeczpospolitą Obojga Narodów. (1569)" },
  { 1858, "[Nauka] Przedstawiono prace Darwina i Wallace'a o doborze naturalnym. (1858)" },
  { 1867, "[Świat] Powstało Dominium Kanady po wejściu w życie ustawy BNA. (1867)" },
  { 1979, "[Kultura] Sony wprowadziło do sprzedaży odtwarzacz Walkman. (1979)" },
  { 1997, "[Historia] Hongkong przekazano Chinom po brytyjskiej administracji. (1997)" },
};

// 02.07
const HistoryEvent HIST_184[] = {
  { 1776, "[Historia] Kongres Kontynentalny przegłosował niepodległość kolonii. (1776)" },
  { 1900, "[Nauka] Sterowiec Zeppelin LZ 1 odbył pierwszy lot nad Jeziorem Bodeńskim. (1900)" },
  { 1937, "[Historia] Amelia Earhart zaginęła podczas lotu nad Pacyfikiem. (1937)" },
  { 1961, "[Kultura] Zmarł Ernest Hemingway, noblista i autor Starego człowieka i morza. (1961)" },
  { 1964, "[Świat] Lyndon B. Johnson podpisał Civil Rights Act w USA. (1964)" },
};

// 03.07
const HistoryEvent HIST_185[] = {
  { 1608, "[Świat] Samuel de Champlain założył Québec nad Rzeką Świętego Wawrzyńca. (1608)" },
  { 1886, "[Nauka] Karl Benz zaprezentował publicznie Patent-Motorwagen. (1886)" },
  { 1940, "[Historia] Brytyjczycy zaatakowali flotę francuską pod Mers-el-Kébir. (1940)" },
  { 1971, "[Kultura] Zmarł Jim Morrison, wokalista zespołu The Doors. (1971)" },
  { 1988, "[Historia] USS Vincennes zestrzelił irański samolot pasażerski. (1988)" },
};

// 04.07
const HistoryEvent HIST_186[] = {
  { 1776, "[Historia] Przyjęto Deklarację Niepodległości Stanów Zjednoczonych. (1776)" },
  { 1802, "[Świat] Otwarto akademię wojskową West Point w USA. (1802)" },
  { 1865, "[Kultura] Wydano Alicję w Krainie Czarów Lewisa Carrolla. (1865)" },
  { 1943, "[Polska] W katastrofie gibraltarskiej zginął gen. Władysław Sikorski. (1943)" },
  { 1997, "[Nauka] Sonda Mars Pathfinder wylądowała na Marsie. (1997)" },
};

// 05.07
const HistoryEvent HIST_187[] = {
  { 1687, "[Nauka] Ukazało się Principia Mathematica Isaaca Newtona. (1687)" },
  { 1811, "[Świat] Wenezuela ogłosiła niepodległość od Hiszpanii. (1811)" },
  { 1943, "[Historia] Rozpoczęła się bitwa na Łuku Kurskim. (1943)" },
  { 1946, "[Kultura] Zaprezentowano bikini, nowy dwuczęściowy strój kąpielowy. (1946)" },
  { 1996, "[Nauka] Urodziła się owca Dolly, pierwszy sklonowany ssak z dorosłej komórki. (1996)" },
};

// 06.07
const HistoryEvent HIST_188[] = {
  { 1415, "[Historia] Jan Hus został spalony na stosie w Konstancji. (1415)" },
  { 1885, "[Nauka] Louis Pasteur podał pierwszą szczepionkę przeciw wściekliźnie. (1885)" },
  { 1944, "[Historia] Pożar cyrku w Hartford zabił ponad 160 osób. (1944)" },
  { 1957, "[Kultura] John Lennon poznał Paula McCartneya w Liverpoolu. (1957)" },
  { 1964, "[Świat] Malawi uzyskało niepodległość od Wielkiej Brytanii. (1964)" },
};

// 07.07
const HistoryEvent HIST_189[] = {
  { 1572, "[Polska] Zmarł Zygmunt II August, ostatni król z dynastii Jagiellonów. (1572)" },
  { 1898, "[Świat] USA przyjęły rezolucję Newlandsa o aneksji Hawajów. (1898)" },
  { 1937, "[Historia] Incydent na moście Marco Polo rozpoczął wojnę japońsko-chińską. (1937)" },
  { 1985, "[Kultura] Boris Becker wygrał Wimbledon jako najmłodszy mistrz turnieju. (1985)" },
  { 2005, "[Świat] Zamachy terrorystyczne w Londynie zabiły 52 osoby. (2005)" },
};

// 08.07
const HistoryEvent HIST_190[] = {
  { 1497, "[Historia] Vasco da Gama wypłynął z Lizbony w drogę do Indii. (1497)" },
  { 1621, "[Kultura] Urodził się Jean de La Fontaine, autor bajek. (1621)" },
  { 1709, "[Świat] Bitwa pod Połtawą zatrzymała potęgę Szwecji Karola XII. (1709)" },
  { 1889, "[Kultura] Ukazał się pierwszy numer The Wall Street Journal. (1889)" },
  { 2011, "[Nauka] Wahadłowiec Atlantis wystartował w ostatnią misję programu Shuttle. (2011)" },
};

// 09.07
const HistoryEvent HIST_191[] = {
  { 1807, "[Polska] Traktat tylżycki z Prusami utworzył Księstwo Warszawskie. (1807)" },
  { 1816, "[Świat] Argentyna ogłosiła niepodległość w San Miguel de Tucumán. (1816)" },
  { 1877, "[Kultura] Rozpoczął się pierwszy turniej tenisowy w Wimbledonie. (1877)" },
  { 1955, "[Nauka] Ogłoszono manifest Russella-Einsteina przeciw broni jądrowej. (1955)" },
  { 2006, "[Świat] Włosi zostali mistrzami świata w piłce nożnej w Berlinie. (2006)" },
};

// 10.07
const HistoryEvent HIST_192[] = {
  { 1925, "[Kultura] Rozpoczął się proces nauczyciela Johna Scopesa w Tennessee. (1925)" },
  { 1940, "[Historia] Rozpoczęła się bitwa o Anglię. (1940)" },
  { 1941, "[Polska] W Jedwabnem dokonano pogromu miejscowych Żydów. (1941)" },
  { 1962, "[Nauka] Wystrzelono Telstar 1, aktywnego satelitę łącznościowego. (1962)" },
  { 1973, "[Świat] Bahamy uzyskały niepodległość od Wielkiej Brytanii. (1973)" },
};

// 11.07
const HistoryEvent HIST_193[] = {
  { 1893, "[Nauka] Kōkichi Mikimoto uzyskał pierwszą hodowlaną perłę półkulistą. (1893)" },
  { 1943, "[Polska] Nastąpiła kulminacja rzezi wołyńskiej ludności polskiej. (1943)" },
  { 1960, "[Kultura] Wydano powieść Zabić drozda Harper Lee. (1960)" },
  { 1979, "[Nauka] Skylab spłonął w atmosferze, a szczątki spadły nad Australią. (1979)" },
  { 1995, "[Świat] Rozpoczęła się masakra w Srebrenicy. (1995)" },
};

// 12.07
const HistoryEvent HIST_194[] = {
  { 1854, "[Kultura] Urodził się George Eastman, twórca firmy Kodak. (1854)" },
  { 1904, "[Kultura] Urodził się Pablo Neruda, chilijski poeta i noblista. (1904)" },
  { 1962, "[Kultura] The Rolling Stones zagrali pierwszy koncert w Londynie. (1962)" },
  { 1979, "[Świat] Kiribati uzyskało niepodległość od Wielkiej Brytanii. (1979)" },
  { 1998, "[Kultura] Francja wygrała finał mundialu na stadionie Saint-Denis. (1998)" },
};

// 13.07
const HistoryEvent HIST_195[] = {
  { 1793, "[Historia] Charlotte Corday zabiła Jeana-Paula Marata w Paryżu. (1793)" },
  { 1863, "[Historia] W Nowym Jorku wybuchły zamieszki przeciw poborowi. (1863)" },
  { 1943, "[Polska] Niemcy zakończyli pacyfikację wsi Michniów. (1943)" },
  { 1977, "[Świat] Awaria prądu pogrążyła Nowy Jork w całonocnym chaosie. (1977)" },
  { 1985, "[Kultura] Odbyły się koncerty Live Aid w Londynie i Filadelfii. (1985)" },
};

// 14.07
const HistoryEvent HIST_196[] = {
  { 1789, "[Historia] Zdobycie Bastylii stało się symbolem rewolucji francuskiej. (1789)" },
  { 1798, "[Historia] W USA uchwalono Sedition Act ograniczający krytykę władz. (1798)" },
  { 1913, "[Kultura] Urodził się Gerald Ford, późniejszy prezydent USA. (1913)" },
  { 1958, "[Świat] W Iraku obalono monarchię Haszymidów. (1958)" },
  { 2015, "[Nauka] Sonda New Horizons przeleciała obok Plutona. (2015)" },
};

// 15.07
const HistoryEvent HIST_197[] = {
  { 1099, "[Świat] Krzyżowcy zdobyli Jerozolimę podczas I krucjaty. (1099)" },
  { 1410, "[Polska] Bitwa pod Grunwaldem zakończyła się zwycięstwem nad Krzyżakami. (1410)" },
  { 1606, "[Kultura] Urodził się Rembrandt, malarz holenderskiego baroku. (1606)" },
  { 1799, "[Historia] Odkryto Kamień z Rosetty, klucz do hieroglifów. (1799)" },
  { 1975, "[Nauka] Misja Apollo-Sojuz rozpoczęła wspólny lot USA i ZSRR. (1975)" },
};

// 16.07
const HistoryEvent HIST_198[] = {
  { 1054, "[Historia] Legaci papiescy złożyli bullę ekskomuniki w Hagii Sophii. (1054)" },
  { 1212, "[Historia] Chrześcijańskie wojska wygrały bitwę pod Las Navas de Tolosa. (1212)" },
  { 1945, "[Nauka] Test Trinity był pierwszą eksplozją bomby atomowej. (1945)" },
  { 1951, "[Kultura] Wydano powieść Buszujący w zbożu J.D. Salingera. (1951)" },
  { 1969, "[Historia] Wystartowała misja Apollo 11 na Księżyc. (1969)" },
};

// 17.07
const HistoryEvent HIST_199[] = {
  { 1918, "[Historia] Rodzinę carską Romanowów zamordowano w Jekaterynburgu. (1918)" },
  { 1942, "[Historia] Rozpoczęła się bitwa stalingradzka. (1942)" },
  { 1955, "[Kultura] Uroczyście otwarto Disneyland dla zaproszonych gości. (1955)" },
  { 1975, "[Nauka] Apollo i Sojuz połączyły się na orbicie. (1975)" },
  { 1998, "[Świat] Przyjęto Statut Rzymski, podstawę trybunału karnego. (1998)" },
};

// 18.07
const HistoryEvent HIST_200[] = {
  { 64, "[Świat] Rozpoczął się wielki pożar Rzymu. (64)" },
  { 1817, "[Kultura] Zmarła Jane Austen, autorka Dumy i uprzedzenia. (1817)" },
  { 1918, "[Historia] Urodził się Nelson Mandela, późniejszy prezydent RPA. (1918)" },
  { 1944, "[Polska] Żołnierze 2 Korpusu zdobyli Ankonę we Włoszech. (1944)" },
  { 1968, "[Nauka] Założono firmę Intel. (1968)" },
};

// 19.07
const HistoryEvent HIST_201[] = {
  { 1843, "[Świat] Zwodowano SS Great Britain, nowatorski parowiec oceaniczny. (1843)" },
  { 1870, "[Historia] Francja wypowiedziała wojnę Prusom. (1870)" },
  { 1947, "[Kultura] Urodził się Brian May, gitarzysta Queen i astrofizyk. (1947)" },
  { 1952, "[Historia] Otwarto Letnie Igrzyska Olimpijskie w Helsinkach. (1952)" },
  { 1989, "[Polska] Wybrano Wojciecha Jaruzelskiego na prezydenta PRL. (1989)" },
};

// 20.07
const HistoryEvent HIST_202[] = {
  { 1903, "[Nauka] Ford Motor Company wysłała pierwszy samochód do klienta. (1903)" },
  { 1937, "[Nauka] Zmarł Guglielmo Marconi, pionier radia. (1937)" },
  { 1944, "[Historia] Niemieccy spiskowcy przeprowadzili zamach na Hitlera. (1944)" },
  { 1969, "[Historia] Apollo 11 wylądował na Księżycu. (1969)" },
  { 1976, "[Nauka] Lądownik Viking 1 osiadł na Marsie. (1976)" },
};

// 21.07
const HistoryEvent HIST_203[] = {
  { 365, "[Świat] Trzęsienie ziemi koło Krety wywołało niszczące tsunami. (365)" },
  { 1831, "[Historia] Leopold I złożył przysięgę jako pierwszy król Belgów. (1831)" },
  { 1899, "[Kultura] Urodził się Ernest Hemingway, pisarz i noblista. (1899)" },
  { 1969, "[Nauka] Neil Armstrong i Buzz Aldrin rozpoczęli spacer po Księżycu. (1969)" },
  { 1983, "[Nauka] Na stacji Wostok zanotowano rekordowo niską temperaturę. (1983)" },
};

// 22.07
const HistoryEvent HIST_204[] = {
  { 1862, "[Historia] Lincoln pokazał gabinetowi szkic Proklamacji Emancypacji. (1862)" },
  { 1933, "[Nauka] Wiley Post zakończył pierwszy samotny lot dookoła świata. (1933)" },
  { 1942, "[Polska] Niemcy rozpoczęli Wielką Akcję w getcie warszawskim. (1942)" },
  { 1944, "[Polska] Ogłoszono Manifest PKWN, symbol Polski Ludowej. (1944)" },
  { 1962, "[Nauka] Mariner 1 wystartował i został zniszczony po awarii. (1962)" },
};

// 23.07
const HistoryEvent HIST_205[] = {
  { 1829, "[Nauka] William Burt opatentował typographer, przodka maszyny do pisania. (1829)" },
  { 1888, "[Kultura] Urodził się Raymond Chandler, twórca prozy noir. (1888)" },
  { 1944, "[Polska] Wyzwolono niemiecki obóz koncentracyjny Majdanek. (1944)" },
  { 1952, "[Świat] Weszła w życie Europejska Wspólnota Węgla i Stali. (1952)" },
  { 1995, "[Nauka] Odkryto kometę Hale'a-Boppa. (1995)" },
};

// 24.07
const HistoryEvent HIST_206[] = {
  { 1911, "[Historia] Hiram Bingham dotarł do ruin Machu Picchu. (1911)" },
  { 1920, "[Polska] Utworzono Rząd Obrony Narodowej Wincentego Witosa. (1920)" },
  { 1923, "[Świat] Podpisano traktat lozański ustalający granice Turcji. (1923)" },
  { 1969, "[Nauka] Załoga Apollo 11 bezpiecznie wodowała na Ziemi. (1969)" },
  { 1980, "[Kultura] Zmarł Peter Sellers, aktor znany z Różowej Pantery. (1980)" },
};

// 25.07
const HistoryEvent HIST_207[] = {
  { 306, "[Historia] Konstantyn Wielki został ogłoszony cesarzem w Yorku. (306)" },
  { 1655, "[Polska] Rozpoczął się potop szwedzki w Rzeczypospolitej. (1655)" },
  { 1894, "[Historia] Urodził się Gavrilo Princip, zamachowiec z Sarajewa. (1894)" },
  { 1909, "[Nauka] Louis Blériot przeleciał samolotem nad kanałem La Manche. (1909)" },
  { 1978, "[Nauka] Urodziła się Louise Brown, pierwsze dziecko z in vitro. (1978)" },
};

// 26.07
const HistoryEvent HIST_208[] = {
  { 1400, "[Polska] Odnowiono Akademię Krakowską dzięki fundacji Jadwigi. (1400)" },
  { 1943, "[Kultura] Urodził się Mick Jagger, wokalista The Rolling Stones. (1943)" },
  { 1945, "[Historia] Ogłoszono deklarację poczdamską wobec Japonii. (1945)" },
  { 1953, "[Świat] Atak na koszary Moncada rozpoczął rewolucję kubańską. (1953)" },
  { 1963, "[Nauka] Wystrzelono Syncom 2, pierwszego satelitę geosynchronicznego. (1963)" },
};

// 27.07
const HistoryEvent HIST_209[] = {
  { 1890, "[Kultura] Vincent van Gogh postrzelił się; zmarł dwa dni później. (1890)" },
  { 1940, "[Kultura] Królik Bugs zadebiutował w filmie A Wild Hare. (1940)" },
  { 1944, "[Polska] Lwów został zajęty po walkach AK i Armii Czerwonej. (1944)" },
  { 1953, "[Historia] Rozejm w Panmundżomie zakończył walki wojny koreańskiej. (1953)" },
  { 2012, "[Świat] Otwarto Letnie Igrzyska Olimpijskie w Londynie. (2012)" },
};

// 28.07
const HistoryEvent HIST_210[] = {
  { 1741, "[Kultura] Zmarł Antonio Vivaldi, kompozytor baroku. (1741)" },
  { 1821, "[Świat] Peru ogłosiło niepodległość od Hiszpanii. (1821)" },
  { 1866, "[Kultura] Urodziła się Beatrix Potter, autorka Piotrusia Królika. (1866)" },
  { 1914, "[Historia] Austro-Węgry wypowiedziały wojnę Serbii. (1914)" },
  { 1993, "[Polska] Podpisano konkordat między Polską a Stolicą Apostolską. (1993)" },
};

// 29.07
const HistoryEvent HIST_211[] = {
  { 1836, "[Świat] Uroczyście otwarto Łuk Triumfalny w Paryżu. (1836)" },
  { 1948, "[Historia] Otwarto letnie igrzyska olimpijskie w Londynie. (1948)" },
  { 1954, "[Kultura] Wydano Drużynę Pierścienia J.R.R. Tolkiena. (1954)" },
  { 1958, "[Nauka] Eisenhower podpisał ustawę tworzącą NASA. (1958)" },
  { 1981, "[Świat] Odbył się ślub księcia Karola i Diany Spencer. (1981)" },
};

// 30.07
const HistoryEvent HIST_212[] = {
  { 1818, "[Kultura] Urodziła się Emily Brontë, autorka Wichrowych Wzgórz. (1818)" },
  { 1941, "[Polska] Podpisano układ Sikorski-Majski z ZSRR. (1941)" },
  { 1945, "[Historia] Japoński okręt zatopił krążownik USS Indianapolis. (1945)" },
  { 1965, "[Świat] Lyndon B. Johnson podpisał ustawy Medicare i Medicaid. (1965)" },
  { 1971, "[Nauka] Lądownik Apollo 15 osiadł na Księżycu. (1971)" },
};

// 31.07
const HistoryEvent HIST_213[] = {
  { 1498, "[Historia] Krzysztof Kolumb dotarł do Trynidadu podczas trzeciej wyprawy. (1498)" },
  { 1944, "[Polska] Dowództwo AK wydało rozkaz rozpoczęcia powstania. (1944)" },
  { 1965, "[Kultura] Urodziła się J.K. Rowling, autorka Harry'ego Pottera. (1965)" },
  { 1971, "[Nauka] Astronauci Apollo 15 pierwszy raz użyli pojazdu księżycowego. (1971)" },
  { 2006, "[Świat] Fidel Castro czasowo przekazał władzę Raulowi Castro. (2006)" },
};

// 01.08
const HistoryEvent HIST_214[] = {
  { 1774, "[Nauka] Joseph Priestley otrzymał tlen, zwany wtedy odflogistonowanym powietrzem. (1774)" },
  { 1834, "[Świat] W Imperium Brytyjskim weszło w życie zniesienie niewolnictwa. (1834)" },
  { 1944, "[Polska] Wybuchło Powstanie Warszawskie. (1944)" },
  { 1944, "[Kultura] Anne Frank napisała ostatni wpis w dzienniku. (1944)" },
  { 1981, "[Kultura] W USA rozpoczęła nadawanie telewizja MTV. (1981)" },
};

// 02.08
const HistoryEvent HIST_215[] = {
  { 1870, "[Nauka] Otwarto Tower Subway, tunel pod Tamizą w Londynie. (1870)" },
  { 1934, "[Historia] Po śmierci Hindenburga Hitler przejął urząd prezydenta. (1934)" },
  { 1939, "[Nauka] Einstein podpisał list do Roosevelta o bombie atomowej. (1939)" },
  { 1944, "[Polska] Niemcy zlikwidowali obóz rodzinny Romów w Birkenau. (1944)" },
  { 1990, "[Świat] Irak zaatakował Kuwejt, rozpoczynając kryzys w Zatoce. (1990)" },
};

// 03.08
const HistoryEvent HIST_216[] = {
  { 1492, "[Historia] Krzysztof Kolumb wypłynął z Palos przez Atlantyk. (1492)" },
  { 1904, "[Historia] Brytyjska ekspedycja wkroczyła do Lhasy w Tybecie. (1904)" },
  { 1949, "[Kultura] Powstała NBA po połączeniu lig BAA i NBL. (1949)" },
  { 1958, "[Nauka] USS Nautilus przepłynął pod biegunem północnym. (1958)" },
  { 1977, "[Nauka] Tandy zaprezentowało mikrokomputer TRS-80. (1977)" },
};

// 04.08
const HistoryEvent HIST_217[] = {
  { 1704, "[Historia] Siły angielsko-holenderskie zajęły Gibraltar. (1704)" },
  { 1901, "[Kultura] Urodził się Louis Armstrong, legenda jazzu. (1901)" },
  { 1914, "[Historia] Niemcy zaatakowały Belgię, a Wielka Brytania wypowiedziała im wojnę. (1914)" },
  { 1944, "[Historia] Gestapo aresztowało Anne Frank i jej rodzinę. (1944)" },
  { 1961, "[Świat] Urodził się Barack Obama, późniejszy prezydent USA. (1961)" },
};

// 05.08
const HistoryEvent HIST_218[] = {
  { 1772, "[Polska] Podpisano traktaty pierwszego rozbioru Polski. (1772)" },
  { 1914, "[Nauka] W Cleveland uruchomiono pierwszą elektryczną sygnalizację świetlną. (1914)" },
  { 1944, "[Polska] Rozpoczęła się rzeź Woli podczas Powstania Warszawskiego. (1944)" },
  { 1962, "[Kultura] Zmarła Marilyn Monroe, gwiazda kina amerykańskiego. (1962)" },
  { 1963, "[Historia] Podpisano układ o częściowym zakazie prób jądrowych. (1963)" },
};

// 06.08
const HistoryEvent HIST_219[] = {
  { 1890, "[Historia] W USA wykonano pierwszą egzekucję na krześle elektrycznym. (1890)" },
  { 1914, "[Polska] Pierwsza Kompania Kadrowa wyruszyła z Krakowa. (1914)" },
  { 1945, "[Historia] USA zrzuciły bombę atomową na Hiroszimę. (1945)" },
  { 1962, "[Świat] Jamajka uzyskała niepodległość od Wielkiej Brytanii. (1962)" },
  { 2012, "[Nauka] Łazik Curiosity wylądował w kraterze Gale na Marsie. (2012)" },
};

// 07.08
const HistoryEvent HIST_220[] = {
  { 1942, "[Historia] Rozpoczęła się bitwa o Guadalcanal na Pacyfiku. (1942)" },
  { 1947, "[Historia] Tratwa Kon-Tiki dotarła do atolu Raroia po rejsie przez Pacyfik. (1947)" },
  { 1959, "[Nauka] Wystrzelono satelitę Explorer 6 z aparaturą do zdjęć Ziemi. (1959)" },
  { 1960, "[Świat] Wybrzeże Kości Słoniowej uzyskało niepodległość od Francji. (1960)" },
  { 1974, "[Kultura] Philippe Petit przeszedł po linie między wieżami World Trade Center. (1974)" },
};

// 08.08
const HistoryEvent HIST_221[] = {
  { 1945, "[Historia] ZSRR wypowiedział wojnę Japonii. (1945)" },
  { 1963, "[Historia] Doszło do napadu na pociąg pocztowy w Wielkiej Brytanii. (1963)" },
  { 1967, "[Świat] W Bangkoku powstało ASEAN, stowarzyszenie państw Azji. (1967)" },
  { 1988, "[Świat] W Birmie wybuchło powstanie 8888 przeciw reżimowi. (1988)" },
  { 2008, "[Kultura] Otwarto Letnie Igrzyska Olimpijskie w Pekinie. (2008)" },
};

// 09.08
const HistoryEvent HIST_222[] = {
  { 378, "[Historia] Bitwa pod Adrianopolem zakończyła się klęską Rzymian. (378)" },
  { 1173, "[Kultura] Rozpoczęto budowę Krzywej Wieży w Pizie. (1173)" },
  { 1945, "[Historia] USA zrzuciły bombę atomową na Nagasaki. (1945)" },
  { 1965, "[Świat] Singapur ogłosił niepodległość po oddzieleniu od Malezji. (1965)" },
  { 1974, "[Historia] Richard Nixon ustąpił z urzędu prezydenta USA. (1974)" },
};

// 10.08
const HistoryEvent HIST_223[] = {
  { 1792, "[Historia] Szturm na Tuileries przyspieszył upadek monarchii we Francji. (1792)" },
  { 1793, "[Kultura] Luwr otwarto dla publiczności jako muzeum. (1793)" },
  { 1846, "[Nauka] Ustanowiono Smithsonian Institution w Stanach Zjednoczonych. (1846)" },
  { 1897, "[Nauka] Felix Hoffmann zsyntetyzował kwas acetylosalicylowy. (1897)" },
  { 1966, "[Nauka] Lunar Orbiter 1 wystartował w kierunku Księżyca. (1966)" },
};

// 11.08
const HistoryEvent HIST_224[] = {
  { 1919, "[Historia] Przyjęto konstytucję weimarską w Niemczech. (1919)" },
  { 1934, "[Historia] Do Alcatraz przybyli pierwsi więźniowie federalni. (1934)" },
  { 1937, "[Polska] NKWD rozpoczęło operację polską rozkazem nr 00485. (1937)" },
  { 1960, "[Świat] Czad uzyskał niepodległość od Francji. (1960)" },
  { 1999, "[Nauka] Nad Europą i Azją obserwowano całkowite zaćmienie Słońca. (1999)" },
};

// 12.08
const HistoryEvent HIST_225[] = {
  { 1099, "[Historia] Krzyżowcy wygrali bitwę pod Askalonem. (1099)" },
  { 1851, "[Nauka] Isaac Singer otrzymał patent na maszynę do szycia. (1851)" },
  { 1960, "[Nauka] Wystrzelono Echo 1, pierwszego pasywnego satelitę łączności. (1960)" },
  { 1981, "[Nauka] IBM zaprezentował komputer osobisty IBM PC. (1981)" },
  { 1990, "[Nauka] Odkryto szkielet tyranozaura Sue, słynny okaz T. rex. (1990)" },
};

// 13.08
const HistoryEvent HIST_226[] = {
  { 1521, "[Historia] Hiszpanie zdobyli Tenochtitlan, kończąc panowanie Azteków. (1521)" },
  { 1920, "[Polska] Rozpoczęła się Bitwa Warszawska, zwana Cudem nad Wisłą. (1920)" },
  { 1944, "[Polska] Eksplozja Borgwarda IV zabiła cywilów i powstańców w Warszawie. (1944)" },
  { 1961, "[Historia] Rozpoczęto budowę Muru Berlińskiego. (1961)" },
  { 2004, "[Świat] Rozpoczęły się Letnie Igrzyska Olimpijskie w Atenach. (2004)" },
};

// 14.08
const HistoryEvent HIST_227[] = {
  { 1385, "[Polska] Zawarto unię w Krewie między Polską i Litwą. (1385)" },
  { 1935, "[Świat] Roosevelt podpisał ustawę Social Security Act. (1935)" },
  { 1941, "[Historia] Churchill i Roosevelt ogłosili Kartę Atlantycką. (1941)" },
  { 1947, "[Świat] Pakistan uzyskał niepodległość od Wielkiej Brytanii. (1947)" },
  { 1980, "[Polska] Rozpoczął się strajk w Stoczni Gdańskiej. (1980)" },
};

// 15.08
const HistoryEvent HIST_228[] = {
  { 1920, "[Polska] Kulminacja Bitwy Warszawskiej podczas wojny polsko-bolszewickiej. (1920)" },
  { 1945, "[Historia] Japonia ogłosiła przyjęcie warunków kapitulacji aliantów. (1945)" },
  { 1947, "[Świat] Indie uzyskały niepodległość od Wielkiej Brytanii. (1947)" },
  { 1969, "[Kultura] Rozpoczął się festiwal Woodstock w Bethel. (1969)" },
  { 1977, "[Nauka] Odebrano sygnał Wow! w programie SETI. (1977)" },
};

// 16.08
const HistoryEvent HIST_229[] = {
  { 1819, "[Historia] W Manchesterze doszło do masakry Peterloo. (1819)" },
  { 1896, "[Świat] Odkrycie złota nad Bonanza Creek zaczęło gorączkę Klondike. (1896)" },
  { 1920, "[Polska] Kontruderzenie znad Wieprza przełamało front w Bitwie Warszawskiej. (1920)" },
  { 1960, "[Świat] Cypr uzyskał niepodległość od Wielkiej Brytanii. (1960)" },
  { 1977, "[Kultura] Zmarł Elvis Presley, ikona rock and rolla. (1977)" },
};

// 17.08
const HistoryEvent HIST_230[] = {
  { 1807, "[Nauka] Parowiec Clermont rozpoczął rejs z Nowego Jorku do Albany. (1807)" },
  { 1945, "[Świat] Indonezja ogłosiła niepodległość. (1945)" },
  { 1970, "[Nauka] ZSRR wystrzelił sondę Wenera 7 ku Wenus. (1970)" },
  { 1978, "[Historia] Double Eagle II zakończył pierwszy lot balonem przez Atlantyk. (1978)" },
  { 1988, "[Historia] Zia ul-Haq zginął w katastrofie lotniczej w Pakistanie. (1988)" },
};

// 18.08
const HistoryEvent HIST_231[] = {
  { 1868, "[Nauka] Jules Janssen zaobserwował linię helu podczas zaćmienia Słońca. (1868)" },
  { 1920, "[Historia] Ratyfikowano 19. poprawkę do Konstytucji USA. (1920)" },
  { 1966, "[Historia] Rozegrała się bitwa pod Long Tan w wojnie wietnamskiej. (1966)" },
  { 1976, "[Świat] W DMZ w Korei doszło do incydentu z siekierą w Panmundżomie. (1976)" },
  { 2008, "[Świat] Pervez Musharraf ustąpił z urzędu prezydenta Pakistanu. (2008)" },
};

// 19.08
const HistoryEvent HIST_232[] = {
  { 14, "[Historia] Zmarł cesarz August, pierwszy władca Imperium Rzymskiego. (14)" },
  { 1692, "[Historia] W Salem stracono pięć osób oskarżonych o czary. (1692)" },
  { 1839, "[Nauka] We Francji publicznie ogłoszono proces dagerotypii. (1839)" },
  { 1960, "[Nauka] Wystrzelono Korabl-Sputnik 2 z psami Biełką i Striełką. (1960)" },
  { 1991, "[Świat] W Moskwie rozpoczął się pucz Janajewa przeciw Gorbaczowowi. (1991)" },
};

// 20.08
const HistoryEvent HIST_233[] = {
  { 1858, "[Nauka] Opublikowano tekst Darwina i Wallace'a o doborze naturalnym. (1858)" },
  { 1882, "[Kultura] W Moskwie wykonano po raz pierwszy Uwerturę 1812 Czajkowskiego. (1882)" },
  { 1940, "[Historia] Lew Trocki został śmiertelnie raniony w Meksyku. (1940)" },
  { 1968, "[Świat] Wojska Układu Warszawskiego wkroczyły do Czechosłowacji. (1968)" },
  { 1977, "[Nauka] NASA wystrzeliła sondę Voyager 2 ku planetom zewnętrznym. (1977)" },
};

// 21.08
const HistoryEvent HIST_234[] = {
  { 1831, "[Historia] Rozpoczęło się powstanie Nata Turnera w Wirginii. (1831)" },
  { 1911, "[Kultura] Z Luwru skradziono obraz Mona Lisa Leonarda da Vinci. (1911)" },
  { 1944, "[Historia] Rozpoczęła się konferencja w Dumbarton Oaks. (1944)" },
  { 1959, "[Świat] Hawaje zostały 50. stanem Stanów Zjednoczonych. (1959)" },
  { 1991, "[Świat] Łotwa ogłosiła pełne przywrócenie niepodległości. (1991)" },
};

// 22.08
const HistoryEvent HIST_235[] = {
  { 1485, "[Historia] Bitwa pod Bosworth zakończyła Wojnę Dwóch Róż. (1485)" },
  { 1642, "[Historia] Karol I podniósł sztandar w Nottingham, zaczynając wojnę domową. (1642)" },
  { 1864, "[Historia] Podpisano pierwszą konwencję genewską o rannych żołnierzach. (1864)" },
  { 1902, "[Nauka] Założono Cadillac Automobile Company w Detroit. (1902)" },
  { 1962, "[Historia] W Petit-Clamart dokonano zamachu na Charles'a de Gaulle'a. (1962)" },
};

// 23.08
const HistoryEvent HIST_236[] = {
  { 1305, "[Historia] Stracono Williama Wallace'a, szkockiego przywódcę oporu. (1305)" },
  { 1793, "[Historia] We Francji uchwalono levée en masse, powszechny pobór. (1793)" },
  { 1939, "[Historia] Podpisano pakt Ribbentrop-Mołotow z tajnym protokołem. (1939)" },
  { 1944, "[Świat] Przewrót w Rumunii odsunął Antonescu od władzy. (1944)" },
  { 1989, "[Świat] Bałtycki Łańcuch połączył Litwę, Łotwę i Estonię. (1989)" },
};

// 24.08
const HistoryEvent HIST_237[] = {
  { 410, "[Historia] Wizygoci Alaryka rozpoczęli złupienie Rzymu. (410)" },
  { 1572, "[Historia] W Paryżu rozpoczęła się masakra nocy św. Bartłomieja. (1572)" },
  { 1814, "[Historia] Brytyjczycy zajęli Waszyngton i spalili budynki rządowe. (1814)" },
  { 1949, "[Świat] Wszedł w życie Traktat Północnoatlantycki. (1949)" },
  { 1991, "[Świat] Parlament Ukrainy ogłosił niepodległość kraju. (1991)" },
};

// 25.08
const HistoryEvent HIST_238[] = {
  { 1609, "[Nauka] Galileusz pokazał teleskop władzom Wenecji. (1609)" },
  { 1825, "[Świat] Urugwaj ogłosił niepodległość od Brazylii. (1825)" },
  { 1916, "[Nauka] W USA utworzono National Park Service. (1916)" },
  { 1944, "[Historia] Niemiecki garnizon skapitulował w wyzwolonym Paryżu. (1944)" },
  { 1989, "[Nauka] Voyager 2 przeleciał obok Neptuna. (1989)" },
};

// 26.08
const HistoryEvent HIST_239[] = {
  { 1789, "[Historia] Uchwalono Deklarację Praw Człowieka i Obywatela. (1789)" },
  { 1920, "[Historia] Ogłoszono 19. poprawkę o prawach wyborczych kobiet w USA. (1920)" },
  { 1939, "[Polska] Incydent jabłonkowski poprzedził wybuch II wojny światowej. (1939)" },
  { 1956, "[Polska] Na Jasnej Górze odczytano Jasnogórskie Śluby Narodu. (1956)" },
  { 1978, "[Historia] Albino Luciani został papieżem Janem Pawłem I. (1978)" },
};

// 27.08
const HistoryEvent HIST_240[] = {
  { 1859, "[Nauka] Edwin Drake rozpoczął wydobycie ropy w Titusville. (1859)" },
  { 1883, "[Historia] Erupcja Krakatau wywołała tsunami i wstrząsy atmosfery. (1883)" },
  { 1916, "[Historia] Rumunia przystąpiła do I wojny światowej po stronie Ententy. (1916)" },
  { 1962, "[Nauka] Wystrzelono sondę Mariner 2 w kierunku Wenus. (1962)" },
  { 1991, "[Świat] Mołdawia ogłosiła niepodległość od ZSRR. (1991)" },
};

// 28.08
const HistoryEvent HIST_241[] = {
  { 1833, "[Historia] W Wielkiej Brytanii przyjęto ustawę znoszącą niewolnictwo. (1833)" },
  { 1845, "[Nauka] Ukazał się pierwszy numer magazynu Scientific American. (1845)" },
  { 1955, "[Historia] W Mississippi zamordowano Emmetta Tilla. (1955)" },
  { 1963, "[Historia] Martin Luther King wygłosił przemówienie I Have a Dream. (1963)" },
  { 1996, "[Świat] Rozwód księcia Karola i księżnej Diany stał się formalny. (1996)" },
};

// 29.08
const HistoryEvent HIST_242[] = {
  { 1533, "[Historia] Hiszpanie stracili Atahualpę, władcę Inków. (1533)" },
  { 1831, "[Nauka] Michael Faraday odkrył indukcję elektromagnetyczną. (1831)" },
  { 1949, "[Historia] ZSRR przeprowadził pierwszy test bomby atomowej. (1949)" },
  { 1966, "[Kultura] The Beatles zagrali ostatni płatny koncert w Candlestick Park. (1966)" },
  { 1991, "[Historia] Kazachstan zamknął poligon jądrowy w Semipałatyńsku. (1991)" },
};

// 30.08
const HistoryEvent HIST_243[] = {
  { 1835, "[Świat] Założono Melbourne w Australii. (1835)" },
  { 1918, "[Historia] Fanny Kaplan dokonała zamachu na Włodzimierza Lenina. (1918)" },
  { 1963, "[Historia] Uruchomiono gorącą linię Moskwa-Waszyngton. (1963)" },
  { 1984, "[Nauka] Wahadłowiec Discovery wystartował w pierwszą misję. (1984)" },
  { 1991, "[Świat] Azerbejdżan ogłosił niepodległość od ZSRR. (1991)" },
};

// 31.08
const HistoryEvent HIST_244[] = {
  { 1939, "[Polska] Prowokacja gliwicka poprzedziła atak Niemiec na Polskę. (1939)" },
  { 1980, "[Polska] Podpisano Porozumienie Gdańskie w Stoczni Gdańskiej. (1980)" },
  { 1991, "[Świat] Kirgistan ogłosił niepodległość od ZSRR. (1991)" },
  { 1997, "[Kultura] Zginęła Diana, księżna Walii. (1997)" },
  { 2005, "[Historia] W Bagdadzie doszło do paniki na moście Al-A'imma. (2005)" },
};

// 01.09
const HistoryEvent HIST_245[] = {
  { 1914, "[Historia] Zmarła Martha, ostatni znany gołąb wędrowny. (1914)" },
  { 1939, "[Polska] Rozpoczęła się obrona Westerplatte. (1939)" },
  { 1939, "[Historia] Niemcy zaatakowały Polskę, rozpoczynając II wojnę światową. (1939)" },
  { 1983, "[Świat] Sowiecki myśliwiec zestrzelił lot Korean Air Lines 007. (1983)" },
  { 1985, "[Nauka] Odkryto wrak Titanica na Atlantyku. (1985)" },
};

// 02.09
const HistoryEvent HIST_246[] = {
  { -31, "[Historia] Bitwa pod Akcjum przesądziła o losie Antoniusza i Kleopatry. (31 p.n.e.)" },
  { 1666, "[Historia] Rozpoczął się wielki pożar Londynu. (1666)" },
  { 1945, "[Historia] Japonia podpisała akt kapitulacji na USS Missouri. (1945)" },
  { 1969, "[Nauka] Uruchomiono pierwszy bankomat w USA. (1969)" },
  { 1998, "[Historia] Samolot Swissair 111 rozbił się u wybrzeży Kanady. (1998)" },
};

// 03.09
const HistoryEvent HIST_247[] = {
  { 1189, "[Historia] Ryszard Lwie Serce został koronowany na króla Anglii. (1189)" },
  { 1939, "[Polska] Wielka Brytania i Francja wypowiedziały wojnę Niemcom. (1939)" },
  { 1971, "[Świat] Katar ogłosił niepodległość od Wielkiej Brytanii. (1971)" },
  { 1976, "[Nauka] Sonda Viking 2 wylądowała na Marsie. (1976)" },
  { 2004, "[Historia] Zakończyła się tragedia zakładników w Biesłanie. (2004)" },
};

// 04.09
const HistoryEvent HIST_248[] = {
  { 476, "[Historia] Obalono Romulusa Augustulusa, ostatniego cesarza Zachodu. (476)" },
  { 1886, "[Historia] Geronimo poddał się wojskom USA w Arizonie. (1886)" },
  { 1888, "[Nauka] George Eastman opatentował aparat Kodak i znak Kodak. (1888)" },
  { 1998, "[Nauka] Larry Page i Sergey Brin zarejestrowali firmę Google. (1998)" },
  { 2016, "[Historia] Matka Teresa z Kalkuty została kanonizowana w Watykanie. (2016)" },
};

// 05.09
const HistoryEvent HIST_249[] = {
  { 1698, "[Historia] Piotr I wprowadził podatek od brod w Rosji. (1698)" },
  { 1905, "[Historia] Traktat w Portsmouth zakończył wojnę rosyjsko-japońską. (1905)" },
  { 1939, "[Polska] Rozpoczęła się bitwa pod Piotrkowem Trybunalskim. (1939)" },
  { 1977, "[Nauka] NASA wystrzeliła sondę Voyager 1. (1977)" },
  { 1980, "[Nauka] Otwarto drogowy tunel Gottharda w Szwajcarii. (1980)" },
};

// 06.09
const HistoryEvent HIST_250[] = {
  { 1901, "[Historia] Prezydent USA William McKinley został postrzelony w Buffalo. (1901)" },
  { 1968, "[Świat] Suazi, obecne Eswatini, uzyskało niepodległość. (1968)" },
  { 1991, "[Świat] ZSRR uznał niepodległość Litwy, Łotwy i Estonii. (1991)" },
  { 1991, "[Historia] Leningrad oficjalnie odzyskał nazwę Petersburg. (1991)" },
  { 1997, "[Kultura] W Londynie odbył się pogrzeb Diany, księżnej Walii. (1997)" },
};

// 07.09
const HistoryEvent HIST_251[] = {
  { 1822, "[Świat] Brazylia ogłosiła niepodległość od Portugalii. (1822)" },
  { 1939, "[Polska] Westerplatte skapitulowało po siedmiu dniach obrony. (1939)" },
  { 1940, "[Historia] Rozpoczął się Blitz, niemieckie naloty na Wielką Brytanię. (1940)" },
  { 1977, "[Historia] Podpisano traktaty Torrijos-Carter o Kanale Panamskim. (1977)" },
  { 1986, "[Kultura] Desmond Tutu został arcybiskupem Kapsztadu. (1986)" },
};

// 08.09
const HistoryEvent HIST_252[] = {
  { 1380, "[Historia] Bitwa na Kulikowym Polu osłabiła władzę Złotej Ordy. (1380)" },
  { 1522, "[Historia] Victoria wróciła do Hiszpanii po pierwszym opłynięciu Ziemi. (1522)" },
  { 1565, "[Historia] Hiszpanie założyli St. Augustine na Florydzie. (1565)" },
  { 1900, "[Historia] Huragan w Galveston spustoszył miasto w Teksasie. (1900)" },
  { 1966, "[Kultura] Wyemitowano pierwszy odcinek serialu Star Trek. (1966)" },
};

// 09.09
const HistoryEvent HIST_253[] = {
  { 1513, "[Historia] Szkoci przegrali bitwę pod Flodden z Anglikami. (1513)" },
  { 1939, "[Polska] Rozpoczęła się bitwa nad Bzurą, największa bitwa kampanii. (1939)" },
  { 1948, "[Świat] Utworzono Koreańską Republikę Ludowo-Demokratyczną. (1948)" },
  { 1976, "[Historia] Zmarł Mao Zedong, przywódca komunistycznych Chin. (1976)" },
  { 1991, "[Świat] Tadżykistan ogłosił niepodległość od ZSRR. (1991)" },
};

// 10.09
const HistoryEvent HIST_254[] = {
  { 1419, "[Historia] Zamordowano Jana bez Trwogi na moście w Montereau. (1419)" },
  { 1898, "[Kultura] W Genewie zamordowano cesarzową Elżbietę, zwaną Sisi. (1898)" },
  { 1919, "[Historia] Podpisano traktat z Saint-Germain z Austrią. (1919)" },
  { 1960, "[Historia] Abebe Bikila wygrał boso maraton olimpijski w Rzymie. (1960)" },
  { 2008, "[Nauka] W CERN po raz pierwszy uruchomiono wiązkę protonów LHC. (2008)" },
};

// 11.09
const HistoryEvent HIST_255[] = {
  { 1297, "[Historia] Szkoci wygrali z Anglikami bitwę pod Stirling Bridge. (1297)" },
  { 1609, "[Historia] Henry Hudson wpłynął do dzisiejszej zatoki Nowego Jorku. (1609)" },
  { 1973, "[Historia] Zamach stanu w Chile obalił prezydenta Salvadora Allende. (1973)" },
  { 1978, "[Nauka] Zmarła Janet Parker, ostatnia znana ofiara ospy prawdziwej. (1978)" },
  { 2001, "[Historia] Terroryści zaatakowali Nowy Jork i Waszyngton. (2001)" },
};

// 12.09
const HistoryEvent HIST_256[] = {
  { 1683, "[Polska] Jan III Sobieski zwyciężył pod Wiedniem. (1683)" },
  { 1940, "[Kultura] We Francji odkryto jaskinię Lascaux z malowidłami. (1940)" },
  { 1943, "[Historia] Niemieccy komandosi uwolnili Mussoliniego pod Gran Sasso. (1943)" },
  { 1959, "[Nauka] Luna 2 wystartowała w kierunku Księżyca. (1959)" },
  { 1962, "[Nauka] Kennedy wygłosił przemówienie We choose to go to the Moon. (1962)" },
};

// 13.09
const HistoryEvent HIST_257[] = {
  { 1501, "[Kultura] Michał Anioł rozpoczął pracę nad rzeźbą Dawida. (1501)" },
  { 1759, "[Historia] Brytyjczycy wygrali bitwę na Równinie Abrahama. (1759)" },
  { 1959, "[Nauka] Luna 2 jako pierwszy obiekt ziemski dotarła do Księżyca. (1959)" },
  { 1985, "[Kultura] W Japonii wydano grę Super Mario Bros. na Famicom. (1985)" },
  { 1993, "[Historia] Podpisano porozumienia z Oslo między Izraelem i OWP. (1993)" },
};

// 14.09
const HistoryEvent HIST_258[] = {
  { 1812, "[Historia] Napoleon wkroczył do opuszczonej Moskwy. (1812)" },
  { 1901, "[Historia] Theodore Roosevelt został prezydentem USA po śmierci McKinleya. (1901)" },
  { 1960, "[Świat] W Bagdadzie utworzono Organizację Krajów Eksportujących Ropę. (1960)" },
  { 2000, "[Nauka] Microsoft wydał system Windows ME. (2000)" },
  { 2015, "[Nauka] Detektory LIGO po raz pierwszy zarejestrowały fale grawitacyjne. (2015)" },
};

// 15.09
const HistoryEvent HIST_259[] = {
  { 1821, "[Świat] Kraje Ameryki Środkowej ogłosiły niepodległość od Hiszpanii. (1821)" },
  { 1830, "[Nauka] Otwarto linię kolejową Liverpool-Manchester. (1830)" },
  { 1835, "[Nauka] HMS Beagle z Darwinem dotarł do wysp Galapagos. (1835)" },
  { 1940, "[Historia] Dzień Bitwy o Anglię stał się przełomem obrony RAF. (1940)" },
  { 2008, "[Historia] Upadek Lehman Brothers stał się symbolem kryzysu finansowego. (2008)" },
};

// 16.09
const HistoryEvent HIST_260[] = {
  { 1620, "[Historia] Statek Mayflower wypłynął z Anglii do Ameryki. (1620)" },
  { 1908, "[Nauka] William Durant założył koncern General Motors. (1908)" },
  { 1939, "[Polska] Wojska niemieckie zamknęły pierścień wokół Warszawy. (1939)" },
  { 1975, "[Świat] Papua-Nowa Gwinea uzyskała niepodległość od Australii. (1975)" },
  { 1987, "[Nauka] Przyjęto Protokół montrealski o ochronie ozonu. (1987)" },
};

// 17.09
const HistoryEvent HIST_261[] = {
  { 1787, "[Historia] Podpisano Konstytucję Stanów Zjednoczonych. (1787)" },
  { 1939, "[Polska] ZSRR zaatakował Polskę od wschodu. (1939)" },
  { 1944, "[Historia] Rozpoczęła się aliancka operacja Market Garden. (1944)" },
  { 1978, "[Historia] Podpisano porozumienia Camp David. (1978)" },
  { 1991, "[Nauka] Opublikowano pierwszą wersję jądra Linux 0.01. (1991)" },
};

// 18.09
const HistoryEvent HIST_262[] = {
  { 1810, "[Świat] W Chile utworzono pierwszą juntę rządową. (1810)" },
  { 1851, "[Kultura] Ukazał się pierwszy numer The New York Times. (1851)" },
  { 1931, "[Historia] Incydent mukdeński zapoczątkował japońską agresję w Mandżurii. (1931)" },
  { 1961, "[Historia] Zginął Dag Hammarskjöld, sekretarz generalny ONZ. (1961)" },
  { 1977, "[Nauka] Voyager 1 sfotografował razem Ziemię i Księżyc. (1977)" },
};

// 19.09
const HistoryEvent HIST_263[] = {
  { 1893, "[Historia] Nowa Zelandia przyznała kobietom prawa wyborcze. (1893)" },
  { 1940, "[Polska] Witold Pilecki dał się aresztować podczas łapanki w Warszawie. (1940)" },
  { 1944, "[Historia] Finlandia i ZSRR podpisały rozejm moskiewski. (1944)" },
  { 1982, "[Nauka] Scott Fahlman zaproponował emotikony :-) i :-(. (1982)" },
  { 1991, "[Nauka] W Alpach odnaleziono mumię Ötziego. (1991)" },
};

// 20.09
const HistoryEvent HIST_264[] = {
  { 1519, "[Historia] Wyprawa Magellana wypłynęła z Hiszpanii. (1519)" },
  { 1870, "[Historia] Wojska włoskie zdobyły Rzym, kończąc zjednoczenie Włoch. (1870)" },
  { 1881, "[Historia] Chester A. Arthur został prezydentem USA. (1881)" },
  { 1946, "[Kultura] Rozpoczął się pierwszy Festiwal Filmowy w Cannes. (1946)" },
  { 1973, "[Kultura] Billie Jean King wygrała tenisowy Battle of the Sexes. (1973)" },
};

// 21.09
const HistoryEvent HIST_265[] = {
  { 1792, "[Historia] Konwent Narodowy we Francji zniósł monarchię. (1792)" },
  { 1937, "[Kultura] Ukazał się Hobbit J.R.R. Tolkiena. (1937)" },
  { 1964, "[Świat] Malta uzyskała niepodległość od Wielkiej Brytanii. (1964)" },
  { 1976, "[Historia] Orlando Letelier zginął w zamachu w Waszyngtonie. (1976)" },
  { 2003, "[Nauka] Sonda Galileo zakończyła misję w atmosferze Jowisza. (2003)" },
};

// 22.09
const HistoryEvent HIST_266[] = {
  { 1862, "[Historia] Lincoln ogłosił wstępną Proklamację Emancypacji. (1862)" },
  { 1888, "[Nauka] Ukazał się pierwszy numer National Geographic Magazine. (1888)" },
  { 1975, "[Historia] Sara Jane Moore próbowała zabić prezydenta Forda. (1975)" },
  { 1980, "[Historia] Irak zaatakował Iran, rozpoczynając długą wojnę. (1980)" },
  { 1994, "[Kultura] Wyemitowano pierwszy odcinek serialu Przyjaciele. (1994)" },
};

// 23.09
const HistoryEvent HIST_267[] = {
  { 1846, "[Nauka] Galle i d'Arrest odkryli Neptuna w obserwatorium berlińskim. (1846)" },
  { 1889, "[Kultura] Fusajiro Yamauchi założył firmę Nintendo w Kioto. (1889)" },
  { 1939, "[Nauka] Zmarł Sigmund Freud, twórca psychoanalizy. (1939)" },
  { 1973, "[Świat] Juan Perón wygrał wybory prezydenckie w Argentynie. (1973)" },
  { 1980, "[Kultura] Bob Marley zagrał ostatni koncert w Pittsburghu. (1980)" },
};

// 24.09
const HistoryEvent HIST_268[] = {
  { 1789, "[Historia] Washington podpisał Judiciary Act, tworząc sądy federalne USA. (1789)" },
  { 1877, "[Świat] Bitwa pod Shiroyamą zakończyła bunt Satsuma w Japonii. (1877)" },
  { 1896, "[Kultura] Urodził się F. Scott Fitzgerald, autor Wielkiego Gatsby'ego. (1896)" },
  { 1948, "[Nauka] Powstała Honda Motor Company, późniejszy gigant motoryzacji. (1948)" },
  { 1991, "[Kultura] Wydano album Nevermind zespołu Nirvana. (1991)" },
};

// 25.09
const HistoryEvent HIST_269[] = {
  { 1066, "[Historia] Harold II pokonał Norwegów w bitwie pod Stamford Bridge. (1066)" },
  { 1555, "[Historia] Pokój augsburski uregulował podział religijny w Rzeszy. (1555)" },
  { 1939, "[Polska] Niemcy przeprowadzili ciężkie bombardowanie oblężonej Warszawy. (1939)" },
  { 1956, "[Nauka] Uruchomiono TAT-1, pierwszy transatlantycki kabel telefoniczny. (1956)" },
  { 2015, "[Świat] ONZ przyjęła Agendę 2030 i cele zrównoważonego rozwoju. (2015)" },
};

// 26.09
const HistoryEvent HIST_270[] = {
  { 1580, "[Historia] Francis Drake zakończył opłynięcie Ziemi w Plymouth. (1580)" },
  { 1907, "[Świat] Nowa Zelandia uzyskała status dominium. (1907)" },
  { 1960, "[Historia] Odbyła się pierwsza telewizyjna debata Kennedy-Nixon. (1960)" },
  { 1983, "[Historia] Stanisław Petrow uznał alarm nuklearny za fałszywy. (1983)" },
  { 2008, "[Nauka] Yves Rossy przeleciał kanał La Manche z odrzutowym skrzydłem. (2008)" },
};

// 27.09
const HistoryEvent HIST_271[] = {
  { 1825, "[Nauka] Otwarto kolej Stockton-Darlington, przełom w historii kolei. (1825)" },
  { 1939, "[Polska] Utworzono Służbę Zwycięstwu Polski, zalążek podziemia. (1939)" },
  { 1940, "[Historia] Niemcy, Włochy i Japonia podpisały pakt trzech. (1940)" },
  { 1964, "[Historia] Opublikowano raport Komisji Warrena o zabójstwie Kennedy'ego. (1964)" },
  { 1980, "[Kultura] Po raz pierwszy obchodzono Światowy Dzień Turystyki. (1980)" },
};

// 28.09
const HistoryEvent HIST_272[] = {
  { 1066, "[Historia] Wilhelm Zdobywca wylądował z wojskami w Pevensey. (1066)" },
  { 1928, "[Nauka] Alexander Fleming odkrył działanie penicyliny. (1928)" },
  { 1939, "[Polska] Warszawa oficjalnie skapitulowała po oblężeniu. (1939)" },
  { 1958, "[Historia] Francuzi przyjęli w referendum konstytucję V Republiki. (1958)" },
  { 2008, "[Nauka] Falcon 1 jako pierwsza prywatna rakieta ciekła osiągnął orbitę. (2008)" },
};

// 29.09
const HistoryEvent HIST_273[] = {
  { 1829, "[Świat] W Londynie utworzono Metropolitan Police, nowoczesną policję miejską. (1829)" },
  { 1939, "[Polska] Twierdza Modlin skapitulowała przed wojskami niemieckimi. (1939)" },
  { 1941, "[Historia] Niemcy rozpoczęli masakrę Żydów w Babim Jarze. (1941)" },
  { 1954, "[Nauka] Konwencja CERN weszła w życie, tworząc laboratorium. (1954)" },
  { 1988, "[Nauka] Wystartowała misja STS-26, pierwszy lot wahadłowca po Challengerze. (1988)" },
};

// 30.09
const HistoryEvent HIST_274[] = {
  { 1938, "[Historia] Podpisano układ monachijski bez udziału Czechosłowacji. (1938)" },
  { 1939, "[Polska] Raczkiewicz objął urząd prezydenta RP na uchodźstwie. (1939)" },
  { 1955, "[Kultura] James Dean zginął w wypadku samochodowym w Kalifornii. (1955)" },
  { 1966, "[Świat] Botswana uzyskała niepodległość od Wielkiej Brytanii. (1966)" },
  { 2016, "[Nauka] Sonda Rosetta zakończyła misję lądowaniem na komecie 67P. (2016)" },
};

// 01.10
const HistoryEvent HIST_275[] = {
  { -331, "[Historia] Aleksander Wielki pokonał Dariusza III pod Gaugamelą. (331 p.n.e.)" },
  { 1939, "[Polska] W Paryżu utworzono rząd RP na uchodźstwie. (1939)" },
  { 1949, "[Świat] Proklamowano Chińską Republikę Ludową. (1949)" },
  { 1958, "[Nauka] NASA rozpoczęła działalność jako agencja kosmiczna USA. (1958)" },
  { 1960, "[Świat] Nigeria uzyskała niepodległość od Wielkiej Brytanii. (1960)" },
};

// 02.10
const HistoryEvent HIST_276[] = {
  { 1187, "[Historia] Saladyn przejął Jerozolimę po kapitulacji obrońców. (1187)" },
  { 1869, "[Historia] Urodził się Mahatma Gandhi, przywódca walki bez przemocy. (1869)" },
  { 1939, "[Polska] Kapitulacja Helu zakończyła obronę polskiego wybrzeża. (1939)" },
  { 1950, "[Kultura] Ukazał się pierwszy pasek komiksowy Peanuts. (1950)" },
  { 1968, "[Historia] Doszło do masakry studentów w Tlatelolco w Meksyku. (1968)" },
};

// 03.10
const HistoryEvent HIST_277[] = {
  { 1863, "[Historia] Lincoln ogłosił Proklamację Święta Dziękczynienia. (1863)" },
  { 1932, "[Świat] Irak uzyskał formalną niepodległość i wszedł do Ligi Narodów. (1932)" },
  { 1942, "[Nauka] Rakieta V-2 wykonała pierwszy udany lot testowy. (1942)" },
  { 1952, "[Nauka] Wielka Brytania przeprowadziła pierwszy test atomowy. (1952)" },
  { 1990, "[Historia] Nastąpiło zjednoczenie Niemiec. (1990)" },
};

// 04.10
const HistoryEvent HIST_278[] = {
  { 1582, "[Historia] W krajach katolickich był to ostatni dzień starego kalendarza. (1582)" },
  { 1957, "[Nauka] ZSRR wystrzelił Sputnika 1, pierwszego sztucznego satelitę. (1957)" },
  { 1965, "[Historia] Papież Paweł VI jako pierwszy papież przemawiał w ONZ. (1965)" },
  { 1970, "[Kultura] Zmarła Janis Joplin, wokalistka rockowa. (1970)" },
  { 1993, "[Historia] W Moskwie wojsko stłumiło kryzys konstytucyjny. (1993)" },
};

// 05.10
const HistoryEvent HIST_279[] = {
  { 1910, "[Historia] Proklamowano Republikę Portugalską po obaleniu monarchii. (1910)" },
  { 1947, "[Nauka] Truman wygłosił pierwsze telewizyjne przemówienie z Białego Domu. (1947)" },
  { 1962, "[Kultura] Odbyła się premiera filmu Dr No, pierwszego filmu o Bondzie. (1962)" },
  { 1983, "[Polska] Lech Wałęsa został laureatem Pokojowej Nagrody Nobla. (1983)" },
  { 2011, "[Nauka] Zmarł Steve Jobs, współtwórca Apple. (2011)" },
};

// 06.10
const HistoryEvent HIST_280[] = {
  { 1889, "[Kultura] Otwarto kabaret Moulin Rouge w Paryżu. (1889)" },
  { 1927, "[Kultura] Premiera The Jazz Singer rozpoczęła erę kina dźwiękowego. (1927)" },
  { 1973, "[Historia] Rozpoczęła się wojna Jom Kippur na Bliskim Wschodzie. (1973)" },
  { 1979, "[Polska] Jan Paweł II jako pierwszy papież odwiedził Biały Dom. (1979)" },
  { 1981, "[Historia] Egipski prezydent Anwar Sadat został zamordowany. (1981)" },
};

// 07.10
const HistoryEvent HIST_281[] = {
  { 1571, "[Historia] Flota Ligi Świętej pokonała Turków pod Lepanto. (1571)" },
  { 1918, "[Polska] Rada Regencyjna ogłosiła niepodległość Królestwa Polskiego. (1918)" },
  { 1949, "[Historia] Proklamowano Niemiecką Republikę Demokratyczną. (1949)" },
  { 1959, "[Nauka] Luna 3 wykonała pierwsze zdjęcia niewidocznej strony Księżyca. (1959)" },
  { 2001, "[Historia] Rozpoczęła się interwencja USA i sojuszników w Afganistanie. (2001)" },
};

// 08.10
const HistoryEvent HIST_282[] = {
  { 1871, "[Historia] Wielki pożar Chicago zaczął niszczyć miasto. (1871)" },
  { 1912, "[Historia] Czarnogóra zaatakowała Turcję, zaczynając I wojnę bałkańską. (1912)" },
  { 1939, "[Polska] Hitler podpisał dekret o wcieleniu części ziem polskich do Rzeszy. (1939)" },
  { 1952, "[Historia] Katastrofa kolejowa w Harrow and Wealdstone zabiła 112 osób. (1952)" },
  { 1990, "[Świat] Na Wzgórzu Świątynnym w Jerozolimie zginęli Palestyńczycy. (1990)" },
};

// 09.10
const HistoryEvent HIST_283[] = {
  { 1874, "[Nauka] W Bernie założono Światowy Związek Pocztowy. (1874)" },
  { 1962, "[Świat] Uganda uzyskała niepodległość od Wielkiej Brytanii. (1962)" },
  { 1967, "[Historia] Che Guevara został rozstrzelany po pojmaniu w Boliwii. (1967)" },
  { 1986, "[Kultura] W Londynie odbyła się premiera musicalu Upiór w operze. (1986)" },
  { 2006, "[Nauka] Korea Północna przeprowadziła pierwszy test jądrowy. (2006)" },
};

// 10.10
const HistoryEvent HIST_284[] = {
  { 1846, "[Nauka] William Lassell odkrył Trytona, największy księżyc Neptuna. (1846)" },
  { 1911, "[Historia] Powstanie w Wuchangu rozpoczęło rewolucję Xinhai w Chinach. (1911)" },
  { 1964, "[Kultura] Otwarto Letnie Igrzyska Olimpijskie w Tokio. (1964)" },
  { 1970, "[Świat] Fidżi uzyskało niepodległość od Wielkiej Brytanii. (1970)" },
  { 1992, "[Historia] Po raz pierwszy obchodzono Światowy Dzień Zdrowia Psychicznego. (1992)" },
};

// 11.10
const HistoryEvent HIST_285[] = {
  { 1138, "[Historia] Trzęsienie ziemi w Aleppo należało do najtragiczniejszych w dziejach. (1138)" },
  { 1910, "[Nauka] Theodore Roosevelt odbył lot samolotem jako pierwszy były prezydent USA. (1910)" },
  { 1968, "[Nauka] Wystartowało Apollo 7, pierwsza załogowa misja programu Apollo. (1968)" },
  { 1975, "[Kultura] NBC wyemitowała pierwszy odcinek Saturday Night Live. (1975)" },
  { 1984, "[Nauka] Kathryn Sullivan jako pierwsza Amerykanka odbyła spacer kosmiczny. (1984)" },
};

// 12.10
const HistoryEvent HIST_286[] = {
  { 1492, "[Historia] Krzysztof Kolumb dotarł do wysp Bahamów. (1492)" },
  { 1810, "[Kultura] W Monachium odbyły się pierwsze obchody Oktoberfest. (1810)" },
  { 1920, "[Polska] Podpisano preliminaria pokojowe i rozejm w Rydze. (1920)" },
  { 1964, "[Nauka] ZSRR wystrzelił Woschod 1, pierwszy statek z wieloosobową załogą. (1964)" },
  { 2005, "[Nauka] Chiny wysłały drugą misję załogową Shenzhou 6. (2005)" },
};

// 13.10
const HistoryEvent HIST_287[] = {
  { 1307, "[Historia] Aresztowano templariuszy we Francji z rozkazu Filipa IV. (1307)" },
  { 1773, "[Nauka] Charles Messier odkrył Galaktykę Wir, M51. (1773)" },
  { 1792, "[Historia] Położono kamień węgielny pod Biały Dom w Waszyngtonie. (1792)" },
  { 1943, "[Historia] Włochy wypowiedziały wojnę Niemcom. (1943)" },
  { 2010, "[Historia] Zakończono akcję ratowania górników uwięzionych w Chile. (2010)" },
};

// 14.10
const HistoryEvent HIST_288[] = {
  { 1066, "[Historia] Wilhelm Zdobywca pokonał Harolda II w bitwie pod Hastings. (1066)" },
  { 1947, "[Nauka] Chuck Yeager przekroczył barierę dźwięku w locie poziomym. (1947)" },
  { 1962, "[Historia] Samolot U-2 sfotografował radzieckie rakiety na Kubie. (1962)" },
  { 1964, "[Historia] Martin Luther King otrzymał Pokojową Nagrodę Nobla. (1964)" },
  { 2012, "[Nauka] Felix Baumgartner skoczył ze stratosfery. (2012)" },
};

// 15.10
const HistoryEvent HIST_289[] = {
  { 1582, "[Historia] W krajach katolickich zaczął działać kalendarz gregoriański. (1582)" },
  { 1815, "[Historia] Napoleon dotarł na zesłanie na wyspę Świętej Heleny. (1815)" },
  { 1917, "[Historia] Mata Hari została rozstrzelana za szpiegostwo we Francji. (1917)" },
  { 1951, "[Kultura] CBS wyemitowała pierwszy odcinek serialu I Love Lucy. (1951)" },
  { 1990, "[Historia] Michaił Gorbaczow otrzymał Pokojową Nagrodę Nobla. (1990)" },
};

// 16.10
const HistoryEvent HIST_290[] = {
  { 1793, "[Historia] Stracono Marię Antoninę, królową Francji. (1793)" },
  { 1945, "[Nauka] W Quebecu założono FAO, organizację ONZ ds. wyżywienia. (1945)" },
  { 1964, "[Historia] Chiny przeprowadziły pierwszy test bomby atomowej. (1964)" },
  { 1978, "[Polska] Kardynał Karol Wojtyła został wybrany papieżem Janem Pawłem II. (1978)" },
  { 1995, "[Historia] W Waszyngtonie odbył się Marsz Miliona Mężczyzn. (1995)" },
};

// 17.10
const HistoryEvent HIST_291[] = {
  { 1814, "[Historia] Katastrofa piwna w Londynie zalała okolice browaru Meux. (1814)" },
  { 1931, "[Historia] Al Capone został skazany za uchylanie się od podatków. (1931)" },
  { 1979, "[Historia] Matka Teresa otrzymała Pokojową Nagrodę Nobla. (1979)" },
  { 1987, "[Historia] W Paryżu odbył się apel przeciw skrajnemu ubóstwu. (1987)" },
  { 1989, "[Nauka] Trzęsienie ziemi Loma Prieta nawiedziło okolice San Francisco. (1989)" },
};

// 18.10
const HistoryEvent HIST_292[] = {
  { 1867, "[Historia] USA formalnie przejęły Alaskę od Rosji. (1867)" },
  { 1922, "[Kultura] Powstała BBC jako British Broadcasting Company. (1922)" },
  { 1954, "[Nauka] Zaprezentowano Regency TR-1, pierwsze radio tranzystorowe. (1954)" },
  { 1967, "[Nauka] Sonda Wenera 4 weszła w atmosferę Wenus. (1967)" },
  { 1989, "[Nauka] Sonda Galileo została wysłana w kierunku Jowisza. (1989)" },
};

// 19.10
const HistoryEvent HIST_293[] = {
  { 1469, "[Historia] Izabela Kastylijska poślubiła Ferdynanda Aragońskiego. (1469)" },
  { 1781, "[Historia] Brytyjczycy poddali się pod Yorktown w wojnie o USA. (1781)" },
  { 1812, "[Historia] Napoleon rozpoczął odwrót spod Moskwy. (1812)" },
  { 1987, "[Historia] Czarny Poniedziałek przyniósł globalny krach giełdowy. (1987)" },
  { 2005, "[Historia] Rozpoczął się proces Saddama Husajna w Bagdadzie. (2005)" },
};

// 20.10
const HistoryEvent HIST_294[] = {
  { 1827, "[Historia] Bitwa pod Navarino wsparła niepodległość Grecji. (1827)" },
  { 1944, "[Historia] Armia Czerwona i partyzanci wyzwolili Belgrad. (1944)" },
  { 1968, "[Kultura] Jacqueline Kennedy poślubiła Aristotelisa Onasisa. (1968)" },
  { 1973, "[Kultura] Uroczyście otwarto operę w Sydney. (1973)" },
  { 2011, "[Historia] Muammar Kaddafi zginął pod Syrtą w Libii. (2011)" },
};

// 21.10
const HistoryEvent HIST_295[] = {
  { 1805, "[Historia] Bitwa pod Trafalgarem zapewniła Wielkiej Brytanii dominację morską. (1805)" },
  { 1833, "[Nauka] Urodził się Alfred Nobel, fundator Nagrody Nobla. (1833)" },
  { 1879, "[Nauka] Edison przetestował praktyczną żarówkę żarową. (1879)" },
  { 1944, "[Historia] Amerykanie zdobyli Akwizgran, pierwsze duże niemieckie miasto. (1944)" },
  { 1959, "[Kultura] Otwarto Muzeum Guggenheima w Nowym Jorku. (1959)" },
};

// 22.10
const HistoryEvent HIST_296[] = {
  { 1797, "[Nauka] André-Jacques Garnerin wykonał pierwszy udany skok spadochronowy. (1797)" },
  { 1883, "[Kultura] Otwarto Metropolitan Opera House w Nowym Jorku. (1883)" },
  { 1962, "[Historia] John F. Kennedy ogłosił blokadę Kuby. (1962)" },
  { 1978, "[Polska] Jan Paweł II uroczyście zainaugurował pontyfikat. (1978)" },
  { 2008, "[Nauka] Indie wystrzeliły sondę Chandrayaan-1 ku Księżycowi. (2008)" },
};

// 23.10
const HistoryEvent HIST_297[] = {
  { -42, "[Historia] Druga bitwa pod Filippi pokonała zabójców Cezara. (42 p.n.e.)" },
  { 1915, "[Historia] W Nowym Jorku odbył się marsz za prawami wyborczymi kobiet. (1915)" },
  { 1956, "[Historia] Wybuchło powstanie węgierskie przeciw władzy komunistycznej. (1956)" },
  { 1983, "[Historia] Zamach na koszary Marines w Bejrucie zabił setki żołnierzy. (1983)" },
  { 2001, "[Nauka] Apple zaprezentował pierwszego iPoda. (2001)" },
};

// 24.10
const HistoryEvent HIST_298[] = {
  { 1648, "[Historia] Pokój westfalski zakończył wojnę trzydziestoletnią. (1648)" },
  { 1857, "[Kultura] Powstał Sheffield FC, najstarszy klub piłkarski. (1857)" },
  { 1929, "[Historia] Czarny Czwartek rozpoczął krach giełdowy w Nowym Jorku. (1929)" },
  { 1945, "[Historia] Weszła w życie Karta Narodów Zjednoczonych. (1945)" },
  { 2003, "[Nauka] Odbył się ostatni komercyjny lot samolotu Concorde. (2003)" },
};

// 25.10
const HistoryEvent HIST_299[] = {
  { 1415, "[Historia] Anglicy zwyciężyli Francuzów w bitwie pod Azincourt. (1415)" },
  { 1881, "[Kultura] Urodził się Pablo Picasso, współtwórca kubizmu. (1881)" },
  { 1936, "[Historia] Niemcy i Włochy podpisały protokół osi Berlin-Rzym. (1936)" },
  { 1971, "[Historia] ChRL zajęła miejsce Chin w Organizacji Narodów Zjednoczonych. (1971)" },
  { 2001, "[Nauka] Microsoft wydał system Windows XP dla użytkowników. (2001)" },
};

// 26.10
const HistoryEvent HIST_300[] = {
  { 1863, "[Kultura] Powstała The Football Association, porządkując zasady piłki. (1863)" },
  { 1905, "[Historia] Szwecja uznała rozwiązanie unii z Norwegią. (1905)" },
  { 1955, "[Historia] Ngo Dinh Diem ogłosił powstanie Republiki Wietnamu. (1955)" },
  { 1979, "[Historia] Prezydent Korei Południowej Park Chung-hee został zamordowany. (1979)" },
  { 2002, "[Historia] Rosyjskie siły zakończyły kryzys zakładników na Dubrowce. (2002)" },
};

// 27.10
const HistoryEvent HIST_301[] = {
  { 1275, "[Historia] Dokument Florisa V zawierał pierwszą wzmiankę o Amsterdamie. (1275)" },
  { 1553, "[Historia] Michael Servetus został spalony na stosie w Genewie. (1553)" },
  { 1858, "[Historia] Urodził się Theodore Roosevelt, późniejszy prezydent USA. (1858)" },
  { 1904, "[Nauka] Otwarto pierwszą linię metra w Nowym Jorku. (1904)" },
  { 1962, "[Historia] Podczas kryzysu kubańskiego zestrzelono U-2 nad Kubą. (1962)" },
};

// 28.10
const HistoryEvent HIST_302[] = {
  { 1886, "[Kultura] Odsłonięto Statuę Wolności w Nowym Jorku. (1886)" },
  { 1918, "[Historia] Proklamowano niepodległą Czechosłowację. (1918)" },
  { 1919, "[Historia] Kongres USA uchwalił ustawę Volsteada o prohibicji. (1919)" },
  { 1929, "[Historia] Czarny Poniedziałek mocno pogrążył giełdę nowojorską. (1929)" },
  { 1940, "[Historia] Włochy zaatakowały Grecję, rozszerzając wojnę na Bałkany. (1940)" },
};

// 29.10
const HistoryEvent HIST_303[] = {
  { 1923, "[Świat] Proklamowano Republikę Turcji. (1923)" },
  { 1929, "[Historia] Czarny Wtorek pogrążył giełdę nowojorską. (1929)" },
  { 1956, "[Historia] Izrael zaatakował Synaj, rozpoczynając kryzys sueski. (1956)" },
  { 1969, "[Nauka] Wysłano pierwszą wiadomość przez sieć ARPANET. (1969)" },
  { 1998, "[Nauka] Discovery wystartował w misję STS-95 z Johnem Glennem. (1998)" },
};

// 30.10
const HistoryEvent HIST_304[] = {
  { 1938, "[Kultura] Orson Welles nadał słuchowisko Wojna światów. (1938)" },
  { 1944, "[Polska] PKWN wydał dekret o ochronie państwa. (1944)" },
  { 1961, "[Historia] ZSRR przeprowadził próbę Car-bomby. (1961)" },
  { 1973, "[Historia] Otwarto most Bosforski, łączący Europę i Azję. (1973)" },
  { 1974, "[Historia] Muhammad Ali pokonał George'a Foremana w Zairze. (1974)" },
};

// 31.10
const HistoryEvent HIST_305[] = {
  { 1517, "[Historia] Marcin Luter wysłał 95 tez przeciw odpustom. (1517)" },
  { 1926, "[Kultura] Zmarł Harry Houdini, słynny iluzjonista. (1926)" },
  { 1941, "[Nauka] Ukończono prace przy Mount Rushmore w USA. (1941)" },
  { 1984, "[Świat] Zamordowano Indirę Gandhi, premier Indii. (1984)" },
  { 2000, "[Nauka] Wystartował Sojuz TM-31 z pierwszą stałą załogą ISS. (2000)" },
};

// 01.11
const HistoryEvent HIST_306[] = {
  { 1512, "[Kultura] Odsłonięto freski Michała Anioła w Kaplicy Sykstyńskiej. (1512)" },
  { 1755, "[Historia] Trzęsienie ziemi zniszczyło Lizbonę. (1755)" },
  { 1918, "[Polska] We Lwowie wybuchły walki polsko-ukraińskie. (1918)" },
  { 1952, "[Nauka] USA przeprowadziły pierwszy test bomby wodorowej Ivy Mike. (1952)" },
  { 1993, "[Historia] Weszła w życie Unia Europejska po traktacie z Maastricht. (1993)" },
};

// 02.11
const HistoryEvent HIST_307[] = {
  { 1917, "[Historia] Wielka Brytania ogłosiła deklarację Balfoura. (1917)" },
  { 1936, "[Nauka] BBC rozpoczęła regularną emisję telewizyjną. (1936)" },
  { 1947, "[Nauka] Howard Hughes wykonał jedyny lot samolotem H-4 Hercules. (1947)" },
  { 1983, "[Historia] USA ustanowiły Dzień Martina Luthera Kinga. (1983)" },
  { 2000, "[Nauka] Pierwsza stała załoga zamieszkała na stacji ISS. (2000)" },
};

// 03.11
const HistoryEvent HIST_308[] = {
  { 1493, "[Historia] Kolumb dotarł do Dominiki podczas drugiej wyprawy. (1493)" },
  { 1954, "[Kultura] W Japonii odbyła się premiera filmu Godzilla. (1954)" },
  { 1957, "[Nauka] ZSRR wystrzelił Sputnika 2 z psem Łajką. (1957)" },
  { 1978, "[Świat] Dominika uzyskała niepodległość od Wielkiej Brytanii. (1978)" },
  { 1992, "[Historia] Bill Clinton wygrał wybory prezydenckie w USA. (1992)" },
};

// 04.11
const HistoryEvent HIST_309[] = {
  { 1922, "[Historia] Howard Carter znalazł pierwszy stopień grobowca Tutanchamona. (1922)" },
  { 1946, "[Nauka] Konstytucja UNESCO weszła w życie po ratyfikacji. (1946)" },
  { 1956, "[Historia] Wojska ZSRR rozpoczęły szturm na Budapeszt. (1956)" },
  { 1979, "[Historia] Irańscy studenci zajęli ambasadę USA w Teheranie. (1979)" },
  { 2008, "[Historia] Barack Obama wygrał wybory prezydenckie w USA. (2008)" },
};

// 05.11
const HistoryEvent HIST_310[] = {
  { 1605, "[Historia] Aresztowanie Guya Fawkesa udaremniło spisek prochowy. (1605)" },
  { 1688, "[Historia] Wilhelm Orański wylądował w Brixham, zaczynając chwalebną rewolucję. (1688)" },
  { 1914, "[Historia] Wielka Brytania i Francja wypowiedziały wojnę Turcji. (1914)" },
  { 1940, "[Historia] Franklin D. Roosevelt wygrał trzecią kadencję prezydencką. (1940)" },
  { 2007, "[Nauka] Ogłoszono platformę Android i Open Handset Alliance. (2007)" },
};

// 06.11
const HistoryEvent HIST_311[] = {
  { 1860, "[Historia] Abraham Lincoln został wybrany prezydentem USA. (1860)" },
  { 1869, "[Kultura] Rutgers i Princeton rozegrali pierwszy mecz futbolu akademickiego. (1869)" },
  { 1935, "[Nauka] Prototyp Hawker Hurricane odbył pierwszy lot. (1935)" },
  { 1943, "[Historia] Armia Czerwona odbiła Kijów spod okupacji niemieckiej. (1943)" },
  { 1985, "[Historia] Partyzanci M-19 zajęli Pałac Sprawiedliwości w Bogocie. (1985)" },
};

// 07.11
const HistoryEvent HIST_312[] = {
  { 1867, "[Nauka] Urodziła się Maria Skłodowska-Curie w Warszawie. (1867)" },
  { 1917, "[Historia] Rewolucja październikowa rozpoczęła przejęcie władzy w Rosji. (1917)" },
  { 1918, "[Polska] W Lublinie powstał Tymczasowy Rząd Ludowy Republiki Polskiej. (1918)" },
  { 1944, "[Historia] Franklin D. Roosevelt wygrał czwartą kadencję w USA. (1944)" },
  { 1990, "[Świat] Mary Robinson została wybrana pierwszą kobietą-prezydentem Irlandii. (1990)" },
};

// 08.11
const HistoryEvent HIST_313[] = {
  { 1519, "[Historia] Hernán Cortés wkroczył do Tenochtitlán i spotkał Montezumę. (1519)" },
  { 1895, "[Nauka] Wilhelm Röntgen odkrył promienie X w Würzburgu. (1895)" },
  { 1923, "[Historia] Adolf Hitler rozpoczął pucz monachijski. (1923)" },
  { 1939, "[Historia] Georg Elser przeprowadził nieudany zamach na Hitlera. (1939)" },
  { 1960, "[Historia] John F. Kennedy wygrał wybory prezydenckie w USA. (1960)" },
};

// 09.11
const HistoryEvent HIST_314[] = {
  { 1799, "[Historia] Napoleon rozpoczął zamach stanu 18 brumaire'a. (1799)" },
  { 1918, "[Historia] W Berlinie proklamowano republikę niemiecką. (1918)" },
  { 1938, "[Historia] Noc kryształowa rozpoczęła pogrom Żydów w III Rzeszy. (1938)" },
  { 1989, "[Historia] Upadek Muru Berlińskiego otworzył drogę do zjednoczenia Niemiec. (1989)" },
  { 2005, "[Nauka] ESA wystrzeliła sondę Venus Express w stronę Wenus. (2005)" },
};

// 10.11
const HistoryEvent HIST_315[] = {
  { 1444, "[Polska] Władysław Warneńczyk poległ w bitwie pod Warną. (1444)" },
  { 1483, "[Kultura] Urodził się Marcin Luter, inicjator reformacji. (1483)" },
  { 1871, "[Historia] Henry Morton Stanley odnalazł Davida Livingstone'a w Ujiji. (1871)" },
  { 1918, "[Polska] Józef Piłsudski powrócił do Warszawy z Magdeburga. (1918)" },
  { 1969, "[Kultura] Sesame Street zadebiutowała w amerykańskiej telewizji. (1969)" },
};

// 11.11
const HistoryEvent HIST_316[] = {
  { 1889, "[Świat] Waszyngton został 42. stanem USA. (1889)" },
  { 1918, "[Polska] Józef Piłsudski przejął władzę wojskową w Warszawie. (1918)" },
  { 1918, "[Historia] Rozejm w Compiègne zakończył walki I wojny światowej. (1918)" },
  { 1965, "[Świat] Rodezja jednostronnie ogłosiła niepodległość od Wielkiej Brytanii. (1965)" },
  { 1975, "[Świat] Angola uzyskała niepodległość od Portugalii. (1975)" },
};

// 12.11
const HistoryEvent HIST_317[] = {
  { 1912, "[Historia] Odnaleziono ciała Roberta Scotta i jego towarzyszy. (1912)" },
  { 1927, "[Historia] Lew Trocki został usunięty z partii komunistycznej ZSRR. (1927)" },
  { 1970, "[Historia] Cyklon Bhola uderzył w Pakistan Wschodni. (1970)" },
  { 1980, "[Nauka] Voyager 1 przeleciał obok Saturna. (1980)" },
  { 1990, "[Nauka] Berners-Lee i Cailliau opisali projekt World Wide Web. (1990)" },
};

// 13.11
const HistoryEvent HIST_318[] = {
  { 1002, "[Historia] W Anglii dokonano masakry dnia św. Brykcjusza. (1002)" },
  { 1940, "[Kultura] Odbyła się premiera filmu Fantazja Walta Disneya. (1940)" },
  { 1956, "[Historia] Sąd Najwyższy USA utrzymał zakaz segregacji w autobusach. (1956)" },
  { 1974, "[Historia] Karen Silkwood zginęła w wypadku samochodowym. (1974)" },
  { 1985, "[Nauka] Erupcja Nevado del Ruiz zniszczyła Armero w Kolumbii. (1985)" },
};

// 14.11
const HistoryEvent HIST_319[] = {
  { 1851, "[Kultura] W USA ukazała się powieść Moby Dick Hermana Melville'a. (1851)" },
  { 1889, "[Historia] Nellie Bly wyruszyła w podróż dookoła świata. (1889)" },
  { 1960, "[Historia] Ruby Bridges rozpoczęła naukę w odsegregowanej szkole. (1960)" },
  { 1969, "[Nauka] Apollo 12 wystartował w kierunku Księżyca. (1969)" },
  { 1971, "[Nauka] Mariner 9 wszedł na orbitę Marsa jako pierwsza sonda. (1971)" },
};

// 15.11
const HistoryEvent HIST_320[] = {
  { 1889, "[Świat] Obalono cesarza Piotra II i proklamowano republikę w Brazylii. (1889)" },
  { 1920, "[Historia] W Genewie zebrało się pierwsze zgromadzenie Ligi Narodów. (1920)" },
  { 1959, "[Historia] W Kansas zamordowano rodzinę Clutterów. (1959)" },
  { 1971, "[Nauka] Ogłoszono mikroprocesor Intel 4004. (1971)" },
  { 1988, "[Świat] Palestyńska Rada Narodowa ogłosiła niepodległość Palestyny. (1988)" },
};

// 16.11
const HistoryEvent HIST_321[] = {
  { 1532, "[Historia] Francisco Pizarro pojmał Atahualpę, władcę Inków. (1532)" },
  { 1904, "[Nauka] John Ambrose Fleming opatentował lampę elektronową. (1904)" },
  { 1945, "[Nauka] Podpisano Akt Konstytucyjny UNESCO w Londynie. (1945)" },
  { 1974, "[Nauka] Wysłano wiadomość Arecibo w kierunku gromady M13. (1974)" },
  { 1988, "[Świat] W Pakistanie odbyły się wybory wygrane przez PPP Benazir Bhutto. (1988)" },
};

// 17.11
const HistoryEvent HIST_322[] = {
  { 1558, "[Historia] Elżbieta I została królową Anglii po śmierci Marii I. (1558)" },
  { 1869, "[Nauka] Uroczyście otwarto Kanał Sueski dla żeglugi. (1869)" },
  { 1970, "[Nauka] Luna 17 dostarczyła na Księżyc łazik Łunochod 1. (1970)" },
  { 1973, "[Historia] Wojsko stłumiło bunt studentów Politechniki Ateńskiej. (1973)" },
  { 1989, "[Historia] Demonstracja w Pradze rozpoczęła aksamitną rewolucję. (1989)" },
};

// 18.11
const HistoryEvent HIST_323[] = {
  { 1883, "[Nauka] W USA i Kanadzie wprowadzono standardowy czas kolejowy. (1883)" },
  { 1918, "[Świat] Łotwa ogłosiła niepodległość od Rosji. (1918)" },
  { 1928, "[Kultura] Odbyła się premiera filmu Steamboat Willie z Myszką Miki. (1928)" },
  { 1978, "[Historia] W Jonestown zginęło ponad 900 członków sekty Jim Jonesa. (1978)" },
  { 2013, "[Nauka] NASA wystrzeliła sondę MAVEN w kierunku Marsa. (2013)" },
};

// 19.11
const HistoryEvent HIST_324[] = {
  { 1493, "[Historia] Krzysztof Kolumb dotarł do Portoryko podczas drugiej wyprawy. (1493)" },
  { 1863, "[Historia] Lincoln wygłosił przemówienie gettysburskie. (1863)" },
  { 1942, "[Historia] Armia Czerwona rozpoczęła operację Uran pod Stalingradem. (1942)" },
  { 1969, "[Nauka] Apollo 12 wylądował na Księżycu w Oceanie Burz. (1969)" },
  { 1977, "[Świat] Anwar Sadat rozpoczął historyczną wizytę w Izraelu. (1977)" },
};

// 20.11
const HistoryEvent HIST_325[] = {
  { 1910, "[Historia] Rozpoczęła się rewolucja meksykańska. (1910)" },
  { 1945, "[Historia] Rozpoczął się proces norymberski głównych zbrodniarzy. (1945)" },
  { 1985, "[Nauka] Microsoft wydał system Windows 1.0. (1985)" },
  { 1989, "[Historia] ONZ przyjęła Konwencję o prawach dziecka. (1989)" },
  { 1998, "[Nauka] Wyniesiono moduł Zaria, pierwszy element stacji ISS. (1998)" },
};

// 21.11
const HistoryEvent HIST_326[] = {
  { 1694, "[Kultura] Urodził się Wolter, francuski filozof oświecenia. (1694)" },
  { 1783, "[Nauka] Odbył się pierwszy wolny lot ludzi balonem Montgolfierów. (1783)" },
  { 1964, "[Historia] Otwarto most Verrazzano-Narrows w Nowym Jorku. (1964)" },
  { 1995, "[Historia] Parafowano porozumienie z Dayton kończące wojnę w Bośni. (1995)" },
  { 2013, "[Historia] W Kijowie rozpoczęły się protesty Euromajdanu. (2013)" },
};

// 22.11
const HistoryEvent HIST_327[] = {
  { 1718, "[Historia] Pirat Czarnobrody zginął w walce u wybrzeży Karoliny. (1718)" },
  { 1918, "[Polska] Piłsudski został Tymczasowym Naczelnikiem Państwa. (1918)" },
  { 1963, "[Historia] Zamordowano prezydenta USA Johna F. Kennedy'ego. (1963)" },
  { 1975, "[Historia] Juan Carlos I został królem Hiszpanii. (1975)" },
  { 1995, "[Kultura] Film Toy Story trafił do kin w Stanach Zjednoczonych. (1995)" },
};

// 23.11
const HistoryEvent HIST_328[] = {
  { 1248, "[Historia] Sewilla poddała się wojskom Ferdynanda III Kastylijskiego. (1248)" },
  { 1889, "[Nauka] W San Francisco uruchomiono pierwszy komercyjny jukebox. (1889)" },
  { 1936, "[Kultura] Ukazał się pierwszy numer magazynu Life. (1936)" },
  { 1963, "[Kultura] BBC wyemitowała pierwszy odcinek serialu Doctor Who. (1963)" },
  { 2005, "[Świat] Ellen Johnson Sirleaf ogłoszono zwyciężczynią wyborów w Liberii. (2005)" },
};

// 24.11
const HistoryEvent HIST_329[] = {
  { 1642, "[Historia] Abel Tasman dostrzegł Tasmanię podczas wyprawy na południe. (1642)" },
  { 1859, "[Nauka] Ukazało się O powstawaniu gatunków Charlesa Darwina. (1859)" },
  { 1963, "[Historia] Jack Ruby zastrzelił Lee Harveya Oswalda w Dallas. (1963)" },
  { 1974, "[Nauka] W Etiopii odkryto szkielet Lucy, Australopithecus afarensis. (1974)" },
  { 1991, "[Kultura] Zmarł Freddie Mercury, wokalista zespołu Queen. (1991)" },
};

// 25.11
const HistoryEvent HIST_330[] = {
  { 1795, "[Polska] Stanisław August Poniatowski abdykował w Grodnie. (1795)" },
  { 1915, "[Nauka] Einstein przedstawił równania ogólnej teorii względności. (1915)" },
  { 1947, "[Kultura] Studio chiefs ogłosili czarną listę Hollywood. (1947)" },
  { 1960, "[Historia] Na Dominikanie zamordowano siostry Mirabal. (1960)" },
  { 1975, "[Świat] Surinam uzyskał niepodległość od Holandii. (1975)" },
};

// 26.11
const HistoryEvent HIST_331[] = {
  { 1917, "[Kultura] W Montrealu założono National Hockey League. (1917)" },
  { 1922, "[Historia] Howard Carter zajrzał do grobowca Tutanchamona. (1922)" },
  { 1942, "[Kultura] Odbyła się premiera filmu Casablanca w Nowym Jorku. (1942)" },
  { 1965, "[Nauka] Francja wystrzeliła satelitę Astérix. (1965)" },
  { 2008, "[Historia] W Mumbaju rozpoczęły się zamachy terrorystyczne. (2008)" },
};

// 27.11
const HistoryEvent HIST_332[] = {
  { 1095, "[Historia] Urban II wezwał do pierwszej krucjaty w Clermont. (1095)" },
  { 1895, "[Nauka] Alfred Nobel podpisał testament fundujący Nagrody Nobla. (1895)" },
  { 1940, "[Historia] Rumunia przystąpiła do paktu trzech. (1940)" },
  { 1942, "[Historia] Francuska flota samozatopiła się w Tulonie. (1942)" },
  { 1971, "[Nauka] Lądownik Mars 2 uderzył w powierzchnię Marsa. (1971)" },
};

// 28.11
const HistoryEvent HIST_333[] = {
  { 1520, "[Historia] Wyprawa Magellana wpłynęła z Atlantyku na Pacyfik. (1520)" },
  { 1918, "[Polska] Dekret wyborczy przyznał kobietom prawa wyborcze. (1918)" },
  { 1943, "[Historia] Rozpoczęła się konferencja teherańska Wielkiej Trójki. (1943)" },
  { 1964, "[Nauka] NASA wystrzeliła sondę Mariner 4 w kierunku Marsa. (1964)" },
  { 1994, "[Świat] Norwegowie odrzucili wejście do Unii Europejskiej. (1994)" },
};

// 29.11
const HistoryEvent HIST_334[] = {
  { 1830, "[Polska] W Warszawie wybuchło powstanie listopadowe. (1830)" },
  { 1899, "[Kultura] W Barcelonie założono klub piłkarski FC Barcelona. (1899)" },
  { 1947, "[Historia] ONZ przyjęła plan podziału Palestyny. (1947)" },
  { 1961, "[Nauka] Enos okrążył Ziemię w kapsule Mercury-Atlas 5. (1961)" },
  { 1972, "[Kultura] Atari wypuściło automatową grę Pong. (1972)" },
};

// 30.11
const HistoryEvent HIST_335[] = {
  { 1782, "[Historia] USA i Wielka Brytania podpisały wstępny pokój. (1782)" },
  { 1872, "[Kultura] Szkocja i Anglia rozegrały pierwszy oficjalny mecz reprezentacji. (1872)" },
  { 1936, "[Historia] Pożar zniszczył londyński Crystal Palace. (1936)" },
  { 1939, "[Historia] ZSRR zaatakował Finlandię, zaczynając wojnę zimową. (1939)" },
  { 1982, "[Kultura] Michael Jackson wydał album Thriller. (1982)" },
};

// 01.12
const HistoryEvent HIST_336[] = {
  { 1640, "[Świat] Portugalia rozpoczęła restaurację niepodległości spod władzy Hiszpanii. (1640)" },
  { 1913, "[Nauka] Ford uruchomił ruchomą linię montażową samochodów. (1913)" },
  { 1955, "[Historia] Rosa Parks odmówiła ustąpienia miejsca w autobusie. (1955)" },
  { 1959, "[Nauka] Podpisano traktat antarktyczny w Waszyngtonie. (1959)" },
  { 1990, "[Nauka] Przebito tunel serwisowy pod kanałem La Manche. (1990)" },
};

// 02.12
const HistoryEvent HIST_337[] = {
  { 1804, "[Historia] Napoleon Bonaparte koronował się na cesarza Francuzów. (1804)" },
  { 1823, "[Historia] USA ogłosiły doktrynę Monroe. (1823)" },
  { 1942, "[Nauka] Enrico Fermi uruchomił pierwszy kontrolowany reaktor Chicago Pile-1. (1942)" },
  { 1971, "[Świat] Powstały Zjednoczone Emiraty Arabskie. (1971)" },
  { 1982, "[Nauka] Wszczepiono pierwsze stałe sztuczne serce Jarvik-7. (1982)" },
};

// 03.12
const HistoryEvent HIST_338[] = {
  { 1857, "[Kultura] Urodził się Joseph Conrad, pisarz polskiego pochodzenia. (1857)" },
  { 1967, "[Nauka] W Kapsztadzie przeprowadzono pierwszy przeszczep serca. (1967)" },
  { 1971, "[Historia] Rozpoczęła się wojna indyjsko-pakistańska o Bangladesz. (1971)" },
  { 1984, "[Historia] W Bhopalu doszło do katastrofy gazowej. (1984)" },
  { 1989, "[Historia] Zakończył się szczyt maltański Busha i Gorbaczowa. (1989)" },
};

// 04.12
const HistoryEvent HIST_339[] = {
  { 771, "[Historia] Karol Wielki został jedynym królem Franków po śmierci brata. (771)" },
  { 1791, "[Kultura] Ukazał się pierwszy numer dziennika The Observer. (1791)" },
  { 1872, "[Historia] Odnaleziono opuszczony statek Mary Celeste na Atlantyku. (1872)" },
  { 1965, "[Nauka] Wystartowała misja Gemini 7 z Bormanem i Lovellem. (1965)" },
  { 1996, "[Nauka] NASA wystrzeliła sondę Mars Pathfinder. (1996)" },
};

// 05.12
const HistoryEvent HIST_340[] = {
  { 1492, "[Historia] Krzysztof Kolumb dotarł do Hispanioli. (1492)" },
  { 1766, "[Kultura] W Londynie odbyła się pierwsza aukcja domu Christie's. (1766)" },
  { 1901, "[Kultura] Urodził się Walt Disney, twórca Myszki Miki. (1901)" },
  { 1933, "[Historia] Ratyfikowano 21. poprawkę znoszącą prohibicję w USA. (1933)" },
  { 1955, "[Historia] Rozpoczął się bojkot autobusów w Montgomery. (1955)" },
};

// 06.12
const HistoryEvent HIST_341[] = {
  { 1240, "[Historia] Mongołowie zdobyli Kijów po oblężeniu miasta. (1240)" },
  { 1865, "[Historia] USA ratyfikowały 13. poprawkę znoszącą niewolnictwo. (1865)" },
  { 1917, "[Świat] Finlandia ogłosiła niepodległość od Rosji. (1917)" },
  { 1921, "[Historia] Podpisano traktat angielsko-irlandzki. (1921)" },
  { 1992, "[Historia] Zburzono meczet Babri Masjid w Ajodhji. (1992)" },
};

// 07.12
const HistoryEvent HIST_342[] = {
  { -43, "[Historia] Zamordowano Cycerona podczas proskrypcji triumwirów. (43 p.n.e.)" },
  { 1787, "[Historia] Delaware jako pierwszy stan ratyfikował Konstytucję USA. (1787)" },
  { 1941, "[Historia] Japonia zaatakowała Pearl Harbor na Hawajach. (1941)" },
  { 1972, "[Nauka] Apollo 17 wystartował w ostatnią księżycową misję Apollo. (1972)" },
  { 1988, "[Historia] Trzęsienie ziemi zniszczyło część Armenii. (1988)" },
};

// 08.12
const HistoryEvent HIST_343[] = {
  { 1863, "[Historia] Lincoln ogłosił Proklamację amnestii i odbudowy USA. (1863)" },
  { 1886, "[Kultura] Urodził się Diego Rivera, meksykański malarz murali. (1886)" },
  { 1941, "[Polska] Rozpoczęły się mordy w obozie zagłady Chełmno. (1941)" },
  { 1980, "[Kultura] John Lennon został zastrzelony w Nowym Jorku. (1980)" },
  { 1991, "[Historia] Podpisano porozumienie białowieskie rozwiązujące ZSRR. (1991)" },
};
// 09.12
const HistoryEvent HIST_344[] = {
  { 1824, "[Historia] Bitwa pod Ayacucho przesądziła o niepodległości Peru. (1824)" },
  { 1905, "[Historia] We Francji uchwalono rozdział Kościoła od państwa. (1905)" },
  { 1922, "[Polska] Gabriel Narutowicz został wybrany pierwszym prezydentem RP. (1922)" },
  { 1968, "[Nauka] Douglas Engelbart pokazał system NLS i mysz komputerową. (1968)" },
  { 1987, "[Historia] Rozpoczęła się pierwsza intifada palestyńska. (1987)" },
};

// 10.12
const HistoryEvent HIST_345[] = {
  { 1845, "[Nauka] Robert W. Thomson opatentował pneumatyczną oponę. (1845)" },
  { 1868, "[Nauka] W Londynie uruchomiono pierwszą uliczną sygnalizację świetlną. (1868)" },
  { 1901, "[Kultura] Po raz pierwszy wręczono Nagrody Nobla. (1901)" },
  { 1948, "[Historia] ONZ przyjęła Powszechną Deklarację Praw Człowieka. (1948)" },
  { 1983, "[Polska] Danuta Wałęsa odebrała Pokojowego Nobla dla Lecha Wałęsy. (1983)" },
};

// 11.12
const HistoryEvent HIST_346[] = {
  { 1816, "[Świat] Indiana została 19. stanem Stanów Zjednoczonych. (1816)" },
  { 1931, "[Historia] Przyjęto Statut Westminsterski dla dominiów brytyjskich. (1931)" },
  { 1941, "[Historia] Niemcy i Włochy wypowiedziały wojnę Stanom Zjednoczonym. (1941)" },
  { 1946, "[Nauka] Zgromadzenie Ogólne ONZ powołało UNICEF. (1946)" },
  { 1972, "[Nauka] Apollo 17 wylądował w dolinie Taurus-Littrow na Księżycu. (1972)" },
};

// 12.12
const HistoryEvent HIST_347[] = {
  { 1901, "[Nauka] Marconi odebrał pierwszy transatlantycki sygnał radiowy. (1901)" },
  { 1911, "[Świat] Delhi ogłoszono nową stolicą Indii Brytyjskich. (1911)" },
  { 1915, "[Kultura] Urodził się Frank Sinatra, amerykański piosenkarz i aktor. (1915)" },
  { 1980, "[Nauka] Apple weszło na giełdę jako spółka publiczna. (1980)" },
  { 2015, "[Świat] Przyjęto porozumienie paryskie w sprawie klimatu. (2015)" },
};

// 13.12
const HistoryEvent HIST_348[] = {
  { 1577, "[Historia] Francis Drake wypłynął w wyprawę dookoła świata. (1577)" },
  { 1642, "[Świat] Abel Tasman jako pierwszy Europejczyk zobaczył Nową Zelandię. (1642)" },
  { 1937, "[Historia] Rozpoczęła się masakra nankińska. (1937)" },
  { 1981, "[Polska] Wprowadzono stan wojenny w PRL. (1981)" },
  { 2003, "[Historia] Schwytano Saddama Husajna w Iraku. (2003)" },
};

// 14.12
const HistoryEvent HIST_349[] = {
  { 1542, "[Historia] Maria Stuart została królową Szkocji jako niemowlę. (1542)" },
  { 1911, "[Nauka] Roald Amundsen jako pierwszy dotarł do bieguna południowego. (1911)" },
  { 1918, "[Świat] Brytyjki po raz pierwszy głosowały w wyborach powszechnych. (1918)" },
  { 1962, "[Nauka] Mariner 2 przeleciał obok Wenus jako pierwsza udana sonda międzyplanetarna. (1962)" },
  { 1995, "[Historia] W Paryżu podpisano porozumienie pokojowe z Dayton. (1995)" },
};

// 15.12
const HistoryEvent HIST_350[] = {
  { 37, "[Historia] Urodził się Neron, późniejszy cesarz rzymski. (37)" },
  { 1791, "[Historia] Ratyfikowano Bill of Rights, pierwsze poprawki do Konstytucji USA. (1791)" },
  { 1859, "[Kultura] Urodził się Ludwik Zamenhof, twórca języka esperanto. (1859)" },
  { 1939, "[Kultura] Odbyła się premiera filmu Przeminęło z wiatrem w Atlancie. (1939)" },
  { 1970, "[Nauka] Wenera 7 przekazała dane z powierzchni Wenus. (1970)" },
};

// 16.12
const HistoryEvent HIST_351[] = {
  { 1653, "[Historia] Oliver Cromwell został Lordem Protektorem Anglii. (1653)" },
  { 1773, "[Historia] Koloniści wyrzucili herbatę do portu w Bostonie. (1773)" },
  { 1922, "[Polska] Zamordowano prezydenta Gabriela Narutowicza. (1922)" },
  { 1944, "[Historia] Rozpoczęła się niemiecka ofensywa w Ardenach. (1944)" },
  { 1971, "[Świat] Kapitulacja wojsk Pakistanu zakończyła wojnę o Bangladesz. (1971)" },
};

// 17.12
const HistoryEvent HIST_352[] = {
  { 1903, "[Nauka] Bracia Wright wykonali pierwszy udany lot samolotem. (1903)" },
  { 1939, "[Historia] Niemiecki pancernik Graf Spee samozatopił się pod Montevideo. (1939)" },
  { 1970, "[Polska] W Gdyni wojsko strzelało do robotników w Czarny Czwartek. (1970)" },
  { 1989, "[Kultura] W USA wyemitowano pierwszy odcinek serialu The Simpsons. (1989)" },
  { 2010, "[Historia] Mohamed Bouazizi podpalił się, zapoczątkowując Arabską Wiosnę. (2010)" },
};

// 18.12
const HistoryEvent HIST_353[] = {
  { 1865, "[Historia] Ogłoszono przyjęcie 13. poprawki znoszącej niewolnictwo w USA. (1865)" },
  { 1892, "[Kultura] W Petersburgu odbyła się premiera baletu Dziadek do orzechów. (1892)" },
  { 1912, "[Nauka] Ogłoszono odkrycie człowieka z Piltdown, późniejszego fałszerstwa. (1912)" },
  { 1972, "[Historia] USA rozpoczęły operację Linebacker II nad Wietnamem. (1972)" },
  { 1997, "[Nauka] HTML 4.0 opublikowano jako rekomendację W3C. (1997)" },
};

// 19.12
const HistoryEvent HIST_354[] = {
  { 1843, "[Kultura] Ukazała się Opowieść wigilijna Charlesa Dickensa. (1843)" },
  { 1909, "[Kultura] Założono klub piłkarski Borussia Dortmund. (1909)" },
  { 1972, "[Nauka] Apollo 17 wrócił na Ziemię po ostatniej misji księżycowej. (1972)" },
  { 1984, "[Historia] Podpisano deklarację chińsko-brytyjską w sprawie Hongkongu. (1984)" },
  { 1998, "[Historia] Izba Reprezentantów USA przegłosowała impeachment Clintona. (1998)" },
};

// 20.12
const HistoryEvent HIST_355[] = {
  { 1803, "[Historia] Francja przekazała USA terytorium Luizjany. (1803)" },
  { 1917, "[Historia] W Rosji Sowieckiej utworzono Czekę, policję polityczną. (1917)" },
  { 1989, "[Świat] Timișoara ogłosiła się pierwszym wolnym miastem Rumunii. (1989)" },
  { 1989, "[Historia] USA rozpoczęły operację Just Cause w Panamie. (1989)" },
  { 1995, "[Historia] NATO rozpoczęło misję IFOR w Bośni i Hercegowinie. (1995)" },
};

// 21.12
const HistoryEvent HIST_356[] = {
  { 1913, "[Kultura] W New York World opublikowano pierwszą nowoczesną krzyżówkę. (1913)" },
  { 1937, "[Kultura] Odbyła się premiera Królewny Śnieżki Disneya. (1937)" },
  { 1968, "[Nauka] Wystartowała misja Apollo 8, pierwszy lot ludzi ku Księżycowi. (1968)" },
  { 1988, "[Historia] Nad Lockerbie eksplodował samolot Pan Am 103. (1988)" },
  { 1991, "[Historia] Podpisano protokół Ałma-Ata, potwierdzając rozpad ZSRR. (1991)" },
};

// 22.12
const HistoryEvent HIST_357[] = {
  { 1808, "[Kultura] Beethoven zaprezentował V i VI symfonię w Wiedniu. (1808)" },
  { 1885, "[Świat] Itō Hirobumi został pierwszym premierem Japonii. (1885)" },
  { 1989, "[Historia] Nicolae Ceaușescu został obalony podczas rewolucji rumuńskiej. (1989)" },
  { 1989, "[Historia] Ponownie otwarto przejście przy Bramie Brandenburskiej. (1989)" },
  { 1990, "[Polska] Lech Wałęsa został zaprzysiężony na prezydenta RP. (1990)" },
};

// 23.12
const HistoryEvent HIST_358[] = {
  { 1783, "[Historia] George Washington zrezygnował z dowództwa Armii Kontynentalnej. (1783)" },
  { 1888, "[Kultura] Vincent van Gogh okaleczył ucho w Arles. (1888)" },
  { 1913, "[Nauka] Woodrow Wilson podpisał ustawę tworzącą Rezerwę Federalną. (1913)" },
  { 1947, "[Nauka] W Bell Labs zademonstrowano pierwszy tranzystor. (1947)" },
  { 1986, "[Nauka] Samolot Voyager zakończył lot dookoła świata bez tankowania. (1986)" },
};

// 24.12
const HistoryEvent HIST_359[] = {
  { 1524, "[Historia] Zmarł Vasco da Gama, żeglarz i odkrywca drogi do Indii. (1524)" },
  { 1814, "[Historia] Podpisano traktat gandawski kończący wojnę 1812 roku. (1814)" },
  { 1951, "[Świat] Libia ogłosiła niepodległość jako Królestwo Libii. (1951)" },
  { 1968, "[Nauka] Apollo 8 wszedł na orbitę Księżyca. (1968)" },
  { 1979, "[Nauka] Ariane 1 odbyła pierwszy udany start z Kourou. (1979)" },
};

// 25.12
const HistoryEvent HIST_360[] = {
  { 800, "[Historia] Karol Wielki został koronowany na cesarza w Rzymie. (800)" },
  { 1066, "[Historia] Wilhelm Zdobywca został koronowany na króla Anglii. (1066)" },
  { 1776, "[Historia] Washington rozpoczął przeprawę przez Delaware. (1776)" },
  { 1926, "[Świat] Hirohito został cesarzem Japonii, rozpoczynając erę Shōwa. (1926)" },
  { 1991, "[Historia] Michaił Gorbaczow ustąpił z urzędu prezydenta ZSRR. (1991)" },
};

// 26.12
const HistoryEvent HIST_361[] = {
  { 1805, "[Historia] Podpisano pokój w Preszburgu po klęsce Austrii. (1805)" },
  { 1825, "[Historia] W Petersburgu wybuchło powstanie dekabrystów. (1825)" },
  { 1898, "[Nauka] Maria i Piotr Curie ogłosili odkrycie radu. (1898)" },
  { 1943, "[Historia] Zatopiono niemiecki pancernik Scharnhorst. (1943)" },
  { 1991, "[Historia] Rada Republik formalnie zakończyła istnienie ZSRR. (1991)" },
};

// 27.12
const HistoryEvent HIST_362[] = {
  { 537, "[Kultura] Uroczyście poświęcono bazylikę Hagia Sophia w Konstantynopolu. (537)" },
  { 1831, "[Nauka] HMS Beagle wypłynął z Darwinem w podróż badawczą. (1831)" },
  { 1918, "[Polska] W Poznaniu wybuchło powstanie wielkopolskie. (1918)" },
  { 1945, "[Nauka] Weszły w życie umowy tworzące MFW i Bank Światowy. (1945)" },
  { 2007, "[Historia] Benazir Bhutto zginęła w zamachu w Rawalpindi. (2007)" },
};

// 28.12
const HistoryEvent HIST_363[] = {
  { 1065, "[Historia] Konsekrowano Opactwo Westminsterskie w Londynie. (1065)" },
  { 1836, "[Historia] Hiszpania uznała niepodległość Meksyku. (1836)" },
  { 1895, "[Kultura] Bracia Lumière urządzili pierwszy płatny pokaz filmowy. (1895)" },
  { 1973, "[Kultura] Na Zachodzie ukazał się Archipelag Gułag Sołżenicyna. (1973)" },
  { 1981, "[Nauka] Urodziła się Elizabeth Carr, pierwsze dziecko IVF w USA. (1981)" },
};

// 29.12
const HistoryEvent HIST_364[] = {
  { 1170, "[Historia] Tomasz Becket został zamordowany w katedrze Canterbury. (1170)" },
  { 1845, "[Świat] Teksas został 28. stanem Stanów Zjednoczonych. (1845)" },
  { 1890, "[Historia] Doszło do masakry Lakotów nad Wounded Knee. (1890)" },
  { 1911, "[Świat] Mongolia ogłosiła niepodległość od Chin. (1911)" },
  { 1937, "[Świat] Weszła w życie Konstytucja Irlandii. (1937)" },
};

// 30.12
const HistoryEvent HIST_365[] = {
  { 1922, "[Historia] Utworzono Związek Socjalistycznych Republik Radzieckich. (1922)" },
  { 1924, "[Nauka] Hubble ogłosił, że Andromeda leży poza Drogą Mleczną. (1924)" },
  { 1927, "[Świat] W Tokio uruchomiono pierwszą linię metra w Azji. (1927)" },
  { 1947, "[Historia] Król Michał I został zmuszony do abdykacji w Rumunii. (1947)" },
  { 2006, "[Historia] Stracono Saddama Husajna po wyroku irackiego trybunału. (2006)" },
};

// 31.12
const HistoryEvent HIST_366[] = {
  { 335, "[Historia] Zmarł papież Sylwester I, patron ostatniego dnia roku. (335)" },
  { 1600, "[Historia] Elżbieta I nadała statut Kompanii Wschodnioindyjskiej. (1600)" },
  { 1879, "[Nauka] Edison publicznie pokazał oświetlenie żarowe w Menlo Park. (1879)" },
  { 1907, "[Kultura] Po raz pierwszy opuszczono kulę sylwestrową na Times Square. (1907)" },
  { 1999, "[Historia] Borys Jelcyn ustąpił, a Putin został p.o. prezydenta Rosji. (1999)" },
};

const HistoryDay DAILY_HISTORY[366] = {
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
