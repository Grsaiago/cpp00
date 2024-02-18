#include "Convert.hpp"

Convert::Convert(void) { }

Convert::~Convert(void) { }

void	Convert::convert(std::string str)
{
	if (str.compare("nan") == 0
	|| str.compare("nanf") == 0) {
		Convert::printNanNanf();
	}
	if (str.compare("inf") == 0
	|| str.compare("+inf") == 0
	|| str.compare("inff") == 0
	|| str.compare("+inff") == 0) {
		Convert::printPositiveInfInff();
	}

	if (str.compare("-inf") == 0
	|| str.compare("-inff") == 0) {
		Convert::printNegativeInfInff();
	}
}

void	Convert::printPositiveInfInff(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: +inf" << '\n';
	std::cout << "float: +inff" << '\n';
	std::cout << "double: +infd" << std::endl;
	return ;

}

void	Convert::printNegativeInfInff(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: -inf" << '\n';
	std::cout << "float: -inff" << '\n';
	std::cout << "double: -infd" << std::endl;
	return ;
}

void	Convert::printNanNanf(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: impossible" << '\n';
	std::cout << "float: nanf" << '\n';
	std::cout << "double: nan" << std::endl;
	return ;
}
