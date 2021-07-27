#include <iostream>
#include "ClapTrap.hpp"


int main()
{
	ClapTrap clap("Sensei");

	std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hitpoints"<< std::endl;
	clap.attack("Jack");
	clap.takeDamage(242);
	clap.beRepaired(121);
	return 0;
}
