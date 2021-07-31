#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private :
		std::string	_name;
	public:
		void whoAmI();
		using ScavTrap::attack;
		DiamondTrap &operator=(const DiamondTrap &rhs);

		DiamondTrap(const DiamondTrap &src);
		DiamondTrap(const std::string name);
		DiamondTrap();
		~DiamondTrap();


};
#endif
