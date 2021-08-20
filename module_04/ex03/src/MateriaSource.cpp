#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	for(int i = 0; i < 4; i++)
	{
		if (other._materias[i])
			_materias[i] = other._materias[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other._materias[i])
				_materias[i] = other._materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = materia;
			std::cout << "Learn " << materia->getType() << " materia " << std::endl;
			return ;
		}
	}
	if (i == 4)
		delete materia;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
		{
			AMateria	*m = _materias[i];
			std::cout << "Create " << m->getType() << " materia " << std::endl;
			return m;
		}
	}
	return NULL;
}
