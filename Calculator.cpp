#include "Calculator.h"
#include <iostream>
Number Calculator::add(Number a, Number b)
{
	std::cout  << a.getValue() << "+" << b.getValue() << std::endl;
	auto out = a.getValue() + b.getValue();
	std::cout << " sum:" << out << std::endl;
	Number result(out);
	std::cout << " return:" << result.getValue() << std::endl;
	return  result;
}

Number Calculator::mltp(Number a, Number b)
{
	std::cout << a.getValue() << "-" << b.getValue() << std::endl;
	return  Number(a.getValue() * b.getValue());
}

Number Calculator::divide(Number a, Number b)
{
	std::cout << a.getValue() << ":" << b.getValue() << std::endl;
	return  Number(a.getValue() / b.getValue());
}

Number Calculator::mns(Number a, Number b)
{
	std::cout << a.getValue() << "*" << b.getValue() << std::endl;
	return  Number(a.getValue() - b.getValue());
}