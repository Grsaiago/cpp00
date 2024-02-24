#include "Array.hpp"
#include "iter.hpp"

int main(void)
{
	Array<int>	arr(10);

	std::cout << arr << std::endl;
	::iter<int>(arr, arr.size(), ::add<int>);
	std::cout << arr << std::endl;
	return (0);
}
