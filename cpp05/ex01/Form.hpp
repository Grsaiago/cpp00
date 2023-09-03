#ifndef FORM_HPP
# define FORM_HPP
# include "./Bureaucrat.hpp"
# include <iostream>

class Form
{
	public:
		// constructors / destructors
		Form(void);
		Form(std::string name, int sign, int execute);
		Form(Form const &cpy);
		~Form(void);

		// getter / setter
		std::string	getName(void) const;
		int			getRequiredGradeToSign(void) const;
		int			getRequiredGradeToExecute(void) const;
		bool		getSignedStatus(void) const;
		void		setSignedStatus(bool newValue);

		// methods
		void	beSigned(Bureaucrat const &bu);

		// overloads

		// exceptions
		class GradeTooLowException : public std::logic_error {
			public:
				GradeTooLowException(std::string message);
		};
		class GradeTooHighException : public std::logic_error {
			public:
				GradeTooHighException(std::string message);
		};

	private:
		const std::string	_name;
		const int			_requiredGradeToSign;
		const int			_requiredGradeToExecute;
		bool				_signed;

};

std::ostream	&operator<<(std::ostream &os, Form const &rhs);

#endif
