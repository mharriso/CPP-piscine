#include "AMateria.hpp"

AMateria::AMateria(std::string const& type):
		_type(type)
{
}

AMateria::AMateria(AMateria const& src):
		_type(src._type)
{
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	if(this == &rhs)
		return *this;
	this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria()
{
}

std::string	AMateria::getType() const
{
	return _type;
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
}
