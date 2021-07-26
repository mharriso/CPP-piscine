#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
		_name(name),
		_hitPoints(100),
		_energyPoints(50),
		_attackDamage(2)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{

}
