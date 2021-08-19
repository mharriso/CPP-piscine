#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		std::string			getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const&);
		AMateria	&operator=(AMateria const&);
		virtual ~AMateria();
};

#endif
