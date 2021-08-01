#include <iostream>
#include "tools.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	return (0);
}

