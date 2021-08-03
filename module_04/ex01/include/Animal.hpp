#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "tools.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		virtual void	makeSound() const;
		std::string		getType() const;
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
};

#endif
