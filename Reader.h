#pragma once
#include "Number.h"
class Reader
{
private:
	long long int octalToDecimal(std::string input);
	long long int binaryToDecimal(std::string input);
	long long int hexToDecimal(std::string input);
public:
	Number readNumber();
};

