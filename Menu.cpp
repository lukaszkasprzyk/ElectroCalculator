#include "Menu.h"
#include "Number.h"
#include <iostream>
#include <stdio.h>


void Menu::printMenu()
{
    std::cout << "###############################  Kalkulator Elektronika  ############################" << std::endl;
    std::cout << "\n 1.Dodawanie \n" << std::endl;
    std::cout << "2.Odejmowanie \n" << std::endl;
    std::cout << "3.Mnozenie \n" << std::endl;
    std::cout << "4.Dzielnie \n" << std::endl;
    std::cout << "5.Zamiana z dec,hex,octal,bin na dec,hex,octal,bin \n" << std::endl;
}