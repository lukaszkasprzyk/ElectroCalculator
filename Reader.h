#pragma once
#include "Number.h"
class Reader
{
private:
	int octalToDecimal();
	int binaryToDecimal();
	int hexToDecimal();
public:
	Number readNumber();
};

