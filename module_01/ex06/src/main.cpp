#include <iostream>
#include "Karen.hpp"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

int main(int argc, char const **argv)
{
	Karen	karen;
	int		level;
	std::string array[] = {	"DEBUG",
							"INFO",
							"WARNING",
							"ERROR"};

	if(argc != 2)
	{
		std::cerr << RED"INVALID ARGUMENT: level"RESET<< std::endl;
		return (0);
	}
	level = -1;
	for(int i = 0; i < 4 && level == -1; i++)
		if(argv[1] == array[i])
			level = i;
	switch (level)
	{
		case (0):
		{
			std::cout << BLUE"[ DEBUG ]"RESET << std::endl;
			karen.debug();
		}
		case (1):
		{
			std::cout << BLUE"[ INFO ]"RESET << std::endl;
			karen.info();
		}
		case (2):
		{
			std::cout << BLUE"[ WARNING ]"RESET << std::endl;
			karen.warning();
		}
		case (3):
		{
			std::cout << BLUE"[ ERROR ]"RESET << std::endl;
			karen.error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

