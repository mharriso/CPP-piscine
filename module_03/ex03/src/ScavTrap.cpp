#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
		ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::setEnergyPoints()
{
	_energyPoints = 50;
}

void		ScavTrap::attack(std::string const &target)
{
	std::cout << "(ScavTrap) " << this->_name << " attacks " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
}
