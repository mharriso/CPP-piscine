#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "tools.hpp"

void test()
{
	IMateriaSource *materiaSrc = new MateriaSource();
	materiaSrc->learnMateria(new Ice);
	materiaSrc->learnMateria(new Cure);

	AMateria *m1 = materiaSrc->createMateria("ice");
	AMateria *m2 = materiaSrc->createMateria("cure");
	std::cout << "Attempt to create unlearned materia: " << std::endl;
	AMateria *m3 = materiaSrc->createMateria("Fire");
	if(!m3)
		std::cout << "materia is not learned by the source" << std::endl;

	ICharacter *jack = new Character("Jack");
	ICharacter *todd = new Character("Todd");

	jack->equip(m1);
	todd->equip(m2);

	jack->use(0, *todd);
	todd->use(0, *todd);

	jack->unequip(0);
	todd->unequip(0);

	std::cout << "Attempt to unequip empty slot: " << std::endl;
	jack->unequip(3);
	std::cout << "... nothing should happen" << std::endl;

	delete jack;
	delete todd;
	delete materiaSrc;
}

int main()
{
	test();
	//while(1){}
}
