#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):
		Form("ShrubberyCreationForm", 145, 137),
		_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src):
		Form("ShrubberyCreationForm", 145, 137),
		_target(src._target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	(void)rhs;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fout(_target + "_shrubbery");
	fout << C_YELLOW << "░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄▄▄░░░░░░░\n░░░░░░░░▄▄▄░░░░░░▄███████████▄░░░░\n░░░░▄█████████▄▄███████████████▄░░\n░░██████████████████████▀░░░░▀▀▀█▄\n░▀▀░░░▄▄██████████████████▄░░░░░░░\n░░░▄████████████████████████▄░░░░░\n░░▄████▀▀██████▀████░░▀██████▄░░░░\n░▄███▀░░██████░░░███▄░░░░█████░░░░\n░██▀░░░██████░░░░████░░░░░████░░░░\n░█▀░░░░█████░░░░░█████░░░░░██▀░░░░\n░▀░░░░░█████░░░░░█████░░░░░██░░░░░\n░░░░░░░░███░░░░░░█████░░░░░▀░░░░░░\n░░░░░░░░░██░░░░░░█████░░░░░░░░░░░░\n░░░░░░░░░░▀█░░░░░█████░░░░░░░░░░░░\n░░░░░░░░░░░░░░░░██████░░░░░░░░░░░░\n░░░░░░░░░░░░░░░▄██████░░░░░░░░░░░░\n░░░░░░░░░▄▄▄▄▄▄███████▄▄░░░░░░░░░░\n▄▄▄██████████████████████▄▄▄░░░░░░\n▀█████████████████████████▀▀░░░░░░\n" << C_RESET;

}
