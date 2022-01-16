#include "Reader.h"
#include <iostream>

Number Reader::readNumber()
{
    std::cout << "Podaj liczbe\n";
    int value{ 0 }, base{10};//ddefault base is 10
    std::cin >> value;
    std::cout << "Podaj podstawe\n";
    std::cin >> base;
    //TODO value should be converted to decimal cause int does not match to i.e hexdec = AB123
    Number x(value, base);

    return x;
}
