#include "./Form.hpp"

Form::Form(void) : _name("default"),
	_requiredGradeToSign(75),
	_requiredGradeToExecute(75),
	_signed(false)
{}

Form::Form(std::string name, int sign, int execute) : _name(name),
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

Form::Form(Form const &cpy) : _name(cpy.getName()),
	_requiredGradeToSign(cpy.getRequiredGradeToSign()),
	_requiredGradeToExecute(cpy.getRequiredGradeToExecute()),
	_signed(cpy.getSignedStatus())
{}

Form::~Form(void) {}

//methods
void	Form::beSigned(Bureaucrat const &bu)
{
	if (bu.getGrade() > this->getRequiredGradeToSign())
	{
		bu.signForm(false, this->getName());
		throw GradeTooLowException(std::string("Exception on signing " + this->getName() + " by " + bu.getName() + "\n").c_str());
	}
	else {
		bu.signForm(true, this->getName());
		this->_signed = true;
	}
	return ;
}

// getter / setter
std::string		Form::getName(void) const
{
	return (std::string(this->_name));
}

int	Form::getRequiredGradeToSign(void) const
{
	return (this->_requiredGradeToSign);
}

int	Form::getRequiredGradeToExecute(void) const
{
	return (this->_requiredGradeToExecute);
}

bool	Form::getSignedStatus(void) const
{
	return (this->_signed);
}

void	Form::setSignedStatus(bool newValue)
{
	this->_signed = newValue;
}

// overload
Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs.getSignedStatus();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Form const &rhs)
{
	os << "-- Form '" << rhs.getName() << "' info --" << std::endl;
	os << "RequiredGradeToSign: " << rhs.getRequiredGradeToSign() << std::endl;
	os << "RequiredGradeToExecute: " << rhs.getRequiredGradeToExecute() << std::endl;
	os << "Signed: " << rhs.getSignedStatus() << std::endl;
	os << "-- Form '" << rhs.getName() << "' info end --";
	return (os);
}

// exceptions
Form::GradeTooLowException::GradeTooLowException(std::string message = "Error! grade too low on form\n") : std::logic_error(message) {};

Form::GradeTooHighException::GradeTooHighException(std::string message = "Error! grade too high on form\n") : std::logic_error(message) {};
