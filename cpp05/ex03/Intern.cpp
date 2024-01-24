#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &cpy) {}

Intern::~Intern(void) {}

Intern&	Intern::operator=(Intern const &rhs)
{
	return (*this);
}

AForm	*makeForm(std::string formName, std::string formTarget) const
{
}
