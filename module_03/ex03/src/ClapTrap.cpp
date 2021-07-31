#include "ClapTrap.hpp"
#include "tools.hpp"

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{
	putString("ClapTrap constructor called", C_MAGENTA);
}

ClapTrap::ClapTrap(const ClapTrap &src):
		_name(src._name),
		_hitPoints(src._hitPoints),
		_energyPoints(src._energyPoints),
		_attackDamage(src._attackDamage)
{
	putString("ClapTrap copy constructor called", C_MAGENTA);
}

ClapTrap::ClapTrap()
{
	putString("ClapTrap default constructor called", C_MAGENTA);
}

ClapTrap::~ClapTrap()
{
	putString("ClapTrap destructor called", C_MAGENTA);
}

ClapTrap&	ClapTrap::operator=(const ClapTrap&rhs)
{
	putString("ClapTrap assignation operator called", C_MAGENTA);
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return *this;
}


void		ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " be repaired by " << amount << " points!" << std::endl;

}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

int	ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

std::ostream& operator << (std::ostream &os, const ClapTrap &rhs)
{
	os << rhs.getName();
	return os;
}