#include <iostream>
#include "ScavTrap.hpp"
#include "tools.hpp"

int main()
{
	ScavTrap scav("Rick");
	ClapTrap clap("Sensei");

	putString("\n   ClapTrap Stats   ", ULINE);
	clap.printStats();
	putString("\n   ScavTrap Stats   ", ULINE);
	scav.printStats();
	putString("\n   GuardGate   ", ULINE);
	scav.guardGate();
	return 0;
}
