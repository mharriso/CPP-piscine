#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	public:
		void		learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const& type);
		MateriaSource &operator=(MateriaSource const&);
		MateriaSource();
		MateriaSource(MateriaSource const &);
		~MateriaSource();

};
#endif
