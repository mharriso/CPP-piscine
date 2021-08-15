#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		void	printIdeas() const;
		void	makeSound() const;
		Dog();
		Dog(const Dog &);
		Dog &operator=(const Dog &);
		~Dog();
};

#endif
