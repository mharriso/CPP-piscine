#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		void highFivesGuys(void);
		FragTrap& operator=(const FragTrap &rhs);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &src);
		FragTrap();
		~FragTrap();

};
#endif
