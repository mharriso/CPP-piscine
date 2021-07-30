#include "FragTrap.hpp"
#include "tools.hpp"

FragTrap::FragTrap()
{
	putString("FragTrap default constructor called", C_GREEN);
}

FragTrap::FragTrap(const std::string name) :
		ClapTrap(name)
{
	putString("FragTrap constructor called", C_GREEN);
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	putString("FragTrap copy constructor called", C_GREEN);
	*this = src;
}

FragTrap::~FragTrap()
{
	putString("FragTrap destructor called", C_GREEN);
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
	putString("FragTrap assignation operator called", C_GREEN);
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	putString("High five!", C_GREEN);
}

