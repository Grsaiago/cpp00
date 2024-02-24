#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<std::string>	arr(5);

	std::cout << "array [arr] logo após ser criado" << arr << std::endl;
	arr[0] = "um";
	arr[1] = "dois";
	arr[2] = "tres";
	arr[3] = "quatro";
	arr[4] = "cinco";
	std::cout << "array [arr] depois de ser modificado" << arr << std::endl;

	Array<std::string>	arr2(arr);
	std::cout << "array [arr2] depois de criar por cópia" << arr2 << std::endl;
	arr2[0] = "zero";
	arr2[1] = "zero";
	arr2[2] = "zero";
	arr2[3] = "zero";
	arr2[4] = "zero";
	std::cout << "array [arr2] depois de modificar" << arr2 << std::endl;

	std::cout << '\n';
	try {
		std::cout << "Okay, everything works... Let's see what's in the tenth position xD" << std::endl;
		arr2[10];
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	return (0);
}
