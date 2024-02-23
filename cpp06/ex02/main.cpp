#include "func.hpp"
#include <unistd.h>

int main(void)
{
	Base	*ptr;

	for (;;)
	{
		std::cout << "----- start -----" << std::endl;
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
		std::cout << "----- end -----" << std::endl;
		sleep(1);
	}

	return (0);
}
