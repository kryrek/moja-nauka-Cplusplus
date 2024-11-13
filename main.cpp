// Biblioteka zawierajaca funkcje wejscia wyjscia
#include <iostream>

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
    int value = 7 / 0;
    std::cout << "Value: " << value << std::endl;

    return 0;
    // Tu program sie konczy.
}