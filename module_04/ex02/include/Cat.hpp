#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		void	printIdeas() const;
		void	makeSound() const;
		Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &);
		~Cat();
};

#endif
