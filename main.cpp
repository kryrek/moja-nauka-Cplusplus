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

    return 0;
    // Tu program sie konczy.
}