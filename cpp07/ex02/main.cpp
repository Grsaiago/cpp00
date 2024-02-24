#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<std::string>	arr(10);

	arr[1] = "oie";
	Array<std::string>	arr2(arr);

	std::cout << arr2[1] << std::endl;
	return (0);
}
