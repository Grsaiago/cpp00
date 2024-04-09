#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int	main(void)
{
	// default case
#if !defined(ERROR_HIGH) && !defined(ERROR_LOW) 
	Bureaucrat	bu("Gabriel", 1);
	Form		ex("exemplo", 75, 75);

	std::cout << bu << std::endl;
	std::cout << ex << std::endl;
	try {
		ex.beSigned(bu);
		std::cout << ex << std::endl;
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif

	// error_high case
#ifdef ERROR_HIGH
	try {
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif

	// error_low case
#ifdef ERROR_LOW
	try {
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif

	return (0);
}
