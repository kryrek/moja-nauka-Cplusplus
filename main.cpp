// Biblioteka zawierajaca funkcje wejscia wyjscia
#include <iostream>
// Biblioteka string, lancucha znakow
#include <string>

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

    // Run Time Error - dzielenie przez zero, program sie skompiluje
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
    // std::cin>>imie;
    std::getline(std::cin, imie);

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

    return 0;
    // Tu program sie konczy.
}