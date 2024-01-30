#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &cpy) {(void)cpy;}

Intern::~Intern(void) {}

Intern&	Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget) const
{
	int	formToCreate;

	formToCreate = this->hashForm(formName);
	switch (formToCreate)
	{
		case (SHRUBBERY):
			return (new ShrubberyCreationForm(formTarget));
			break ;
		case (PARDON):
			return (new PresidentialPardonForm(formTarget));
			break ;
		case (ROBOTOMY):
			return (new RobotomyRequestForm(formTarget));
			break ;
	}
	return (NULL);
}

int	Intern::hashForm(std::string &formName) const
{
	int	hashValue = 0;

	for (std::string::iterator i = formName.begin(); i != formName.end(); i++)
		hashValue += *i;
	return (hashValue);
}
