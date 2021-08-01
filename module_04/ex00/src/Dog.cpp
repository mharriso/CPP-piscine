#include "Dog.hpp"

Dog::Dog()
{
	putString("Dog default constructor called", C_BLUE);
	this->_type = "Dog";
}

Dog::~Dog()
{
	putString("Dog destructor called", C_BLUE);
}

Dog &Dog::operator=(const Dog &rhs)
{
	if(this == &rhs)
		return *this;
	this->_type =rhs._type;
	return(*this);
}

Dog::Dog(const Dog &src)
{
	putString("Dog copy constructor called", C_BLUE);
	*this = src;
}

void	Dog::makeSound() const
{
	std::cout << _type << " says Woooff" << std::endl;
}

