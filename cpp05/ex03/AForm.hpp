#ifndef AFORM_HPP
# define AFORM_HPP
# include "./Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm
{
	public:
		// constructors / destructors
		AForm(void);
		AForm(std::string name, int sign, int execute);
		AForm(AForm const &cpy);
		virtual ~AForm(void);

		// getter / setter
		std::string	getName(void) const;
		int			getRequiredGradeToSign(void) const;
		int			getRequiredGradeToExecute(void) const;
		bool		getSignedStatus(void) const;
		void		setSignedStatus(bool newValue);

		// methods
		void			beSigned(Bureaucrat const &bu);
		bool			canExecute(Bureaucrat const &executor) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;


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
		class FormNotSignedException : public std::logic_error {
			public:
				FormNotSignedException(std::string message);
		};

	private:
		const std::string	_name;
		const int			_requiredGradeToSign;
		const int			_requiredGradeToExecute;
		bool				_signed;

};

std::ostream	&operator<<(std::ostream &os, AForm const &rhs);

#endif
