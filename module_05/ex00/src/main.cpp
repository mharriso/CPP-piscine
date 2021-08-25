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
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;

	sleep(1);
	putString("<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>", C_YELLOW);
	std::cout << "Try to increment Boss's grade: " << std::endl;
	sleep(2);
	Robert.incrementGrade();
	sleep(1);
	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	sleep(2);
	Emily.decrementGrade();
	sleep(1);
	std::cout << Emily << std::endl;

	sleep(1);
	putString("<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>", C_YELLOW);
	std::cout << "Try to create a bureaucrat with invalid grade:" << std::endl;
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

