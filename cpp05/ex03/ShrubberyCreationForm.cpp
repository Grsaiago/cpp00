#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreation", 145, 137),
	target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) :
	AForm("ShrubberyCreation", 145, 137),
	target(cpy.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)canExecute(executor);
	std::fstream	file((this->target + "_shrubbery").c_str(), std::fstream::app);

	if (file.is_open() == false)
		return ;
	file << "	  \b\b\b\b/\\\n";
	file << "     /\\*\\\n";
	file << "    /\\O\\*\\\n";
	file << "   /*/\\/\\/\\\n";
	file << "  /\\O\\/\\*\\/\\\n";
	file << " /\\*\\/\\*\\/\\/\\\n";
	file << "/\\O\\/\\/*/\\/O/\\\n";
	file << "      ||\n";
	file << "      ||\n";
	file << "      ||\n";

	file << "\n";

	file << "	  \b\b\b\b/\\\n";
	file << "     /\\*\\\n";
	file << "    /\\O\\*\\\n";
	file << "   /*/\\/\\/\\\n";
	file << "  /\\O\\/\\*\\/\\\n";
	file << " /\\*\\/\\*\\/\\/\\\n";
	file << "/\\O\\/\\/*/\\/O/\\\n";
	file << "      ||\n";
	file << "      ||\n";
	file << "      ||\n";

	file << "\n";

	file << "	  \b\b\b\b/\\\n";
	file << "     /\\*\\\n";
	file << "    /\\O\\*\\\n";
	file << "   /*/\\/\\/\\\n";
	file << "  /\\O\\/\\*\\/\\\n";
	file << " /\\*\\/\\*\\/\\/\\\n";
	file << "/\\O\\/\\/*/\\/O/\\\n";
	file << "      ||\n";
	file << "      ||\n";
	file << "      ||\n";

	file.close();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

