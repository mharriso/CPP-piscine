#include "HumanB.hpp"

HumanB::HumanB() :
		_name("")
{

}

HumanB::HumanB(std::string name) :
		_name(name)
{

}

HumanB::~HumanB()
{

}

void			HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _rWeapon.getType() << std::endl;
}
