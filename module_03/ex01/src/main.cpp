#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Rick");
	ClapTrap clap("Sensei");

	std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hitpoints"<< std::endl;
	std::cout << "ScavTrap " << scav.getName() << " has " << scav.getHitPoints() << " hitpoints"<< std::endl;
	scav.guardGate();
	return 0;
}
