#include <iostream>
#include "tools.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void		wrong_test(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete i;
}

void		correct_test(void)
{
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
}

int		main(void)
{
	putString("             CORRECT TEST             ", B_GREEN);
	correct_test();
	putString("              WRONG TEST              ", B_RED);
	wrong_test();
	return (0);
}

