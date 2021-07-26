#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		void highFivesGuys(void);
		FragTrap& operator=(const FragTrap &rhs);
		FragTrap(const std::string name);
		FragTrap();
		~FragTrap();

};
#endif
