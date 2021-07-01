#include "Zombie.hpp"
#include "func.hpp"

#define NUM 5

int main()
{
	Zombie *horde;

	horde = zombieHorde(5, ZMB GREEN"Zombie "RESET"№");
	for(int i = 0; i < NUM; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}

