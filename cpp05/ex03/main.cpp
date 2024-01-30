#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./Intern.hpp"

int	main(void)
{
	AForm		*form;
	Intern		intern;

	form = intern.makeForm("presidential pardon", "Gabriel0");
	if (!form)
		std::cout << "Veio nullo" << std::endl;
	else
		std::cout << *form << std::endl;
	delete form;
	std::cout << std::endl;
	
	form = intern.makeForm("robotomy request", "Gabriel1");
	if (!form)
		std::cout << "Veio nullo" << std::endl;
	else
		std::cout << *form << std::endl;
	delete form;
	std::cout << std::endl;

	form = intern.makeForm("shrubbery creation", "Gabriel2");
	if (!form)
		std::cout << "Veio nullo" << std::endl;
	else
		std::cout << *form << std::endl;
	delete form;
	std::cout << std::endl;

	form = intern.makeForm("coisa aleatória", "Gabriel3");
	if (!form)
		std::cout << "Veio nullo" << std::endl;
	else
		std::cout << *form << std::endl;
	delete form;
	std::cout << std::endl;

	return (0);
}
