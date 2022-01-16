#pragma once
#include <string>

class Number
{
private:
	int value = 0;//value in decimal representation - always
	int base = 10;

	std::string toBinary();
	std::string toOctal();
	std::string toHexaDecimal();
	Number octalToDecimal();

public:
	// parameterized constructor to initialize variables
	Number(int input) {
		value = (input,10);
	}
	Number(int input, int baseValue) {
		value = input;
		base = baseValue;
	}
	void printValue();

	int getValue(); 

	std::string asString();
};