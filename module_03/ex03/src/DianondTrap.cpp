#include "DianondTrap.hpp"

DianondTrap::DianondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DianondTrap::DianondTrap(const DianondTrap &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DianondTrap::~DianondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DianondTrap&	DianondTrap::operator=(const DianondTrap &rhs)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return *this;
}


