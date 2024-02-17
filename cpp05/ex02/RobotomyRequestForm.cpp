#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	AForm("RobotomyRequestForm", 72, 45),
	target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) :
	AForm("RobotomyRequestForm", 72, 45),
	target(cpy.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	(void)canExecute(executor);
	if (rand() > RAND_MAX / 2)
		std::cout << this->target + " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target + "'s robotomization failed" << std::endl;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

