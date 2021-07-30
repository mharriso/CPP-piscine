#include <iostream>
#include "DiamondTrap.hpp"
#include "tools.hpp"

int main()
{
	ClapTrap clap("Sensei");
	DiamondTrap diamond("Monster");

	diamond.whoAmI();
	diamond.attack("Sensei");
	clap.takeDamage(30);
	return 0;
}


