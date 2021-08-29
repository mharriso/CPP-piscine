#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target):
		Form("RobotomyRequestForm", 72, 45),
		_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src):
		Form("RobotomyRequestForm", 72, 45),
		_target(src._target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	(void)rhs;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	std::cout << "ZzZzzzzzrrr... ZzzzZzzrrr... ZZZZzzzzzzrr... ZZZZzzzzzzzrr... ZZZZZZzrrrrrr..." << std::endl;
	if(rand() % 2)
		std::cout << C_GREEN <<  _target << " has been robotomized successfully" << C_RESET << std::endl;
	else
		std::cout << C_RED <<  _target << " has not been robotomized" << C_RESET << std::endl;
}
