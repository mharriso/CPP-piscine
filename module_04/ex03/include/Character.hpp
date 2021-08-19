#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*_materias[4];
		std::string const	_name;
		Character();

	public:
		std::string const&	getName() const;
		void				equip(AMateria *m);
		void				unequip(int i);
		void				use(int i, ICharacter& target);
		Character(std::string name);
		Character(Character const&);
		Character	&operator=(Character const&);
		~Character();

};

#endif
