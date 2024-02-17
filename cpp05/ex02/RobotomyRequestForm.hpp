#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const &rhs);

		// methods //
		virtual void	execute(Bureaucrat const &executor) const;
		// variables //
		std::string	target;
};

#endif
