#include "Number.h"
#include <iostream>
#include <string>

void Number::printValue() {
    std::cout << "Value in dec: " << Number::value << std::endl;
}

long long int Number::getValue() {
	return value;
}
std::string Number::asDecimal() {
	return std::to_string(value);
}

std::string Number::toHexaDecimal() {
    return "16x" + Number::value;
}

std::string Number::toOctal() {
    std::cout << "Value octal" << std::endl;
    std::string result;
    auto tempValue = Number::getValue();
    int remainder;
    int i = 0;
    while (tempValue != 0) {
        remainder = tempValue % 8;
        tempValue = tempValue / 8;
        result+= (remainder * i);
        i = i * 10;
    }
    return result;
}
std::string Number::toBinary()
{
    int tempValue = Number::getValue();
    std::string r;
    while (tempValue != 0){
        r += (tempValue % 2 == 0 ? "0" : "1" );
        tempValue /= 2;
    }
    return r;
}


