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

    return 0;
    // Tu program sie konczy.
}