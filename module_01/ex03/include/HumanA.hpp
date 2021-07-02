#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*_pWeapon;
		std::string	_name;
	public:
		void	attack(void);
		HumanA(std::string name, Weapon &rWeapon);
		HumanA();
		~HumanA();

};
#endif
