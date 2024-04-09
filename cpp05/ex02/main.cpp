#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

int	main(void)
{
	AForm		*form = NULL;
	Bureaucrat	bu("Gabriel", 1);

	std::cout << "The form is an instance of ShrubberyCreationForm" << std::endl;
	form = new ShrubberyCreationForm("avaliador");
	try {
		std::cout << "Let's try to execute an unsigned form" << std::endl;
		form->execute(bu);
	} catch (std::exception &err) {
		std::cout << "Error: " << err.what() << std::endl;
	}
	std::cout << "Now, let's sign it..." << std::endl;
	form->beSigned(bu);
	std::cout << "And execute it." << std::endl;
	form->execute(bu);
	std::cout << std::endl;
	delete form;

	std::cout << "The form is now an instance of PresidentialPardonForm" << std::endl;
	form = new PresidentialPardonForm("avaliador");
	try {
		std::cout << "Let's try to execute an unsigned form" << std::endl;
		form->execute(bu);
	} catch (std::exception &err) {
		std::cout << "Error: " << err.what() << std::endl;
	}
	std::cout << "Now, let's sign it..." << std::endl;
	form->beSigned(bu);
	std::cout << "And execute it." << std::endl;
	form->execute(bu);
	std::cout << std::endl;
	delete form;

	std::cout << "The form is now an instance of RobotomyRequestForm" << std::endl;
	form = new RobotomyRequestForm("avaliador");
	try {
		std::cout << "Let's try to execute an unsigned form" << std::endl;
		form->execute(bu);
	} catch (std::exception &err) {
		std::cout << "Error: " << err.what() << std::endl;
	}
	std::cout << "Now, let's sign it..." << std::endl;
	form->beSigned(bu);
	std::cout << "And execute it." << std::endl;
	form->execute(bu);
	std::cout << std::endl;
	delete form;

	return (0);
}
