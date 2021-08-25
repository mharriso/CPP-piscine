#include "DiamondTrap.hpp"
#include "tools.hpp"

DiamondTrap::DiamondTrap()
{
	putString("DiamondTrap default constructor called", C_BLUE);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	putString("DiamondTrap copy constructor called", C_BLUE);
	*this = src;
}

DiamondTrap::DiamondTrap(const std::string name):
		ClapTrap(name + "_clap_name"),
		ScavTrap(name),
		FragTrap(name),
{
	putString("DiamondTrap constructor called", C_BLUE);
	_name = name;
	ScavTrap::setEnergyPoints();
}

DiamondTrap::~DiamondTrap()
{
	putString("DiamondTrap destructor called", C_BLUE);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &rhs)
{
	putString("DiamondTrap assignation operator called", C_BLUE);
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : " << _name << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
}


