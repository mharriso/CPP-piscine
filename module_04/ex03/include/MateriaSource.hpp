#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:

	public:
		MateriaSource &operator=(MateriaSource const&);
		MateriaSource();
		MateriaSource(MateriaSource const &);
		~MateriaSource();

};
#endif
