#include "Dog.hpp"

Dog::Dog()
{
	putString("Dog default constructor called", C_BLUE);
	this->_type = "Dog";
	this->_brain = new Brain;
	this->_brain->setIdeas("*I want to run ..  ..  .. RUN!*");

}

Dog::~Dog()
{
	putString("Dog destructor called", C_BLUE);
	delete _brain;
}

Dog&	Dog::operator=(Dog const&rhs)
{
	putString("Dog assignation operator called", C_BLUE);
	if (this != &rhs)
		_brain = new Brain(*rhs._brain);
	return *this;
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

void	Dog::printIdeas() const
{
	_brain->printIdeas();
}
