#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

# define GRADE_MIN	150
# define GRADE_MAX	1

class AForm;

class Bureaucrat
{
	public:
		//constructors
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);

		//destructor
		~Bureaucrat(void);

		//overload
		Bureaucrat	&operator=(const Bureaucrat &lhs);

		//getter setter
		std::string	getName(void) const;
		int		getGrade(void) const;
		void	setGrade(int grade);

		//methods
		void	incrementGrade(unsigned int value);
		void	decrementGrade(unsigned int value);
		void	signForm(bool couldSign, std::string formName) const;
		void	executeForm(AForm const & form);
		class GradeTooHighException : public std::logic_error
		{
			public:
				GradeTooHighException(void);
		};
		class GradeTooLowException : public std::logic_error
		{
			public:
				GradeTooLowException(void);
		};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
