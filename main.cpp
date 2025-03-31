// Biblioteka zawierajaca funkcje wejscia wyjscia
#include <iostream>
// Biblioteka string, lancucha znakow
#include <string>
// Biblioteka zawierajaca funkcje matematyczne
#include <cmath>
// Biblioteka zawierajaca funkcje formatowania tekstu
#include <iomanip>
// Biblioteka zawierajaca funkcje operacji na string
#include <cstring>

// Deklaracja funkcji
int dodawanie(int pierwszyParametr, int drugiParametr)
{
    int wynik = pierwszyParametr + drugiParametr;
    return wynik;
}

int main()
{
    // Komenda wyswietlajaca w konsoli slowo "Hello World!"
    std::cout << "Hello World! " << std::endl;
    /*
    std::cout << "Number1";
    std::cout << "Number2" << std::endl;
    */

    // Rodzaje bledow
    // Compile Time Error - brak srednika, program sie nieskompiluje
    // std::cout << "Hello World! " << std::endl

    // Run Time Error - dzielenie przez zero, program sie skompiluje, ale moze zakonczyc sie errorem
    // int value = 7 / 0;
    // std::cout << "Value: " << value << std::endl;

    // Deklaracje zmiennych
    int pierwszaLiczba{3}; // deklaracja zmiennej variable statement
    int drugaLiczba{7};

    std::cout << "Pierwsza liczba: " << pierwszaLiczba << std::endl;
    std::cout << "Druga liczba: " << drugaLiczba << std::endl;

    int sum = pierwszaLiczba + drugaLiczba;
    std::cout << "Suma1: " << sum << std::endl;

    sum = dodawanie(25, 7);
    std::cout << "Suma2: " << sum << std::endl;

    std::cout << "Suma3: " << dodawanie(3, 42) << std::endl;

    // Input Data
    std::cout << "Wpisz swoje imie i wiek: ";

    std::string imie;
    // std::cin>>imie; //jedno slowo, ignorujac biale znaki
    std::getline(std::cin, imie); // wszystko do entera

    int wiek;
    std::cin >> wiek;

    // std::cin>>imie>>wiek;
    std::cout << "Witaj " << imie << ", masz " << wiek << " lat." << std::endl;

    // Systemy numeryczne
    int numDecimal = 15;
    int numOctal = 017;
    int numHexa = 0x0f;
    int numBinary = 0b00001111;
    // wszedzie wyswietli sie 15 bo to int
    std::cout << numDecimal << " " << numOctal << " " << numHexa << " " << numBinary << std::endl;

    // Inicjalizacja
    // Braced Initialization
    int ilosc_psow{};                             // 0
    int ilosc_kotow{1};                           // 1
    int ilosc_zwierzat{ilosc_psow + ilosc_kotow}; // 1
    // int ilosc_chomikow{2.5}                       // nieskompiluje sie
    std::cout << ilosc_psow << " " << ilosc_kotow << " " << ilosc_zwierzat << std::endl;
    // Functional Initialization
    int ilosc_jablek(5);    // 5
    int ilosc_kokosow(2.5); // skompiluje sie ale stracimy 0.5, mniej bezpieczne niz {}
    std::cout << ilosc_jablek << " " << ilosc_kokosow << std::endl;
    // Assignment Initialization
    int ilosc_rowerow = 2;      // 2
    int ilosc_samochodow = 3.5; // 3, jak wyzej, stracimy po przecinku, bo nie miesci sie w int
    std::cout << ilosc_rowerow << " " << ilosc_samochodow << std::endl;

    // Sizeof
    std::cout << "Wielkosc int: " << sizeof(int) << " " << sizeof(ilosc_rowerow) << std::endl;   // 4 bajty - zalecany typ
    std::cout << "Wielkosc signed short int: " << sizeof(signed short) << std::endl;             // 2 bajty
    std::cout << "Wielkosc unsigned long long int: " << sizeof(unsigned long long) << std::endl; // 8 bajty
    // przy zmiennoprzecinkowych do precyzji wliczaja sie liczby przed przecinkiem
    std::cout << "Wielkosc float: " << sizeof(float) << std::endl;   // 4 bajty
    std::cout << "Wielkosc double: " << sizeof(double) << std::endl; // 8 bajty - zalecany typ
    // std::boolalpha - wyswietla true false zamiast 1 0 w cout
    std::cout << "Wielkosc boolean: " << sizeof(bool) << std::endl;       // 1 bajt
    std::cout << "Wielkosc char: " << sizeof(char) << std::endl;          // 1 bajt
    auto znak{'x'};                                                       // char
    std::cout << "Wielkosc auto dla char: " << sizeof(znak) << std::endl; // 1 bajt
    // blok funkcji, zmienne wystepuja tylko w niej
    {
        short int x{10}, y{20};
        std::cout << "Wielkosc x = " << sizeof(x) << " bajty" << std::endl; // 2 bajty
        std::cout << "Wielkosc y = " << sizeof(y) << "bajty" << std::endl;  // 2 bajty
        auto wynik = x + y;
        std::cout << "Wielkosc wyniku (x+y) = " << sizeof(wynik) << "bajtow" << std::endl; // 4 bajty bo dodawanie wymaga co najmniej 4 bajtow
    }

    // Notacja naukowa Scientific Notation
    double naukowa_plus{1.23e4};   // 1.23*10^4 = 12300
    double naukowa_minus{1.23e-4}; // 0.000 123
    // Dzielenie przez 0 liczby zmiennoprzecinkowej, nie zglasza ostrzezenia
    double zero_double{};
    double wynik_double1{naukowa_plus / zero_double};
    double wynik_double2{zero_double / zero_double};
    std::cout << "Wynik dzielenia double cos przez 0: " << wynik_double1 << std::endl; // "inf" nieskonczonosc
    std::cout << "Wynik dzielenia double 0 przez 0: " << wynik_double2 << std::endl;   // "-NaN"

    // Operacje matematyczne
    int liczba1{31};
    int liczba2{10};
    std::cout << "Dodawanie: " << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << std::endl;   // 41
    std::cout << "Odejmowanie: " << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << std::endl; // 21
    std::cout << "Mnożenie: " << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << std::endl;    // 310
    std::cout << "Dzielenie: " << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2 << std::endl;   // 3
    std::cout << "Modulo: " << liczba1 << " % " << liczba2 << " = " << liczba1 % liczba2 << std::endl;      // 1
    // w operacjach matematycznych wystepuje kolejnosc wykonywania dzialan, wiekszosc od lewej do prawej
    // Inkrementacja
    std::cout << "PostInkrementacja: " << liczba1 << "++ wyswietli: " << liczba1++ << ", a po operacjii " << liczba1 << std::endl; // 31++, wyswietli najpierw 31, potem 32
    std::cout << "PreInkrementacja:  ++" << liczba1 << " wyswietli: " << ++liczba1 << ", a po operacjii " << liczba1 << std::endl; // ++32, wyswietli najpierw 33, potem 33
    // Operatory zlozone
    std::cout << liczba2 << "+=10 = " << (liczba2 += 10) << std::endl; // 10+10=20
    std::cout << liczba2 << "-=10 = " << (liczba2 -= 10) << std::endl; // 20-10=10
    std::cout << liczba2 << "*=10 = " << (liczba2 *= 10) << std::endl; // 10*10=100
    std::cout << liczba2 << "/=10 = " << (liczba2 /= 10) << std::endl; // 100/10=10
    std::cout << liczba2 << "%=10 = " << (liczba2 %= 10) << std::endl; // 10%10=0

    // Operatory porownania
    // trzeba pamietac o nawiasach przy operacjach, bo operator przekazania ma wyzszy priorytet wykoanania niz porownanie
    std::cout << std::boolalpha; // zamienia wyniki operacji logicznych z 1 0 na true false, musi byc po cout
    std::cout << liczba1 << " <  " << liczba2 << " " << (liczba1 < liczba2) << std::endl;
    std::cout << liczba1 << " >  " << liczba2 << " " << (liczba1 > liczba2) << std::endl;
    std::cout << liczba1 << " <= " << liczba2 << " " << (liczba1 <= liczba2) << std::endl;
    std::cout << liczba1 << " == " << liczba2 << " " << (liczba1 == liczba2) << std::endl;
    std::cout << liczba1 << " != " << liczba2 << " " << (liczba1 != liczba2) << std::endl;
    // std::cout << std::noboolalpha; // przywraca wyswietlanie 1 i 0

    // Operatory logiczne
    bool a{false};
    bool b{true};
    bool c{true};
    std::cout << "AND: a(" << a << ") && b(" << b << ") = " << (a && b) << std::endl;                        // false
    std::cout << "AND: b(" << b << ") && c(" << c << ") = " << (b && c) << std::endl;                        // true
    std::cout << "AND: a(" << a << ") && b(" << b << ") && c(" << c << ") = " << (a && b && c) << std::endl; // false
    std::cout << "OR:  a(" << a << ") || b(" << b << ") = " << (a || b) << std::endl;                        // true
    std::cout << "NOT: ! a(" << a << ") = " << !a << std::endl;                                              // true

    // Formatowanie tekstu
    std::cout << "\tHello\n"; // tab i nowa linia
    std::cout << std::left << std::setw(10) << "Hello " << std::setw(10) << " and Welcome " << std::endl;
    /*
    std::setw() // musi byc podany przed kazdym tekstem, wyswietla tekst jako tablice o dlugosci znakow lub caly jesli jest dluzszy, wymaga biblioteki ipmanio,
    std::left/right // wyrownanie do lewej/prawej, domyslnie jest do prawej
    std::setfill('-'); // zastapienie kazdego pustego pola znakami - , wymagana biblioteka iomanip
    std::showpos; // pokazuje + i - przed liczba dziesietna, std::noshowpos wylacza + przed liczba
    std::showbase; // pokazuje 0 przed oct lub 0x przed hex, nie dzialaja na liczby zmiennoprzecinkowe
    std::setprecision(5); // ile miejsc po przecinku, wymagana biblioteka iomanip
    std::showpoint; // pokazuje .0 do zmiennoprzecinkowych
    std::uppercase; // zamienia litery na duze
    */
    std::cout << std::showbase << std::showpos << std::hex << liczba1 << std::endl;     // wyswietla liczbe 33 jako 0x21
    std::cout << liczba1 << std::endl;                                                  // std::hex nadal dziala wiec 0x21
    std::cout << std::oct << liczba1 << std::endl;                                      // tutaj liczba osemkowa 041
    std::cout << std::dec << liczba1 << std::noshowbase << std::noshowpos << std::endl; // tu dziesietna, wiec dziala std::showbase +33
    // zeby zadzialalo std::setprecision, nalezy ustawic std::fixed
    std::cout << std::fixed << std::setprecision(2) << naukowa_minus << " " << naukowa_plus << std::endl; // 0.00 12300.00
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);                                             // cofa flagi formatujace tekst wedlug fixed i scientific

    // Warunki
    // if else w przypadku znalezienia pierwszego spelniajacego warunek zakonczy caly blok, a wielokrotne ify sprawdza wszystkie warunki
    if (a == true)
    {
        std::cout << "A to true" << std::endl;
    }
    else if (a == false)
    {
        std::cout << "A to false" << std::endl;
    }
    else
    {
        std::cout << "A nie jest bool" << std::endl;
    }

    // Switch
    // dziala z wartosciami calkowitymi, ale nie powinno sie uzywac bool, mimo ze jest konwertowany na int i zadziala
    switch (a)
    {
    case true:
        std::cout << "A to true" << std::endl;
        break; // po wykryciu break zakonczy sie switch
    case false:
        std::cout << "A to false" << std::endl;
        // tu nie ma break, a wiec switch bedzie realizowany do pierwszego breaka lub konca switch, nawet jesli nie spelnione sa warunki
    default: // dziala jak else
        std::cout << "A nie jest bool lub nie wykryto break" << std::endl;
        break; // jeśli default jest na końcu to nie ma potrzeby, ale to dobra praktyka
    }

    // Ternary, operator warunkowy
    (a == true) ? std::cout << "A to true" << std::endl : std::cout << "A to false" << std::endl; // warunek ? prawda : falsz;

    bool fast{true};
    // int speed{fast ? 120 : 50};
    int speed{0};
    speed = (fast == true) ? 120 : 50;
    std::cout << "Samochod jedzie " << speed << " km/h" << std::endl; // 120

    // Petle
    // petla sklada sie z: iteratora (i), starting pointu 0, condition'a < count, incrementacji/decrementacji, zawartosci

    // for
    const size_t count{5}; // size_t to 8 bajtowy typ danych uzywany do iteracji, reprezentujacy unsigned int

    for (size_t i{0}; i < count; ++i) // to i przestanie istniec po zakonczeniu petli
    {
        std::cout << "Iteracja for [" << i + 1 << "]" << std::endl;
    }

    // while
    // moze sie niewykonac
    size_t i{0}; // to i bedzie istniec po zakonczeniu petli

    while (i < count)
    {
        std::cout << "Iteracja while [" << i + 1 << "]" << std::endl;
        ++i;
    };

    // do while
    // wykona sie przynajmniej raz
    i = 0; // i {0} zadziala tylko przy deklaracji

    do
    {
        std::cout << "Iteracja do while [" << i + 1 << "]" << std::endl;
        ++i;
    } while (i < count);

    // Tablice, Arrays
    // tablice rozpoczynaja sie od indeksu 0 i poczatkowo maja w sobie smieci
    // nie trzeba podawac wielkosci tablicy, zostanie zdedukowana z ilosci inicjalizowanych elementow
    int tablica[5]{1, 2, 3}; // tablica 5 elementowa zawierajaca wartosci 1,2,3,0,0
    tablica[4] = 5;          // 1,2,3,0,5

    auto sumawTablica{0};
    // Range based for loop
    // zalecany, bo czytelny i przy zmianie wielkosci tablicy nie trzeba nic modyfikowac, ale nie znamy indeksu
    for (auto element : tablica) // dla kazdego elementu tablicy, jesli chcemy pracowac na prawdziwych elementach, to trzeba uzyc auto&
    {
        std::cout << element << " "; // 1 2 3 0 5
        sumawTablica += element;
    }
    std::cout << std::endl
              << "Suma elementow: " << sumawTablica << std::endl; // 11

    int odwroconeIndeksyTablica = std::size(tablica);
    size_t wielkoscTablicaDawniej{sizeof(tablica) / sizeof(tablica[0])}; // 5*4 bajty / 4 bajty = 5, przed c++17 nie mozna bylo uzywac std::size(tablica)
    for (size_t i{0}; i < std::size(tablica); ++i)                       // tego fora tez nie trzeba modyfikowac i znamy indeks, ale jest mniej czytelny
    {
        std::cout << tablica[odwroconeIndeksyTablica - 1 - i] << " "; // odwrocone indeksy, 5 0 3 2 1
    }
    std::cout << std::endl;

    // Tablice znakow, Array of characters
    // by je wyswietlic nie trzeba robic petli
    // na koncu deklaracji powinien byc null terminator \0 oznaczajacy koniec tablicy
    // jesli tablica ma okreslona wielkosc, to null termination zostanie uzupelniony automatycznie, ale musi byc na niego miejsce
    char tablicaZnakow[]{'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    std::cout << tablicaZnakow << std::endl; // Hello World

    // String literal
    char tablicaZnakowString[]{"Hello"}; // poniewaz to string to automatycznie dodany zostanie znak konca i rozmiar bedzie 6
    std::cout << tablicaZnakowString << " " << sizeof(tablicaZnakowString) << std::endl;

    // Wskazniki, Pointers
    // specjalny typ zmiennych, ktory zawiera adresy do innych zmiennych
    // wielkosc wskaznika wynosi 8 bajtow, niezaleznie od typu
    // wskazniki powinny byc zainicjalizowane, zeby nie zawierac "smieci"
    int *p_number1{};        // default-initialization, deklaracja wskaznika, ktory jeszcze na nic nie wskazuje, zostanie zainicjalizowany jako nullptr
    int *p_number2{nullptr}; // direct-list-initialization, dokladnie to samo, ale jest bardziej klarowne; nie uzywamy 0, ani zwyklego null

    int number1doWskaznika{1};
    p_number1 = &number1doWskaznika;
    number1doWskaznika = 2;

    int number3doWskaznika{3};
    int *p_number3{&number3doWskaznika};

    std::cout << "Wskaznik p_number1 zawierajacy adres " << p_number1 << " zawiera liczbe " << *p_number1 << std::endl; // wyluskanie wskaznika, dereferencing; zwroci 2

    // const pointer
    const int *p_number31{&number3doWskaznika};       // nie mozna zmienic wartosci, ale mozna zmienic adres
    const int *const p_number32{&number3doWskaznika}; // nie mozna zmienic wartosci, ani adresu (wartosci elementow, ani przypisac do innej zmiennej)

    /* Memory Map
    Każdy program jest procesem, który ma dostęp do pamięci z zakresu 0 do (2^ 32 lub 64)-1 bitów.
    Pamięć wirtualna, sprawia że program myśli, że jest jedynym uruchomionym na komputerze i ma dostęp do całych zasobów.
    Memory Management Unit przydziela pamięć na rzeczywistym RAMie, wydzielając tylko tyle, ile jest w tej chwili potrzebne.
    Jest to standard zdefiniowany przez system, dlatego przykladowo nie można uruchomić plików exe na Linuxie.
    Memory Map jest podzielony na sekcje:
    system, stack (lokalne zmienne), heap (dodatkowa pamięć), data, text (binarka programu)
    */

    // Dynamiczna alokacja pamieci (memory on the heap)
    // przydziela wylaczny blok pamieci, przez co daje wieksza kontrole programiscie
    // nalezy stsosowac operatory new i delete
    int *p_number4{};
    p_number4 = new int;
    // int *p_number4 = new int;
    // int *p_number4{new int};
    int *p_number41{new int{4}}; // *p_number41 = 4

    *p_number4 = 28; // przy dynamicznej alokacji mozna podstawiac dane do niezainicjalizowanych wskaznikow (int *p_number4;), bo nie trafimy na "smieci"
    std::cout << "adres: " << p_number4 << "\twyluskanie: " << *p_number4 << std::endl;
    std::cout << "adres: " << p_number41 << "\twyluskanie: " << *p_number41 << std::endl;

    delete p_number4;
    p_number4 = nullptr; // zabezpieczenie, dobra praktyka
    delete p_number41;   // musi byc oddzielnie
    p_number41 = nullptr;

    /* Memory leaks - przyklad
    int *p_leak{new int{10}}; // pamiec dynamiczna
    int leak{20};             // pamiec statyczna
    p_leak = &leak;           // tracimy dostep do dynamicznej pamieci, ale ona nadal tam jest
    p_leak = new int{30};     // przypadek taki sam jak wyzej, tracimy dostep do pamieci
    {
        int *p_leak2{new int{40}}; // tutaj tez tracimy dostep do pamieci
    }
    // rozwiazanie - przed przypisaniem nowego adresu, nalezy zwolnic pamiec dynamiczna
    */

    // Tablice dynamiczne
    // nie obsluguja std::size, bo podcza tworzenia wskaznika, traci informacje, ktore wykorzystywane sa przez std::size
    // nie obsluguja range based loops ( for (auto element : tablica) )
    const size_t size = 5;

    int *p_array{new int[size]{}}; // tablica 5-elementowa zainicjalizowana zerami
    if (!(p_array == nullptr))     // zabezpieczenie przed smieciami w pamieci, ale tutaj zbedne bo tablice dynamiczne nie zwroca smieci
    {
        for (size_t i{}; i < size; i++)
        {
            std::cout << "Adres w tablicy [" << i << "]: " << &p_array[i]
                      << "\twyluskanie1: " << p_array[i] << "\twyluskanie2: " << *(p_array + 1) << std::endl; // na dwa sposoby
        }
    }

    delete[] p_array;
    p_array = nullptr;

    // Referencje
    // aliasy do zmiennej, dzialaja jak stale wskazniki
    // musza byc zainicjalizowane przy deklaracji (nie moga byc puste)
    // w przeciwienstwie do wskaznikow nie moga byc zmieniane, moga tylko byc zmieniane wartosci
    // nie wymagaja wyluskania (dereferencing)

    double double_value{12.34};
    double &ref_double_value{double_value}; // referencja
    double *p_double_value(&double_value);  // wskaznik

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Value: " << double_value << std::endl;         // wartosc 12.34
    std::cout << "Reference: " << ref_double_value << std::endl; // zwroci wartosc 12.34
    std::cout << "Pointer: " << p_double_value << std::endl;     // zwroci adres
    std::cout << "Pointer: " << *p_double_value << std::endl;    // zwroci wartosc 12.34

    double other_double_value{56.78};

    ref_double_value = other_double_value; // to nie jest zmiana referencji - kopiujemy wartosci jednej zmiennej do drugiej
    std::cout << "'Zmiana' referencji (przypisanie innej wartosci): " << std::endl;
    std::cout << "Reference: " << ref_double_value << std::endl; // zwroci wartosc 56.78
    std::cout << "Pointer: " << p_double_value << std::endl;     // zwroci ten sam adres
    std::cout << "Pointer: " << *p_double_value << std::endl;    // zwroci wartosc 56.78

    p_double_value = &other_double_value;
    *p_double_value = 90.12;
    std::cout << "Zmiana pointera: " << std::endl;
    std::cout << "Reference: " << ref_double_value << std::endl; // zwroci wartosc 56.78
    std::cout << "Pointer: " << p_double_value << std::endl;     // zwroci inny adres
    std::cout << "Pointer: " << *p_double_value << std::endl;    // zwroci wartosc 90.12

    int myArray[5] = {1, 2, 3, 4, 5};
    int(&refToArray)[5] = myArray; // referencja do tablicy

    // Decaying Array
    // to tablica, o ktorej utracono informacje, np. przy przekazywaniu jej przez funkcję.
    // staje się wtedy wskaźnikiem na pierwszy element tej tablicy, nawet jesli przekazemy wielkosc.
    // zeby temu zapobiec mozna uzyc referencji do tablicy.
    /*
    template <size_t N>
    void printSize(int (&refToArray)[N]) {  // arr to referencja do tablicy
        std::cout << "Rozmiar: " << sizeof(refToArray) << " bajtów\n"; //tutaj &refToArray odnosiloby sie do adresu
    }
    */

    // std::string - wymagana biblioteka string
    //  mozna zmieniac w czasie rzeczywistym
    //  w przypadku const * char zmiana tekstu spowoduje, ze jedna tablica zostanie w pamieci
    std::string planeta1;
    std::string planeta2{"Wenus"};      // zapisze Wenus
    std::string planeta3{"Ziemia", 1};  // zapisze tylko 1 litere, Z
    std::string planeta4{"Mars", 1, 4}; // zapisze 4 litery zaczynajac od 1, ars
    std::string znaki(5, 'x');          // nawiasy okragle, zapize 5-krotnie x

    std::cout << planeta1 << " " << planeta2 << " " << planeta3 << " " << planeta4 << " " << znaki << std::endl; // Wenus Z ars xxxxx

    // std:strlen, wymaga biblioteki cstring
    // wyswietla dlugosc stringa, nawet w przypadku decaying array, nie zawiera null character \0

    const char tekst1[]{"Wiadomosc testowa."};
    const char *tekst2{"Wiadomosc testowa."}; // decaying array

    std::cout << strlen(tekst1) << " " << strlen(tekst2) << std::endl; // 18 18
    std::cout << sizeof(tekst1) << " " << sizeof(tekst2) << std::endl; // 19 8

    // std::strcmp
    // porownuje tablice znakow, zwracajac -1, 0, 1, wymaga bliblioteki cstring
    char tekst21[]{"Aaa"};
    char tekst22[]{"Abb"};
    std::cout << std::strcmp(tekst21, tekst22) << std::endl; // zwroci -1 bo Aaa < Abb
    std::cout << std::strcmp(tekst22, tekst21) << std::endl; // zwroci 1 bo Abb > Aaa
    std::cout << std::strcmp(tekst21, tekst21) << std::endl; // zwroci 0 bo a rowne

    std::cout << std::strncmp(tekst21, tekst22, 1) << std::endl; // zwroci 0, bo do 1 znaku jest taki sam

    // std::strcat
    // laczy dwa stringi w jeden, wymaga biblioteki cstring
    // docelowy string musi byc odpowiedni dlugi
    char tekst31[50] = "Hello";
    char tekst32[50] = "World";

    std::cout << std::strcat(tekst31, tekst32) << std::endl;        // HelloWorld
    std::cout << std::strcat(tekst31, " z dopiskiem") << std::endl; // HelloWorld z dopiskiem

    // std::strcpy
    // podmienia zawartosc jednej tablicy druga tablica, wymaga biblioteki cstring
    // alternatywnie mozna wykorzystac string, zeby podmienic dwie tablice, bo same tablice sa stalymi wskaznikami

    // tekst31 = tekst32 // blad bo to stale wskazniki
    std::cout << std::strcpy(tekst32, tekst31) << std::endl; // zamieni World na HelloWorld z dopiskiem

    // std::strchr
    // wyszukuje wystapienia znaku w lancuchu znakow, wymaga biblioteki cstring
    const char *str{"Jakis tekst. Jakiś inny tekst."};
    char target = 'J';
    const char *result = str; // dzieki temu petla while wykona sie 2 razy, a nie 30
    size_t iterations{};

    while ((result = std::strchr(result, target)) != nullptr)
    {
        ++result;
        ++iterations;
        std::cout << "Znaleziono " << target << " w tablicy str w iteracji " << iterations << std::endl;
    }
    std::cout << iterations << std::endl; // 2

    return 0;
    // Tu program sie konczy.
}