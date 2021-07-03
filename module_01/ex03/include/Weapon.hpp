#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		const std::string	getType();
		void				setType(std::string type);
		Weapon(std::string type);
		Weapon();
		~Weapon();

};
#endif
