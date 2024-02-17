#include "./AForm.hpp"

AForm::AForm(void) : _name("default"),
	_requiredGradeToSign(75),
	_requiredGradeToExecute(75),
	_signed(false)
{}

AForm::AForm(std::string name, int sign, int execute) : _name(name),
	_requiredGradeToSign(sign),
	_requiredGradeToExecute(execute),
	_signed(false)
{
	if (sign > GRADE_MIN || execute > GRADE_MIN)
		throw GradeTooLowException(std::string("Exception on instantiation of '" + this->_name + "': grade too low\n").c_str());
	else if (sign < GRADE_MAX || execute < GRADE_MAX)
		throw GradeTooLowException(std::string("Exception on instantiation of '" + this->_name + "': grade too high\n").c_str());
	return ;
}

AForm::AForm(AForm const &cpy) : _name("copia"),
	_requiredGradeToSign(cpy.getRequiredGradeToSign()),
	_requiredGradeToExecute(cpy.getRequiredGradeToExecute()),
	_signed(cpy.getSignedStatus())
{}

AForm::~AForm(void) {}

// methods
void	AForm::beSigned(Bureaucrat const &bu)
{
	if (bu.getGrade() > this->getRequiredGradeToSign())
	{
		bu.signForm(false, this->getName());
		throw GradeTooLowException(std::string("Exception on signing " + this->getName() + " by " + bu.getName() + "\n").c_str());
	}
	else
	{
		this->setSignedStatus(true);
		bu.signForm(true, this->getName());
	}
	return ;
}

bool	AForm::canExecute(Bureaucrat const &executor) const
{
	if (this->getSignedStatus() == 0)
		throw FormNotSignedException("The form " + this->_name + " is not signed");
	else if (executor.getGrade() > this->getRequiredGradeToExecute())
		throw GradeTooLowException(executor.getName() + " doesn´t have a grade higher enough to execute " + this->getName() + "\n");
	return (true);
}

// getter / setter
std::string		AForm::getName(void) const
{
	return (std::string(this->_name));
}

int	AForm::getRequiredGradeToSign(void) const
{
	return (this->_requiredGradeToSign);
}

int	AForm::getRequiredGradeToExecute(void) const
{
	return (this->_requiredGradeToExecute);
}

bool	AForm::getSignedStatus(void) const
{
	return (this->_signed);
}

void	AForm::setSignedStatus(bool newValue)
{
	this->_signed = newValue;
}

// overload

AForm	&AForm::operator=(AForm const &rhs)
{
	this->_signed = rhs.getSignedStatus();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, AForm const &rhs)
{
	os << "-- Form '" << rhs.getName() << "' info --" << std::endl;
	os << "RequiredGradeToSign: " << rhs.getRequiredGradeToSign() << std::endl;
	os << "RequiredGradeToExecute: " << rhs.getRequiredGradeToExecute() << std::endl;
	os << "Signed: " << rhs.getSignedStatus() << std::endl;
	os << "-- Form '" << rhs.getName() << "' info end --";
	return (os);
}

// exceptions
AForm::GradeTooLowException::GradeTooLowException(std::string message = "Error! grade too low on form\n") : std::logic_error(message) {};

AForm::GradeTooHighException::GradeTooHighException(std::string message = "Error! grade too high on form\n") : std::logic_error(message) {};

AForm::FormNotSignedException::FormNotSignedException(std::string message = "Error! Form not Signed\n") : std::logic_error(message) {};
