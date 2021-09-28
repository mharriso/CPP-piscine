#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "tools.hpp"
#include "easyfind.hpp"

int main ()
{

	putString("<<<<  INIT ARRAY  >>>>", C_BLUE);
	int myInts[] = { 10, 20, 21, 30, 40 };
	for (size_t i = 0; i < 5; i++)
		std::cout << myInts[i] << ' ';
	std::cout << std::endl;

	std::cout << std::endl;
	putString("< Create myVector (const)>", C_BLUE);
	std::vector<int> myVector (myInts, myInts+4);
	std::vector<int>::const_iterator it_vector;
	putString("Try to find 21 ...", C_YELLOW);
	try
	{
		it_vector = easyfind(myVector, 21);
		std::cout << "Element found in myVector: " << *it_vector << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	putString("Try to find 42 ...", C_YELLOW);
	try
	{
		it_vector = easyfind(myVector, 42);
		std::cout << "Element found in myVector: " << *it_vector << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}

	{
	std::cout << std::endl;
	putString("< Create myList (const)>", C_BLUE);
	std::list<int> myList (myInts, myInts+4);
	std::list<int>::const_iterator it_list;
	putString("Try to find 21 ...", C_YELLOW);
	try
	{
		it_list = easyfind(myList, 21);
		std::cout << "Element found in myList: " << *it_list << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	putString("Try to find 42 ...", C_YELLOW);
	try
	{
		it_list = easyfind(myList, 42);
		std::cout << "Element found in myVector: " << *it_list << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	}
	std::cout << std::endl;
	putString("< Create myList >", C_BLUE);
	std::list<int> myList (myInts, myInts+4);
	std::list<int>::iterator it_list;
	putString("Try to find 21 ...", C_YELLOW);
	try
	{
		it_list = easyfind(myList, 21);
		std::cout << "Element found in myList: " << *it_list << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	putString("Try to find 42 ...", C_YELLOW);
	try
	{
		it_list = easyfind(myList, 42);
		std::cout << "Element found in myVector: " << *it_list << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	return 0;
}
