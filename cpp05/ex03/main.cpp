#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	bu("Gabriel", 1);
	AForm		*form;

	std::cout << bu << std::endl;

	form = new PresidentialPardonForm("pessoa pra ser perdoada");
	std::cout << *form << std::endl;
	form->beSigned(bu);
	form->execute(bu);
	delete form;

	form = new RobotomyRequestForm("Pessoa a ser lobotomizada");
	std::cout << *form << std::endl;
	bu.decrementGrade(130);
	try {
		form->beSigned(bu);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	bu.incrementGrade(130);
	try {
		form->beSigned(bu);
		form->execute(bu);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	delete form;

	form = new ShrubberyCreationForm("arquivoaa");
	std::cout << *form << std::endl;
	bu.decrementGrade(130);
	try {
		form->beSigned(bu);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	bu.incrementGrade(130);
	try {
		form->beSigned(bu);
		form->execute(bu);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	delete form;

#if !defined(ERROR_HIGH) && !defined(ERROR_LOW)
#endif

#ifdef ERROR_HIGH
#endif

#ifdef ERROR_LOW
#endif

	return (0);
}
