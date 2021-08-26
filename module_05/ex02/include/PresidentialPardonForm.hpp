#ifndef PRESENDENTIALPARDONFORM_HPP
#define PRESENDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const	_target;

	public:
		void	action() const;
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const&);
		~PresidentialPardonForm();
};

#endif
