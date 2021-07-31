#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		printStats() const;
		ClapTrap	&operator=(const ClapTrap&);
		ClapTrap(const ClapTrap&);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
};

#endif
