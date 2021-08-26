#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target):
		Form("RobotomyRequestForm", 145, 137),
		_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src):
		Form("RobotomyRequestForm", 145, 137),
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
}
