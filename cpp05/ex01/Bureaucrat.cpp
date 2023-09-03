#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(75) {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > GRADE_MIN)
		throw GradeTooLowException();
	else if (grade < GRADE_MAX)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->setGrade(rhs.getGrade());
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

std::string	Bureaucrat::getName(void) const
{
	return (std::string(this->_name));
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
	return ;
}

// methods
void	Bureaucrat::incrementGrade(unsigned int value)
{
	int	currentGrade = this->getGrade();
	int resultValue = currentGrade - value;

	if (resultValue <= GRADE_MAX)
		throw GradeTooHighException();
	else
		this->setGrade(currentGrade - value);
	return ;
}

void	Bureaucrat::decrementGrade(unsigned int value)
{
	int	currentGrade = this->getGrade();
	int resultValue = currentGrade + value;

	if (resultValue >= GRADE_MIN)
		throw GradeTooLowException();
	else
		this->setGrade(currentGrade + value);
	return ;
}

void	Bureaucrat::signForm(bool couldSign, std::string formName) const
{
	if (couldSign)
		std::cout << this->getName() << " signed " << formName << std::endl;
	else
		std::cout << this->getName() << " couldn't sign '" << formName << "' because their grade wasn't high enough" << std::endl;
	return ;
}

// exceptions
Bureaucrat::GradeTooLowException::GradeTooLowException(void) : std::logic_error("Exception! grade too low\n"){}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) : std::logic_error("Exception! grade too high\n"){}
