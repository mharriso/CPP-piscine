#include <iostream>
#include "ClapTrap.hpp"
#include "tools.hpp"

int main()
{
	ClapTrap clap("Sensei");

	putString("\n   ClapTrap Stats   ", ULINE);
	clap.printStats();
	clap.attack("Jack");
	clap.takeDamage(0);
	clap.beRepaired(121);
	return 0;
}
