#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		void announce(void);
		void setName(std::string const name);
		Zombie(std::string const name);
		Zombie();
		~Zombie();
};
#endif
