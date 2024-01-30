#ifndef INTERN_HPP
# define INTERN_HPP
# define SHRUBBERY 1867
# define PARDON 1960
# define ROBOTOMY 1700
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &cpy);
		~Intern(void);
		Intern&	operator=(Intern const &rhs);
		AForm	*makeForm(std::string formName, std::string formTarget) const;
	private:
		int	hashForm(std::string &formName) const;
};

#endif
