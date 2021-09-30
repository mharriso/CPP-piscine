#include <iostream>
#include <vector>
#include "tools.hpp"
#include "MutantStack.hpp"

int main()
{
	putString("<< INIT STACK >>", C_BLUE);
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	putString("< PRINT STACK >", C_BLUE);
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "size: " << mstack.size() << std::endl;
	putString("COPY MSTACK TO CONST_STACK", C_BLUE);
	MutantStack<int> const const_mstack = mstack;
	MutantStack<int>::const_iterator cit =  const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();
	++it;
	--it;
	++cit;
	--cit;
	putString("< PRINT CONST STACK >", C_BLUE);
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::cout << "size: " << const_mstack.size() << std::endl;
	std::stack<int> s(mstack);
	return 0;
}
