#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &cpy);
		~Intern(void);
		Intern&	operator=(Intern const &rhs);
		AForm	*makeForm(std::string formName, std::string formTarget) const;
};

#endif
