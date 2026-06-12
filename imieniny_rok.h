#pragma once

// Imieniny na cały rok - wariant dłuższy, do 4 imion na dzień.
// Kodowanie: UTF-8, z polskimi znakami.
// Forma dopełniacza do napisu „imieniny ...”, np. „Janiny, Jana”.
// Zawiera 29 lutego, razem 366 pozycji.
// Aby podłączyć: #include "imieniny_rok_4_PL.h" i w nameDaysForDate() użyj nameDaysForDate(month, day).

static const char* const NAME_DAY_TABLE[366] = {
  "Marii, Mieczysława, Mieszka, Masława",  // 01.01
  "Bazylego, Grzegorza, Izydora, Makarego",  // 02.01
  "Arlety, Danuty, Genowefy, Zdzisława",  // 03.01
  "Angeliki, Anieli, Elżbiety, Eugeniusza",  // 04.01
  "Hanny, Edwarda, Emiliana, Szymona",  // 05.01
  "Baltazara, Kacpera, Melchiora",  // 06.01
  "Lucjana, Juliana, Rajmunda, Walentyny",  // 07.01
  "Juliusza, Mścisława, Seweryna, Artura",  // 08.01
  "Marceliny, Marcjanny, Adriana, Juliana",  // 09.01
  "Danuty, Walerii, Bonifacego, Dobrosława",  // 10.01
  "Teodozjusza, Honoraty, Matyldy, Feliksa",  // 11.01
  "Arkadiusza, Benedykta, Rajmunda, Grety",  // 12.01
  "Bogumiły, Weroniki, Bogumiła",  // 13.01
  "Hilarego, Dobrosława, Feliksa, Niny",  // 14.01
  "Dąbrówki, Pawła, Arnolda, Izydora",  // 15.01
  "Waldemara, Marcelego, Włodzimierza, Walerii",  // 16.01
  "Mariana, Rościsława, Antoniego, Jana",  // 17.01
  "Piotra, Małgorzaty, Beatrycze",  // 18.01
  "Marty, Henryka, Mariusza, Erwina",  // 19.01
  "Fabiana, Fabioli, Sebastiana, Mili",  // 20.01
  "Agnieszki, Jarosława, Nory",  // 21.01
  "Anastazego, Wincentego, Dominiki, Mateusza",  // 22.01
  "Ildefonsa, Rajmunda, Jana, Fernandy",  // 23.01
  "Felicji, Rafała, Franciszka, Roberta",  // 24.01
  "Elwiry, Pawła, Miłosza, Tatiany",  // 25.01
  "Pauliny, Polikarpa, Tymoteusza, Michała",  // 26.01
  "Ilony, Przybysława, Anieli, Jerzego",  // 27.01
  "Agnieszki, Juliana, Walerego, Karola",  // 28.01
  "Zdzisława, Franciszka, Józefa, Salomei",  // 29.01
  "Teofila, Macieja, Martyny",  // 30.01
  "Marceli, Marceliny, Ludwiki, Ludwika",  // 31.01
  "Seweryna, Brygidy, Ignacego, Dobrogniewa",  // 01.02
  "Joanny, Marii, Mirosława, Kornela",  // 02.02
  "Wawrzyńca, Błażeja, Oskara, Joanny",  // 03.02
  "Weroniki, Mariusza, Andrzeja, Józefa",  // 04.02
  "Agaty, Adelajdy, Agnieszki, Izydora",  // 05.02
  "Doroty, Bogdana, Pawła, Bohdana",  // 06.02
  "Ryszarda, Teodora, Romualda, Romana",  // 07.02
  "Hieronima, Sebastiana, Piotra, Jana",  // 08.02
  "Eryki, Cyryla, Apolonii, Mariana",  // 09.02
  "Marii, Olgierda, Scholastyki, Elwiry",  // 10.02
  "Grzegorza, Lucjana, Olgierda, Bernardetty",  // 11.02
  "Radosława, Damiana, Eulalii, Aleksego",  // 12.02
  "Grzegorza, Katarzyny, Jordana, Lesława",  // 13.02
  "Cyryla, Metodego, Walentego, Walentyny",  // 14.02
  "Jowity, Faustyna, Zygfryda, Klaudii",  // 15.02
  "Danuty, Juliana, Szymona, Daniela",  // 16.02
  "Aleksego, Łukasza, Zbigniewa, Donata",  // 17.02
  "Szymona, Konstancji, Maksyma, Flawiana",  // 18.02
  "Arnolda, Józefa, Konrada, Henryka",  // 19.02
  "Leona, Ludomiła, Ludomiły, Ludomira",  // 20.02
  "Eleonory, Roberta, Feliksa, Fortunata",  // 21.02
  "Marty, Małgorzaty, Piotra, Nikifora",  // 22.02
  "Romany, Romana, Damiana, Polikarpa",  // 23.02
  "Macieja, Marka, Bogusza, Sergiusza",  // 24.02
  "Cezarego, Donata, Wiktora, Almy",  // 25.02
  "Mirosława, Aleksandera, Bogumiła, Bogumiły",  // 26.02
  "Gabriela, Anastazji, Juliana, Liwii",  // 27.02
  "Romana, Ludomira, Makarego",  // 28.02
  "Romana, Antonii, Augusta, Oswalda",  // 29.02
  "Albiny, Antoniny, Dawida, Radosława",  // 01.03
  "Heleny, Halszki, Krzysztofa, Karola",  // 02.03
  "Maryny, Kunegundy, Tycjana, Kingi",  // 03.03
  "Arkadiusza, Eugeniusza, Kazimierza, Łucji",  // 04.03
  "Adriana, Fryderyka, Teofila, Aurory",  // 05.03
  "Róży, Wiktora, Agnieszki, Jordana",  // 06.03
  "Tomasza, Felicyty, Pawła, Perpetuy",  // 07.03
  "Beaty, Wincentego, Jana, Juliana",  // 08.03
  "Franciszki, Dominika, Katarzyny, Brunona",  // 09.03
  "Cypriana, Aleksandera, Marcelego, Bożysławy",  // 10.03
  "Benedykta, Konstantego, Edwina, Ludosława",  // 11.03
  "Alojzego, Bernarda, Grzegorza, Justyny",  // 12.03
  "Bożeny, Krystyny, Patrycji, Marka",  // 13.03
  "Leona, Martyny, Matyldy, Łazarza",  // 14.03
  "Longina, Klemensa, Ludwiki, Delfiny",  // 15.03
  "Izabeli, Oktawii, Hilarego, Henryka",  // 16.03
  "Patryka, Zbigniewa, Reginy, Gertrudy",  // 17.03
  "Cyryla, Edwarda, Boguchwały, Narcyza",  // 18.03
  "Józefa, Bogdana, Aleksandryny",  // 19.03
  "Klaudii, Eufemii, Wincentego, Maurycego",  // 20.03
  "Lubomira, Lubomiry, Benedykta",  // 21.03
  "Katarzyny, Bogusława, Oktawiana, Jagody",  // 22.03
  "Pelagii, Feliksa, Zbysława, Konrada",  // 23.03
  "Marka, Gabriela, Gabrieli, Katarzyny",  // 24.03
  "Marioli, Więczysława, Marii, Ireneusza",  // 25.03
  "Larysy, Emanuela, Teodora, Tymoteusza",  // 26.03
  "Lidii, Ernesta, Jana, Marka",  // 27.03
  "Anieli, Sykstusa, Joanny, Antoniego",  // 28.03
  "Wiktoryna, Wiktoryny, Helmuta, Eustachego",  // 29.03
  "Anieli, Leonarda, Amelii, Jana",  // 30.03
  "Beniamina, Balbiny, Kordulii, Kornelii",  // 31.03
  "Teodora, Grażyny, Ireny, Zygmunta",  // 01.04
  "Władysława, Franciszka, Teodozji, Urbana",  // 02.04
  "Ryszarda, Ireny, Pankracego, Ingi",  // 03.04
  "Benedykta, Izydora, Wacława",  // 04.04
  "Katarzyny, Wincentego, Ireny, Kleofasa",  // 05.04
  "Izoldy, Ireneusza, Celestyny, Wilhelma",  // 06.04
  "Rufina, Donata, Jana, Saturnina",  // 07.04
  "Dionizego, Julii, Cezaryny, Januarego",  // 08.04
  "Marii, Dymitra, Mai, Marcelego",  // 09.04
  "Michała, Makarego, Terencjusza, Borysławy",  // 10.04
  "Filipa, Leona, Jaromira, Stanisława",  // 11.04
  "Damiana, Juliusza, Zenona, Wiktora",  // 12.04
  "Przemysława, Idy, Marcina, Hermenegildy",  // 13.04
  "Bereniki, Waleriana, Justyny, Bernarda",  // 14.04
  "Ludwiny, Wacławy, Anastazji, Teodora",  // 15.04
  "Cecyliana, Bernadety, Julii, Ksenii",  // 16.04
  "Rudolfa, Roberta, Stefana, Aniceta",  // 17.04
  "Alicji, Bogusławy, Apoloniusza, Gościsławy",  // 18.04
  "Adolfa, Tymona, Włodzimierza, Konrada",  // 19.04
  "Czesława, Agnieszki, Mariana, Czecha",  // 20.04
  "Bartosza, Feliksa, Konrada, Anzelma",  // 21.04
  "Kai, Łukasza, Leona, Nastazji",  // 22.04
  "Ilony, Jerzego, Wojciecha",  // 23.04
  "Aleksego, Horacego, Horacji, Grzegorza",  // 24.04
  "Marka, Jarosława",  // 25.04
  "Marzeny, Klaudiusza, Marii, Marceliny",  // 26.04
  "Zyty, Teofila, Felicji, Sergiusza",  // 27.04
  "Pawła, Walerii, Ludwika, Piotra",  // 28.04
  "Rity, Donaty, Roberta, Roberty",  // 29.04
  "Mariana, Katarzyny, Ludwika, Piusa",  // 30.04
  "Józefa, Jeremiasza, Anieli, Filipa",  // 01.05
  "Zygmunta, Atanazego, Anatola, Longiny",  // 02.05
  "Marii, Marioli, Ireneusza, Antoniny",  // 03.05
  "Moniki, Floriana, Władysława, Michała",  // 04.05
  "Ireny, Waldemara, Irydy, Tamary",  // 05.05
  "Filipa, Judyty, Jana, Jakuba",  // 06.05
  "Benedykta, Gizeli, Elżbiety, Ludomiry",  // 07.05
  "Lizy, Stanisława, Wiktora, Marka",  // 08.05
  "Bożydara, Grzegorza, Karoliny, Karola",  // 09.05
  "Izydora, Antoniny, Symeona, Jana",  // 10.05
  "Igi, Ignacego, Franciszka, Filipa",  // 11.05
  "Achillesa, Joanny, Dominika, Pankracego",  // 12.05
  "Glorii, Gerwazego, Roberta, Serwacego",  // 13.05
  "Bonifacego, Dobiesława, Wiktora, Macieja",  // 14.05
  "Zofii, Nadziei, Berty, Izydora",  // 15.05
  "Andrzeja, Jędrzeja, Więczysława, Małgorzaty",  // 16.05
  "Brunona, Paschalisa, Weroniki, Wiktora",  // 17.05
  "Eryka, Feliksa, Aleksandera, Jana",  // 18.05
  "Iwona, Piotra, Mikołaja, Celestyny",  // 19.05
  "Aleksandera, Bazylego, Bernardyna, Krystyny",  // 20.05
  "Jana, Wiktora, Tymoteusza, Kryspina",  // 21.05
  "Heleny, Wiesławy, Julii, Ryty",  // 22.05
  "Emilii, Iwony, Leoncjusza, Michała",  // 23.05
  "Joanny, Zuzanny, Marii, Mileny",  // 24.05
  "Borysa, Grzegorza, Urbana, Magdaleny",  // 25.05
  "Filipa, Pauliny, Marianny, Eweliny",  // 26.05
  "Augustyna, Juliana, Jana, Juliusza",  // 27.05
  "Jaromira, Justa, Justyny, Wiktora",  // 28.05
  "Magdaleny, Bogumiły, Teodozji, Urszuli",  // 29.05
  "Ferdynanda, Karola, Feliksa, Jana",  // 30.05
  "Anieli, Petronelii, Kamili, Feliksa",  // 31.05
  "Jakuba, Justyna, Konrada, Hortensji",  // 01.06
  "Erazma, Marianny, Marcelina, Piotra",  // 02.06
  "Leszka, Tamary, Karola, Klotyldy",  // 03.06
  "Franciszka, Karola, Kwiryny, Helgi",  // 04.06
  "Waltera, Bonifacego, Walerii, Kiry",  // 05.06
  "Norberta, Laurentego, Dominiki, Bogumiły",  // 06.06
  "Roberta, Wiesława, Antoniego, Jarosława",  // 07.06
  "Medarda, Maksyma, Seweryna, Adelajdy",  // 08.06
  "Anny, Felicjana, Pelagii, Efrema",  // 09.06
  "Bogumiła, Małgorzaty, Diany",  // 10.06
  "Barnaby, Radomiła, Feliksa, Benedykta",  // 11.06
  "Janiny, Jana, Leona, Leonii",  // 12.06
  "Lucjana, Antoniego, Gracji",  // 13.06
  "Bazylego, Elizy, Justyny, Elwiry",  // 14.06
  "Wita, Jolanty, Witolda, Lotara",  // 15.06
  "Aliny, Justyna, Justyny, Anety",  // 16.06
  "Alberta, Ignacego, Laury, Adolfa",  // 17.06
  "Marka, Elżbiety, Pauli",  // 18.06
  "Gerwazego, Protazego, Romualda, Sylwii",  // 19.06
  "Diany, Bogny, Bogumiły, Florentyny",  // 20.06
  "Alicji, Alojzego, Marty, Rudolfa",  // 21.06
  "Pauliny, Tomasza, Flawiusza, Jana",  // 22.06
  "Wandy, Zenona, Albiny",  // 23.06
  "Jana, Danuty, Janiny",  // 24.06
  "Łucji, Wilhelma, Doroty, Witolda",  // 25.06
  "Jana, Pawła, Pauliny, Rudolfiny",  // 26.06
  "Maryli, Władysława, Marii, Cyryla",  // 27.06
  "Leona, Ireneusza, Florentyny, Ligii",  // 28.06
  "Piotra, Pawła, Salomei",  // 29.06
  "Emilii, Lucyny, Rajmunda, Arnolda",  // 30.06
  "Haliny, Mariana, Ottona, Marcina",  // 01.07
  "Jagody, Urbana, Marii, Kariny",  // 02.07
  "Jacka, Anatola, Tomasza, Mirosława",  // 03.07
  "Odona, Malwiny, Teodora, Elżbiety",  // 04.07
  "Marii, Antoniego, Karoliny, Bartłomieja",  // 05.07
  "Gotarda, Dominiki, Łucji, Teresy",  // 06.07
  "Benedykta, Cyryla, Metodego, Estery",  // 07.07
  "Adriany, Eugeniusza, Elżbiety, Edgara",  // 08.07
  "Lukrecji, Weroniki, Zenona, Sylwii",  // 09.07
  "Olafa, Witalisa, Filipa, Amelii",  // 10.07
  "Olgi, Kaliny, Benedykta, Pelagii",  // 11.07
  "Jana, Brunona, Weroniki, Bonifacego",  // 12.07
  "Małgorzaty, Henryka, Ernesta, Andrzeja",  // 13.07
  "Bonawentury, Stelli, Izabeli, Franciszka",  // 14.07
  "Dawida, Henryka, Włodzimierza, Igi",  // 15.07
  "Eustachego, Marii, Benedykta, Mariki",  // 16.07
  "Anety, Bogdana, Aleksego, Jadwigi",  // 17.07
  "Emila, Erwina, Kamila, Kamili",  // 18.07
  "Wincentego, Wodzisława, Marcina, Rufina",  // 19.07
  "Czesława, Fryderyka, Hieronima, Seweryna",  // 20.07
  "Daniela, Danieli, Dalidy, Wiktora",  // 21.07
  "Marii, Magdaleny, Albina, Pankracego",  // 22.07
  "Apolinarego, Bogny, Brygidy, Sławy",  // 23.07
  "Kingi, Krystyny, Olgi, Michaliny",  // 24.07
  "Walentyny, Krzysztofa, Jakuba",  // 25.07
  "Anny, Mirosława, Grażyny, Joachima",  // 26.07
  "Natalii, Lilii, Julii, Celestyna",  // 27.07
  "Ady, Innocentego, Wiktora, Walentego",  // 28.07
  "Olafa, Marty, Ludmiły, Marii",  // 29.07
  "Julity, Piotra, Ludomiły, Leopolda",  // 30.07
  "Ignacego, Lubomira, Heleny, Romana",  // 31.07
  "Alfonsa, Nadii, Piotra, Justyny",  // 01.08
  "Kariny, Gustawa, Euzebiusza, Stefana",  // 02.08
  "Lidii, Augustyna, Nikodema, Kamelii",  // 03.08
  "Dominika, Dominiki, Jana, Protazego",  // 04.08
  "Oswalda, Marii, Stanisławy, Mariana",  // 05.08
  "Sławy, Jakuba, Oktawiana, Stefana",  // 06.08
  "Kajetana, Klaudii, Donaty, Doroty",  // 07.08
  "Cypriana, Dominika, Emiliana, Izy",  // 08.08
  "Romana, Ryszarda, Romualda, Edyty",  // 09.08
  "Bogdana, Borysa, Wawrzyńca, Filomeny",  // 10.08
  "Klary, Lidii, Zuzanny, Włodzimierza",  // 11.08
  "Lecha, Euzebii, Innocentego, Hilarego",  // 12.08
  "Diany, Hipolita, Poncjana, Gertrudy",  // 13.08
  "Alfreda, Euzebiusza, Maksymiliana, Selmy",  // 14.08
  "Marii, Napoleona, Stelli",  // 15.08
  "Rocha, Stefana, Joachima, Nory",  // 16.08
  "Anity, Elizy, Jacka, Joanny",  // 17.08
  "Ilony, Klary, Bronisława, Heleny",  // 18.08
  "Bolesława, Jana, Borysława, Juliana",  // 19.08
  "Bernarda, Samuela, Sobiesława, Sabiny",  // 20.08
  "Franciszka, Franciszki, Joanny, Piusa",  // 21.08
  "Marii, Cezarego, Tymoteusza, Zygfryda",  // 22.08
  "Róży, Apolinarego, Filipa, Mili",  // 23.08
  "Jerzego, Bartłomieja, Bartosza, Emilii",  // 24.08
  "Luizy, Ludwika, Józefa, Patrycji",  // 25.08
  "Marii, Zefiryny, Teresy, Natalii",  // 26.08
  "Moniki, Cezarego, Józefa, Teodora",  // 27.08
  "Patrycji, Wyszomira, Aleksandera, Augustyna",  // 28.08
  "Beaty, Jana, Sabiny, Flory",  // 29.08
  "Róży, Szczęsnego, Feliksa, Małgorzaty",  // 30.08
  "Izabeli, Ramony, Bohdana, Rajmunda",  // 31.08
  "Idziego, Bronisławy, Belindy",  // 01.09
  "Juliana, Stefana, Seweryna, Wilhelma",  // 02.09
  "Izabeli, Szymona, Doroty, Grzegorza",  // 03.09
  "Idy, Lilianny, Rozalii, Róży",  // 04.09
  "Doroty, Wawrzyńca, Teodora, Justyna",  // 05.09
  "Beaty, Eugeniusza, Lidii",  // 06.09
  "Reginy, Melchiora, Domosławy, Marka",  // 07.09
  "Marii, Adriany, Serafiny, Radosława",  // 08.09
  "Piotra, Sergiusza, Jacka, Ścibora",  // 09.09
  "Łukasza, Mikołaja, Aldony, Mścisława",  // 10.09
  "Jacka, Dagny, Feliksa, Hiacynta",  // 11.09
  "Gwidona, Radzimira, Marii, Sylwiny",  // 12.09
  "Eugenii, Aureliusza, Filipa, Jana",  // 13.09
  "Roksany, Bernarda, Cypriana, Mony",  // 14.09
  "Albina, Albiny, Nikodema, Marii",  // 15.09
  "Edyty, Kornela, Korneliusza, Kamili",  // 16.09
  "Franciszka, Hildegardy, Justyna, Justyny",  // 17.09
  "Irmy, Józefa, Ireny, Stanisława",  // 18.09
  "Januarego, Konstancji, Teodora, Leopolda",  // 19.09
  "Filipiny, Eustachego, Euzebii, Faustyny",  // 20.09
  "Jonasza, Mateusza, Mirosława, Hipolita",  // 21.09
  "Tomasza, Maurycego, Joachima, Milany",  // 22.09
  "Tekli, Bogusława, Linusa, Liwiusza",  // 23.09
  "Gerarda, Teodora, Tomiry, Tomira",  // 24.09
  "Aurelii, Władysława, Kleofasa, Kamili",  // 25.09
  "Justyny, Cypriana, Wawrzyńca, Łucji",  // 26.09
  "Damiana, Amadeusza, Kosmy, Mirabeli",  // 27.09
  "Luby, Wacława, Wacławy, Marka",  // 28.09
  "Michała, Michaliny, Franciszka, Rafała",  // 29.09
  "Wery, Honoriusza, Hieronima, Wiktora",  // 30.09
  "Danuty, Remigiusza, Teresy, Igora",  // 01.10
  "Teofila, Dionizego, Sławomira, Racheli",  // 02.10
  "Teresy, Heliodora, Gerarda, Jana",  // 03.10
  "Rozalii, Edwina, Franciszka, Konrada",  // 04.10
  "Igora, Flawii, Placyda, Apolinarego",  // 05.10
  "Artura, Brunona, Fryderyka, Fryderyki",  // 06.10
  "Marii, Marka, Sergiusza, Mireli",  // 07.10
  "Pelagii, Brygidy, Walerii, Marcina",  // 08.10
  "Arnolda, Dionizego, Ludwika, Wincentego",  // 09.10
  "Pauliny, Franciszka, Daniela, Leona",  // 10.10
  "Emila, Aldony, Aleksandera, Dobromiry",  // 11.10
  "Eustachego, Maksymiliana, Edwina, Serafina",  // 12.10
  "Geralda, Edwarda, Teofila, Honoraty",  // 13.10
  "Alana, Bernarda, Liwii, Damiana",  // 14.10
  "Teresy, Jadwigi, Florentyny, Aurelii",  // 15.10
  "Gawła, Florentyny, Ambrożego, Jadwigi",  // 16.10
  "Małgorzaty, Wiktora, Marity, Ignacego",  // 17.10
  "Juliusza, Łukasza, Juliana, Bogumiła",  // 18.10
  "Pelagii, Piotra, Ziemowita, Jana",  // 19.10
  "Ireny, Jana, Kleopatry, Witalisa",  // 20.10
  "Urszuli, Hilarego, Celiny, Jakuba",  // 21.10
  "Korduli, Filipa, Klaudii, Salomei",  // 22.10
  "Marleny, Seweryna, Teodora, Honoraty",  // 23.10
  "Rafała, Marcina, Alojzego, Antoniego",  // 24.10
  "Darii, Wilhelminy, Wilhelma, Ingi",  // 25.10
  "Lucjana, Lucyny, Fabiana, Damiana",  // 26.10
  "Iwony, Sabiny, Wincentego",  // 27.10
  "Szymona, Tadeusza, Serafina, Wioletty",  // 28.10
  "Euzebii, Wioletty, Felicjana, Angeli",  // 29.10
  "Zenobii, Przemysława, Edmunda, Alfonsa",  // 30.10
  "Urbana, Saturnina, Augusta, Augustyna",  // 31.10
  "Seweryna, Andrzeja, Wiktoryny, Konradyna",  // 01.11
  "Bohdany, Bohdana, Bogdana, Tobiasza",  // 02.11
  "Sylwii, Huberta, Ruperta, Marcina",  // 03.11
  "Karola, Olgierda, Emeryka, Albertyny",  // 04.11
  "Elżbiety, Sławomira, Dominika, Zachariasza",  // 05.11
  "Feliksa, Leonarda, Ziemowita, Jacka",  // 06.11
  "Antoniego, Żytomira, Ernesta, Kaliny",  // 07.11
  "Hadriany, Seweryna, Wiktoryna, Wiktoriusza",  // 08.11
  "Ursyna, Teodora, Gracji, Genowefy",  // 09.11
  "Leny, Ludomira, Natalii, Leona",  // 10.11
  "Marcina, Bartłomieja, Teodora, Gertrudy",  // 11.11
  "Renaty, Witolda, Mateusza, Konrada",  // 12.11
  "Mikołaja, Stanisława, Stanisławy, Benedykta",  // 13.11
  "Rogera, Serafina, Emila, Emilii",  // 14.11
  "Alberta, Leopolda, Artura, Idalii",  // 15.11
  "Gertrudy, Edmunda, Marii, Małgorzaty",  // 16.11
  "Salomei, Grzegorza, Elżbiety, Walerii",  // 17.11
  "Romana, Klaudyny, Anieli, Karoliny",  // 18.11
  "Elżbiety, Seweryna, Seweryny, Salomei",  // 19.11
  "Anatola, Sędzimira, Feliksa, Rafała",  // 20.11
  "Janusza, Konrada, Alberta, Marii",  // 21.11
  "Marka, Cecylii, Wszemiły, Stefana",  // 22.11
  "Adeli, Klemensa, Klementyny, Felicyty",  // 23.11
  "Flory, Emmy, Emilii, Chryzogona",  // 24.11
  "Erazma, Katarzyny, Elżbiety, Klemensa",  // 25.11
  "Delfiny, Sylwestera, Konrada, Leonarda",  // 26.11
  "Waleriana, Wirgiliusza, Maksymiliana, Franciszka",  // 27.11
  "Lesława, Zdzisława, Jakuba, Stefana",  // 28.11
  "Błażeja, Saturnina, Fryderyka, Margerity",  // 29.11
  "Maury, Andrzeja, Justyny, Justyna",  // 30.11
  "Natalii, Edmunda, Eligiusza, Blanki",  // 01.12
  "Balbiny, Bibianny, Pauliny, Aurelii",  // 02.12
  "Franciszka, Franciszki, Ksawerego, Pasjana",  // 03.12
  "Barbary, Krystiana, Hieronima, Jana",  // 04.12
  "Saby, Kryspina, Gerarda, Sabiny",  // 05.12
  "Jaremy, Mikołaja, Emiliana, Dionizji",  // 06.12
  "Marcina, Ambrożego, Teodora, Agaty",  // 07.12
  "Marii, Światozara, Klemensa, Makarego",  // 08.12
  "Wiesława, Wiesławy, Leokadii, Joanny",  // 09.12
  "Julii, Danieli, Bogdana, Bohdana",  // 10.12
  "Damazego, Waldemara, Daniela, Stefana",  // 11.12
  "Dagmary, Aleksandera, Adelaidy, Joanny",  // 12.12
  "Łucji, Otylii, Juliusza",  // 13.12
  "Alfreda, Izydora, Jana",  // 14.12
  "Niny, Celiny, Waleriana, Ireneusza",  // 15.12
  "Albiny, Zdzisławy, Zdzisława, Alicji",  // 16.12
  "Olimpii, Łazarza, Jolanty, Floriana",  // 17.12
  "Gracjana, Bogusława, Laurencji, Laury",  // 18.12
  "Gabrieli, Grzegorza, Eleonory, Dariusza",  // 19.12
  "Bogumiły, Dominika, Juliusza, Zefiryna",  // 20.12
  "Tomasza, Tomisława, Anastazego, Piotra",  // 21.12
  "Zenona, Honoraty, Franciszki, Bożeny",  // 22.12
  "Wiktorii, Wiktora, Sławomira, Małgorzaty",  // 23.12
  "Adama, Ewy, Irminy",  // 24.12
  "Anastazji, Eulalii, Eugenii, Glorii",  // 25.12
  "Szczepana, Dionizego, Stefana, Teodora",  // 26.12
  "Jana, Żanety, Fabioli, Maksyma",  // 27.12
  "Antoniego, Teofilii, Cezarego, Emmy",  // 28.12
  "Dawida, Tomasza, Dominika, Dionizego",  // 29.12
  "Irminy, Eugeniusza, Irmy, Seweryna",  // 30.12
  "Melanii, Sylwestera, Mariusza",  // 31.12
};

static const int NAME_DAY_MONTH_OFFSETS[12] = {
  0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335
};

static const int NAME_DAY_DAYS_PER_MONTH[12] = {
  31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

static const char* nameDaysForDate(int month, int day) {
  if (month < 1 || month > 12) return "do uzupełnienia";
  if (day < 1 || day > NAME_DAY_DAYS_PER_MONTH[month - 1]) return "do uzupełnienia";
  return NAME_DAY_TABLE[NAME_DAY_MONTH_OFFSETS[month - 1] + day - 1];
}
