#include "Cat.hpp"

Cat::Cat()
{
	putString("Cat default constructor called", C_GREEN);
	this->_brain = new Brain;
	this->_type = "Cat";
	this->_brain->setIdeas("*I want to sleep ...Zzzz....*");
}

Cat::~Cat()
{
	putString("Cat destructor called", C_GREEN);
	delete _brain;
}


Cat::Cat(const Cat &src)
{
	putString("Cat copy constructor called", C_GREEN);
	*this = src;
}

Cat&	Cat::operator=(Cat const&rhs)
{
	putString("Cat assignation operator called", C_GREEN);
	if (this != &rhs)
		_brain = new Brain(*rhs._brain);
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << _type << " says Meeeoww" << std::endl;
}

void	Cat::printIdeas() const
{
	_brain->printIdeas();
}
