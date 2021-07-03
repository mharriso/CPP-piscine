#include "Karen.hpp"
#define DEBUG "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
#define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
#define ERROR "This is unacceptable, I want to speak to the manager now."

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void Karen::info(void)
{
	std::cout << INFO << std::endl;

}

void Karen::warning(void)
{
	std::cout << WARNING << std::endl;
}

void Karen::error(void)
{
	std::cout << ERROR << std::endl;
}

typedef void (Karen::*FP)();


