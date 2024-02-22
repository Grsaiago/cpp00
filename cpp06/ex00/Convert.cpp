#include "Convert.hpp"

static double	ft_strtod(std::string const &str);
static void	printChar(double number);
static void	printInt(double number);
static void	printFloat(double number);
static void	printDouble(double number);
static void	printPositiveInfInff(void);
static void	printNegativeInfInff(void);
static void	printNanNanf(void);
static void	printHigherThanLong(void);

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
		::printChar(number);
		::printInt(number);
		::printFloat(number);
		::printDouble(number);
	} catch (std::exception &err) {
		::printHigherThanLong();
		std::cout << err.what() << std::endl;
	}
}

static void	printChar(double number)
{
	char	c = static_cast<char>(number);


	if (static_cast<double>(c) != number)
		std::cout << "char: overflow or underflow" << '\n'; 
	else if (!std::isprint(c) || std::isspace(c))
		std::cout << "char: non-printable" << '\n'; 
	else
		std::cout << "char: " << c << '\n'; 
	return ;
}

static void	printInt(double number)
{
	int	i = static_cast<int>(number);
	if (static_cast<double>(i) != number)
		std::cout << "int: overflow or underflow" << '\n';
	else
		std::cout << "int: " << i << '\n';
}

static void	printFloat(double number)
{
	float	f = static_cast<float>(number);

	std::cout << std::fixed << std::setprecision(2);
	if (static_cast<double>(f) != number)
		std::cout << "float: overflow or underflow" << '\n';
	else
		std::cout << "float: " << f << "f" << '\n';
}

static void	printDouble(double number)
{
	double	d = static_cast<double>(number);

	std::cout << "double: " << d << '\n';
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
