// Shape.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Shape.h"

int main()
{
    double a = 0.1;
    double b = 0.1;

    Shape* rect = new Rectangle(a, b);
    Shape* tri = new Triangle(a, b);

    std::cout << rect->info() << std::endl;
    std::cout<< "Wynik pola powierzchni prostokata" << rect->area() << std::endl;

    std::cout << tri->info() << std::endl;
    std::cout<< "Wynik pola powierzchni trojkata" << tri->area() << std::endl;

    delete rect;
    delete tri;

    return 0;

};

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
