#include <iostream>
#include "tools.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	putString("         CREATE ANIMAL ARRAY         ", B_GREEN);
	Animal* array[20];
	for (size_t i = 0; i < 10; i++)
		array[i] = new Cat;
	for (size_t i = 10; i < 20; i++)
		array[i] = new Dog;
	for (size_t i = 0; i < 20; i++)
		delete array[i];
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

