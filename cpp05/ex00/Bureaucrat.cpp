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
	os << "---- Info ----" << std::endl;
	os << "Name: "<< rhs.getName() << std::endl << "Grade: " << rhs.getGrade() << std::endl;
	os << "---- Info end ----" << std::endl;
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

Bureaucrat::GradeTooLowException::GradeTooLowException(void) : std::logic_error("Error! grade too low\n"){}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) : std::logic_error("Error! grade too high\n"){}
