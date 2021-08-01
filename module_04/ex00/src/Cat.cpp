#include "Cat.hpp"

Cat::Cat()
{
	putString("Cat default constructor called", C_GREEN);
	this->_type = "Cat";
}

Cat::~Cat()
{
	putString("Cat destructor called", C_GREEN);
}

Cat &Cat::operator=(const Cat &rhs)
{
	if(this == &rhs)
		return *this;
	this->_type =rhs._type;
	return(*this);
}

Cat::Cat(const Cat &src)
{
	putString("Cat copy constructor called", C_GREEN);
	*this = src;
}

void	Cat::makeSound() const
{
	std::cout << _type << " says Meeeoww" << std::endl;
}
