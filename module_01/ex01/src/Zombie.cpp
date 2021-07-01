#include "Zombie.hpp"

Zombie::Zombie(std::string const name) :
		_name(name)
{
}

Zombie::Zombie() :
		_name("")
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string const name)
{
	this->_name = name;
}

