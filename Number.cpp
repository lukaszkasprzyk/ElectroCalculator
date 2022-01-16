#include "Number.h"
#include <iostream>
#include <string>

void Number::printValue() {
	std::cout << "Value: " << Number::value << " Base: " << Number::base << " converted: " << asString() << std::endl;
}

int Number::getValue() {
	return value;
}
std::string Number::asString() {
    if (Number::base == 2) {
        return toBinary();
    }
    else if (Number::base == 8) {
        return toOctal();
    }
    else if (Number::base == 16) {
        return toHexaDecimal();
    }
	return std::to_string(value);
}

std::string Number::toHexaDecimal() {
    //Dummy representation//TODO
    return "16x" + Number::value;
}

std::string Number::toOctal() {
    std::cout << "Value octal" << std::endl;
    std::string result;
    int tempValue = Number::getValue();
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


Number Number::octalToDecimal()
{
    return Number(1, 2);
}