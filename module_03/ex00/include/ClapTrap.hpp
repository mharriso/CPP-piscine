#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		ClapTrap(const ClapTrap&);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
};
#endif
