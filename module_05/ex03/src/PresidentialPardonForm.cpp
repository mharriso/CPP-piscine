#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
		Form("PresidentialPardonForm", 25, 5),
		_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src):
		Form("PresidentialPardonForm", 25, 5),
		_target(src._target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::action() const
{
	std::cout << std::string(42, '*') << std::endl << _target << " has been forgiven by Zafod Beeblebrox!" << std::endl <<std::string(42, '*') << std::endl;
}

