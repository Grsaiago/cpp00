#include "./Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	ex("Gabriel", 22);

	std::cout << ex << std::endl;

#ifdef ERROR_HIGH
	try {
		Bureaucrat	err("Error sample", 1);
		err.incrementGrade(2);
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif
#ifdef ERROR_LOW
	try {
		Bureaucrat	err("Error sample", 150);
		err.decrementGrade(1);
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif
	return (0);
}
