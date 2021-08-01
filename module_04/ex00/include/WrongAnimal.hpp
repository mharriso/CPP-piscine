#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include "tools.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		void			makeSound() const;
		std::string		getType() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &);
		WrongAnimal &operator=(const WrongAnimal &);
		virtual ~WrongAnimal();
};

#endif
