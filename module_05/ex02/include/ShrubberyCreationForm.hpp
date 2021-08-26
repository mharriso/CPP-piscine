#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>
# define C_YELLOW  "\e[1;33m"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const	_target;

	public:
		void	action() const;
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const&);
		~ShrubberyCreationForm();
};

#endif
