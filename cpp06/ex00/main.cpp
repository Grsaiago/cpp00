#include "Convert.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Convert com nan e nanf ---" << '\n';
	Convert::convert("nan");
	std::cout << '\n';
	std::cout << "--- Convert com inf e +inf, inff e +inff ---" << '\n';
	Convert::convert("inf");
	std::cout << '\n';
	std::cout << "--- Convert com -inf e -inff ---" << '\n';
	Convert::convert("-inf");
	std::cout << std::endl;

	return 0;
}
