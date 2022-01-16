// E-calc.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Menu.h"
#include "Reader.h"
#include "Calculator.h"

int main()
{
	Menu x = Menu();
	x.printMenu();

	Reader reader = Reader();
	Number a = reader.readNumber();
	a.printValue();
	Number b = reader.readNumber();
	b.printValue();

	Calculator calc = Calculator();

	Number sum = calc.add(a, b);
	std::cout << "+Result" << std::endl;
	sum.printValue();

	Number diff = calc.mns(a, b);
	std::cout << "-Result" << std::endl;
	diff.printValue();

	Number il = calc.mltp(a, b);
	std::cout << "*Result" << std::endl;
	il.printValue();

	Number div = calc.divide(a, b);
	std::cout << ":Result" << std::endl;
	div.printValue();
	
	return 0;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
