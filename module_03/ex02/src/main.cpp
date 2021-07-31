#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "tools.hpp"
int main()
{
	ClapTrap clap("Sensei");
	ScavTrap scav("Rick");
	FragTrap frag("Morty");

	putString("\n   ClapTrap Stats   ", ULINE);
	clap.printStats();
	putString("\n   ScavTrap Stats   ", ULINE);
	scav.printStats();
	putString("\n   FragTrap Stats   ", ULINE);
	frag.printStats();
	putString("\n   highFivesGuys  ", ULINE);
	frag.highFivesGuys();
	return 0;
}
