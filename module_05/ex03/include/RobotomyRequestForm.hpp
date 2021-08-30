#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const	_target;

	public:
		void	action() const;
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const&);
		~RobotomyRequestForm();
};

#endif
