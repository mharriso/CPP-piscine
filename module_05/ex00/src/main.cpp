#include <iostream>
#include "Bureaucrat.hpp"
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
	Bureaucrat Emily("Klerk Emily", 150);
	std::cout << Emily;

	sleep(1);
	std::cout << std::endl << "<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>" << std::endl;
	std::cout << std::endl << "Try to increment Boss's grade: " << std::endl;
	sleep(2);
	Robert.incrementGrade();
	sleep(1);
	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	sleep(2);
	Emily.decrementGrade();
	sleep(1);
	std::cout << Emily;

	sleep(1);
	std::cout << std::endl << "<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>" << std::endl;
	std::cout << std::endl << "Try to create bureaucrat with invalid grade:" << std::endl;
	sleep(2);
	try
	{
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	sleep(2);
		try
	{
		Bureaucrat Million("Million", 1000000);
		std::cout << Million;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}

	return 0;
}
