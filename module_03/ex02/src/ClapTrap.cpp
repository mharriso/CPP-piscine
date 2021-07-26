#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hitPoints(100),
		_energyPoints(50),
		_attackDamage(20)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src):
		_name(src._name),
		_hitPoints(src._hitPoints),
		_energyPoints(src._energyPoints),
		_attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap&rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
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

std::ostream& operator << (std::ostream &os, const ClapTrap &rhs)
{
	os << rhs.getName();
	return os;
}
