#include "Calculator.h"

Number Calculator::add(Number a, Number b)
{
	return a.getValue() + b.getValue();
}

Number Calculator::mltp(Number a, Number b)
{
	return a.getValue() * b.getValue();
}

Number Calculator::divide(Number a, Number b)
{
	return a.getValue() / b.getValue();
}

Number Calculator::mns(Number a, Number b)
{
	return a.getValue() - b.getValue();
}