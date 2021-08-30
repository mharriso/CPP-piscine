#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "tools.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	std::cout << std::endl;
	putString("<<<<<<<<<<<< TEST VALID FORM >>>>>>>>>>>>", C_YELLOW);
	sleep(1);
	Form* rrf;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	sleep(1);
	Form* scf;
	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "Island");
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	sleep(1);
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	sleep(1);
	Robert.signForm(*rrf);
	sleep(1);
	Robert.executeForm(*rrf);
	sleep(1);
	Robert.signForm(*scf);
	sleep(1);
	Robert.executeForm(*scf);
	sleep(1);
	std::cout << std::endl;
	putString("<<<<<<<<<<<< TEST INVALID FORM >>>>>>>>>>>>", C_YELLOW);
	sleep(1);
	try
	{
		scf = someRandomIntern.makeForm("Contract", "Tim Cook");
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	return 0;
}
