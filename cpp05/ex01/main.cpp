#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int	main(void)
{
	Bureaucrat	bu("Gabriel", 100);
	Form		ex("exemplo", 1, 35);

	std::cout << bu << std::endl;
	std::cout << ex << std::endl;
	try {
		ex.beSigned(bu);
		std::cout << ex << std::endl;
	} catch (std::exception &error) {
		std::cout << error.what();
	}

#ifdef ERROR_HIGH
	try {
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif
#ifdef ERROR_LOW
	try {
	} catch (std::exception &error) {
		std::cout << error.what();
	}
#endif
	return (0);
}
