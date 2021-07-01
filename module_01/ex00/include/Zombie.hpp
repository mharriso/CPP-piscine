#ifndef Zombie_HPP
# define Zombie_HPP
#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie();
		~Zombie();

};
#endif
