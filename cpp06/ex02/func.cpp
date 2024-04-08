#include "func.hpp"

Base * generate(void)
{
	Base	*ptr;
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
	/*
	if (dynamic_cast<A *>(dynamic_cast<Base *>(&p)) != NULL)
		std::cout << "O tipo é A" << std::endl;
	else if (dynamic_cast<B *>(dynamic_cast<Base *>(&p)) != NULL)
		std::cout << "O tipo é B" << std::endl;
	else if (dynamic_cast<C *>(dynamic_cast<Base *>(&p)) != NULL)
		std::cout << "O tipo é C" << std::endl;
	*/
	if (dynamic_cast<A *>(&p) != NULL) {
		std::cout << "O tipo é A" << std::endl;
		return ;
	}
	else if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "O tipo é B" << std::endl;
		return ;
	}
	else if (dynamic_cast<C *>(&p) != NULL) {
		std::cout << "O tipo é C" << std::endl;
		return ;
	}
}
