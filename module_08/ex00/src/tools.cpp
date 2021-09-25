#include "tools.hpp"

void	putString(const std::string &str, std::string color)
{
	std::cout << color << str << C_RESET << std::endl;
}

void	putError(const char *str)
{
	std::cerr << C_RED << str << C_RESET << std::endl;
}

