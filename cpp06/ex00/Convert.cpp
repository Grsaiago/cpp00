#include "Convert.hpp"

static void	printPositiveInfInff(void);
static void	printNegativeInfInff(void);
static void	printNanNanf(void);
static void	printHigherThanLong(void);
static double	ft_strtod(std::string const &str);

Convert::Convert(void) { }

Convert::~Convert(void) { }

void	Convert::convert(std::string str)
{
	double number;

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
		number = ::ft_strtod(str);
		(void)number;
		std::cout << number << std::endl;
		// ::printChar(number);
		// ::printInt(number);
		// ::printFloat(number);
		// ::printDouble(number);
	} catch (std::exception &err) {
		::printHigherThanLong();
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

static void	printHigherThanLong(void)
{
	std::cout << "char: you" << '\n';
	std::cout << "int: really" << '\n';
	std::cout << "float: tried" << '\n';
	std::cout << "double: this???????" << std::endl;
	return ;
}

static double	ft_strtod(std::string const &str)
{
	char	*endOfConversion;
	double	result;

	result = strtod(str.c_str(), &endOfConversion);
	if (endOfConversion == str.c_str())
		throw std::invalid_argument("ft_strtod: invalid argument");
	/*
	else if ((result == std::numeric_limits<double>::max() || result == std::numeric_limits<double>::min())
		&& errno == ERANGE)
	*/
	else if (errno == ERANGE)
		throw std::out_of_range("ft_strtod: double overflow...really??");
	return (result);
}
