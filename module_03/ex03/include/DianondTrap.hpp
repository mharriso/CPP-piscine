#ifndef DIANONDTRAP_H
#define DIANONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DianondTrap: public ScavTrap, public FragTrap
{
	private:

	public:
		void whoAmI();
		DianondTrap &operator=(const DianondTrap &rhs);
		DianondTrap(const DianondTrap &src);
		DianondTrap();
		~DianondTrap();

};
#endif
