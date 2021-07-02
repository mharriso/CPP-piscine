#ifndef HUMANB_H
#define HUMANB_H
#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		&_rWeapon;
		std::string	_name;
	public:
		void	attack(void);
		HumanB(std::string name);
		HumanB();
		~HumanB();

};
#endif
