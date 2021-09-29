#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin() {return std::begin(std::stack<T>::c);}
		iterator	end() {return std::end(std::stack<T>::c);}
		MutantStack() {};
		~MutantStack() {};
};

#endif
