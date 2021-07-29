#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Sensei");
	ScavTrap scav("Rick");
	FragTrap frag("Morty");

	std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hitpoints"<< std::endl;
	std::cout << "ScavTrap " << scav.getName() << " has " << scav.getHitPoints() << " hitpoints"<< std::endl;
	std::cout << "FragTrap " << frag.getName() << " has " << scav.getHitPoints() << " hitpoints"<< std::endl;
	frag.highFivesGuys();
	return 0;
}
