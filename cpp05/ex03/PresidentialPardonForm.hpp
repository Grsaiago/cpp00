#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const &rhs);

		// methods //
		virtual void	execute(Bureaucrat const &executor) const;
		// variables //
		std::string	target;
};

#endif
