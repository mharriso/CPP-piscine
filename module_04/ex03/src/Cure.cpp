#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure():
		AMateria("Cure")
{
}

Cure::Cure(Cure const& src):
		AMateria("Cure")
{
	(void)src;
}

Cure&	Cure::operator=(Cure const& rhs)
{
	if(this == &rhs)
		return *this;
	return *this;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return clone;
}

void		Cure::use(ICharacter& target)
{
		std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
