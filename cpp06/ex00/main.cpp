#include "Convert.hpp"
#include <iostream>
#include <sstream>

int main(int argc, char **argv)
{
	(void)argc;
	/*
	std::cout << "--- Convert com nan e nanf ---" << '\n';
	Convert::convert("nan");
	std::cout << '\n';
	std::cout << "--- Convert com inf e +inf, inff e +inff ---" << '\n';
	Convert::convert("inf");
	std::cout << '\n';
	std::cout << "--- Convert com -inf e -inff ---" << '\n';
	Convert::convert("-inf");
	std::cout << '\n';
	*/
	if (argc != 2) {
		std::cerr << "please input a number" << std::endl;
		return (EXIT_FAILURE);
	}
	Convert::convert(argv[1]);
	std::cout << std::endl;

	return 0;
}
