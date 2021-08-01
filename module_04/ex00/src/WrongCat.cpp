#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	putString("WrongCat default constructor called", C_GREEN);
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	putString("WrongCat destructor called", C_GREEN);
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if(this == &rhs)
		return *this;
	this->_type =rhs._type;
	return(*this);
}

WrongCat::WrongCat(const WrongCat &src)
{
	putString("WrongCat copy constructor called", C_GREEN);
	*this = src;
}

void	WrongCat::makeSound() const
{
	std::cout << _type << " says Meeeoww" << std::endl;
}
