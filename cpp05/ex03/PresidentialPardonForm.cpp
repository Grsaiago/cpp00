#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", 25, 5),
	target(target)
{ }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) :
	AForm("PresidentialPardonForm", 25, 5),
	target(cpy.target)
{ }

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void)canExecute(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

