#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		void		use(ICharacter& target);
		AMateria*	clone() const;
		Ice	&operator=(Ice const &);
		Ice(Ice const &);
		Ice();
		~Ice();

};

#endif
