#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "tools.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat Sam("Manager Sam", 21);
	std::cout << Sam;
	Bureaucrat Tim("Manager Tim", 42);
	std::cout << Tim;
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;

	sleep(1);
	putString("<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>", C_YELLOW);
	std::cout << "Try to increment Boss's grade: " << std::endl;
	sleep(1);
	Robert.incrementGrade();
	sleep(1);
	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	sleep(1);
	Emily.decrementGrade();
	sleep(1);
	std::cout << Emily << std::endl;

	sleep(1);
	putString("<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>", C_YELLOW);
	std::cout << "Try to create a bureaucrat with invalid grade:" << std::endl;
	sleep(1);
	try
	{
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	sleep(1);
		try
	{
		Bureaucrat Million("Million", 1000000);
		std::cout << Million;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	std::cout << std::endl;
	sleep(1);
	putString("<<<<<<<<<<<< TEST 3 >>>>>>>>>>>>", C_YELLOW);
	sleep(1);
	std::cout << "Create a valid form: " << std::endl;
	Form contract("Labor Contract", 20, 1);
	std::cout << contract;
	sleep(1);
	std::cout << "Try to create an invalid form: " << std::endl;
	try
	{
		Form fail1("Document", 9999, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
	sleep(1);
	std::cout << "Try to create an invalid form: " << std::endl;
	try
	{
		Form fail2("Document", 42, -555);
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl << std::endl;
	}
	sleep(1);
	putString("<<<<<<<<<<<< TEST 4 >>>>>>>>>>>>", C_YELLOW);
	sleep(1);
	std::cout << "Clerk is trying to sign the form ..." << std::endl;
	Emily.signForm(contract);
	sleep(1);
	std::cout << "Boss is trying to sign the form ..." << std::endl;
	Robert.signForm(contract);
	sleep(1);
	std::cout << "Boss is trying to sign the form again ..." << std::endl;
	Robert.signForm(contract);
	return 0;
}
