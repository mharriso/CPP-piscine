#include "Zombie.hpp"
#include "func.hpp"

int main()
{
	Zombie *newZmb;

	newZmb = newZombie("Heap");
	newZmb->announce();
	delete newZmb;
	randomChump("Stack");
	return (0);
}

