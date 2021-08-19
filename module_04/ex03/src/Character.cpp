#include "Character.hpp"


Character::Character(std::string name):_name(name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
}

Character::Character(Character const& src):
		_name(src._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i])
			_materias[i] = src._materias[i];
		else
			_materias[i] = 0;
	}
}

Character&	Character::operator=(Character const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i])
				_materias[i] = rhs._materias[i];
			else
				_materias[i] = 0;
		}
	}
	return *this;
}

Character::~Character()
{
}

std::string const&	Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!_materias[i])
		{
			_materias[i] = m;
			break;
		}
}

void				Character::unequip(int i)
{
	if (i >= 0 && i < 4 && _materias[i])
		_materias[i] = 0;
}

void				Character::use(int i, ICharacter& target)
{
	if (i >= 0 && i < 4 && _materias[i])
		_materias[i]->use(target);
}
