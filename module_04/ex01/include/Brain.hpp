#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include "tools.hpp"

class Brain
{
	protected:
		std::string _ideas[100];

	public:
		Brain	&operator=(const Brain &);
		void	setIdeas(std::string idea);
		void	printIdeas() const;
		Brain(const Brain &);
		Brain();
		~Brain();

};
#endif
