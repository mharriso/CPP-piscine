#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		void guardGate();
		void setEnergyPoints();
		void attack(std::string const& target);
		ScavTrap(std::string name);
		ScavTrap&operator=(const ScavTrap &rhs);
		ScavTrap(const ScavTrap&);
		ScavTrap();
		~ScavTrap();
};
#endif
