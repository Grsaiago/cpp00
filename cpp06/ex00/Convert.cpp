#include "Convert.hpp"

static void	printPositiveInfInff(void);
static void	printNegativeInfInff(void);
static void	printNanNanf(void);
static long	ft_strtol(std::string const &str);

Convert::Convert(void) { }

Convert::~Convert(void) { }

void	Convert::convert(std::string str)
{
	long int number;

	if (str.compare("nan") == 0
	|| str.compare("nanf") == 0) {
		::printNanNanf();
	}
	if (str.compare("inf") == 0
	|| str.compare("+inf") == 0
	|| str.compare("inff") == 0
	|| str.compare("+inff") == 0) {
		::printPositiveInfInff();
	}

	if (str.compare("-inf") == 0
	|| str.compare("-inff") == 0) {
		::printNegativeInfInff();
	}

	try {
		number = ::ft_strtol(str);
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
}

static void	printPositiveInfInff(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: +inf" << '\n';
	std::cout << "float: +inff" << '\n';
	std::cout << "double: +infd" << std::endl;
	return ;

}

static void	printNegativeInfInff(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: -inf" << '\n';
	std::cout << "float: -inff" << '\n';
	std::cout << "double: -infd" << std::endl;
	return ;
}

static void	printNanNanf(void)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: impossible" << '\n';
	std::cout << "float: nanf" << '\n';
	std::cout << "double: nan" << std::endl;
	return ;
}

static long	ft_strtol(std::string const &str)
{
	char	*endOfConversion;
	long	result;

	result = strtol(str.c_str(), &endOfConversion, 10);
	if (endOfConversion == str.c_str())
		throw std::invalid_argument("ft_stol: invalid argument");
	else if (result == LONG_MAX && errno == ERANGE)
		throw std::out_of_range("ft_stol: long overflow...really??");
	return (result);
}
