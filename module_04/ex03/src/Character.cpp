#include "Character.hpp"


Character::Character(std::string name):
		_name(name)
{
	std::cout << name << " is born!" << std::endl;
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
	std::cout << _name << " is dead(" << std::endl;
}

void				Character::use(int i, ICharacter& target)
{
	if (i >= 0 && i < 4 && _materias[i])
		_materias[i]->use(target);
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
			std::cout << "Equip " << _name << " by " << m->getType() << std::endl;
			break;
		}
}

void				Character::unequip(int i)
{
	if (i >= 0 && i < 4 && _materias[i])
	{
		std::cout << "Unequip " << _name << " " << _materias[i]->getType() << std::endl;
		_materias[i] = 0;
	}
}


