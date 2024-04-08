#include "func.hpp"

Base * generate(void)
{
	int	randomNumber;

	srand(time(0));
	randomNumber = 1 + (rand() % 100);
	switch(randomNumber)
	{
		case 1 ... 40:
			return (new A());
		case 41 ... 60:
			return (new B());
		case 61 ... 100:
			return (new C());
	}
	return (new A());
}

void identify(Base* p)
{
	Base	*ptr;

	ptr = dynamic_cast<A *>(p);
	if (ptr != NULL) {
		std::cout << "O tipo é A" << std::endl;
		return ;
	}
	ptr = dynamic_cast<B *>(p);
	if (ptr != NULL) {
		std::cout << "O tipo é B" << std::endl;
		return ;
	}
	ptr = dynamic_cast<C *>(p);
	if (ptr != NULL) {
		std::cout << "O tipo é C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try {
		dynamic_cast<A &>(p);
		std::cout << "O tipo é A" << std::endl;
		return ;
	} catch (std::exception &err) {
		try {
			dynamic_cast<B &>(p);
			std::cout << "O tipo é B" << std::endl;
			return ;
		} catch (std::exception &err) {
			try {
				dynamic_cast<C &>(p);
				std::cout << "O tipo é C" << std::endl;
				return ;
			} catch (std::exception &err) {
				std::cout << "Não é nenhuma??" << std::endl;
				return ;
			}
		}
	}
	return ;
}
