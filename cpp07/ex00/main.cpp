#include "template.hpp"
#include <iostream>

int main (void)
{
	int a = 0;
	int b = 1;

	std::cout << "---- Com int ----" << std::endl;
	std::cout << "o int a é: " << a << std::endl;
	std::cout << "o int b é: " << b << std::endl;
	std::cout << "o resultado de min é: " << ::min(a, b) << std::endl;
	std::cout << "o resultado de max é: " << ::max(a, b) << std::endl;
	::max(a, b);
	std::cout << "swap" << std::endl;
	::swap(a, b);
	std::cout << "o int a é: " << a << std::endl;
	std::cout << "o int b é: " << b << std::endl;
	std::cout << std::endl;

	std::string strA = "eu sou a";
	std::string strB = "eu sou b";

	std::cout << "---- Com std::string ----" << std::endl;
	std::cout << "a strA é: " << strA << std::endl;
	std::cout << "a strB é: " << strB << std::endl;
	std::cout << "o resultado de min é: " << ::min(strA, strB) << std::endl;
	std::cout << "o resultado de max é: " << ::max(strA, strB) << std::endl;
	::max(strA, strB);
	std::cout << "swap" << std::endl;
	::swap(strA, strB);
	std::cout << "a strA é: " << strA << std::endl;
	std::cout << "a strB é: " << strB << std::endl;
	return 0;
}
