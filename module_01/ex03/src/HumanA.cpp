#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &rWeapon):
		_name(name),
		_rWeapon(rWeapon)
{

}

HumanA::~HumanA()
{

}

void			HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _rWeapon.getType() << std::endl;
}
