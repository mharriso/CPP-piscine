#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:

	public:
		void guardGate();
		ScavTrap(std::string name);
		ScavTrap&operator=(const ScavTrap &rhs);
		ScavTrap(const ScavTrap&);
		ScavTrap();
		~ScavTrap();
};
#endif
