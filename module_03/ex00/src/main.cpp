#include <iostream>
#include "ClapTrap.hpp"


int main()
{
	ClapTrap sensei("Sensei");
	sensei.attack("Jack");
	sensei.takeDamage(242);
	sensei.beRepaired(121);
	return 0;
}
