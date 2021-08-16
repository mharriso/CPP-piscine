#include "Animal.hpp"

Animal::Animal():
		_type("Animal")
{
	putString("Animal default constructor called", C_MAGENTA);
}

Animal::Animal(const Animal &src)
{
	putString("Animal copy constructor called", C_MAGENTA);
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if(this == &rhs)
		return *this;
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	putString("Animal destructor called", C_MAGENTA);
}

std::string	Animal::getType() const
{
	return (this->_type);
}
