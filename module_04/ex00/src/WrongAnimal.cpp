#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
		_type("WrongAnimal")
{
	putString("WrongAnimal default constructor called", C_MAGENTA);
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	putString("WrongAnimal copy constructor called", C_MAGENTA);
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if(this == &rhs)
		return *this;
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	putString("WrongAnimal destructor called", C_MAGENTA);
}

void	WrongAnimal::makeSound() const
{
	std::cout << _type << " says I am WrongAnimal" << std::endl;

}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
