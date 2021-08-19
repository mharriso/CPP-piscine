#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		void		use(ICharacter& target);
		AMateria*	clone() const;
		Cure	&operator=(Cure const &);
		Cure(Cure const &);
		Cure();
		~Cure();

};

#endif
