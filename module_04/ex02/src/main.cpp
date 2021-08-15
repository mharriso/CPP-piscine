#include <iostream>
#include "tools.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	//You cant instantiates it because Animal is an abstract class now
	//Animal fail;
	putString("         TEST DEEP COPY         ", B_GREEN);
	putString("         CREATE ORIGINALS         ", B_GREEN);
	Cat *cat_original = new Cat;
	Dog *dog_original = new Dog;
	putString("           SHOW IDEAS           ", B_GREEN);
	cat_original->printIdeas();
	dog_original->printIdeas();
	putString("          CREATE COPIES         ", B_GREEN);
	Cat *cat_copy = new Cat(*cat_original);
	Dog *dog_copy = new Dog(*dog_original);
	putString("        DELETE ORIGINALS        ", B_RED);
	delete cat_original;
	delete dog_original;
	putString("           SHOW IDEAS           ", B_GREEN);
	cat_copy->printIdeas();
	dog_copy->printIdeas();
	delete cat_copy;
	delete dog_copy;
	return (0);
}

