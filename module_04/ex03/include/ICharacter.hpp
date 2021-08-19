#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter() {};
		virtual std::string const&	getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int i) = 0;
		virtual void				use(int i, ICharacter& target) = 0;
};

#endif
