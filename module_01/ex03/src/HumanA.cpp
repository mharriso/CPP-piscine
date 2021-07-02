#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &rWeapon):
		_pWeapon(&rWeapon),
		_name(name)
{

}

HumanA::~HumanA()
{

}

void			HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _pWeapon->getType() << std::endl;
}
