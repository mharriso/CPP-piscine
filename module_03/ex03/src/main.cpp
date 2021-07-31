#include <iostream>
#include "DiamondTrap.hpp"
#include "tools.hpp"

int main()
{
	ClapTrap clap("Sensei");
	ScavTrap scav("Rick");
	FragTrap frag("Morty");
	DiamondTrap diamond("Monster");

	putString("\n   ClapTrap Stats   ", ULINE);
	clap.printStats();
	putString("\n   ScavTrap Stats   ", ULINE);
	scav.printStats();
	putString("\n   FragTrap Stats   ", ULINE);
	frag.printStats();
	putString("\n   DiamondTrap Stats   ", ULINE);
	diamond.printStats();
	putString("\n   WhoAmI   ", ULINE);
	diamond.whoAmI();
	putString("\n   Attack   ", ULINE);
	diamond.attack("Sensei");
	putString("\n   TakeDamage   ", ULINE);
	clap.takeDamage(30);
	return 0;
}


