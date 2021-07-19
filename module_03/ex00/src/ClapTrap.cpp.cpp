#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void		attack(std::string const & target)
{

}

void		takeDamage(unsigned int amount)
{

}

void		beRepaired(unsigned int amount)
{
	
}
