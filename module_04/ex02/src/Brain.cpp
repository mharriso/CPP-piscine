#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain&	Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void	Brain::setIdeas(std::string idea)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = idea;
}

void	Brain::printIdeas() const
{
	for (size_t i = 0; i < 100; i++)
		putString(_ideas[i], B_YELLOW);
}


