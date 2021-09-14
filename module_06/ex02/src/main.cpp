#include <iostream>
#include "tools.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	Base* b;

	int i = rand() % 3;
	if (i == 0)
		return b = new A;
	if (i == 1)
		return b = new B;
	if (i == 2)
		return b = new C;
	return 0;
}

void identify_ptr(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if(a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if(b)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if(c)
		std::cout << "C" << std::endl;
}

void identify_ref(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

void test(int n)
{
	Base *b;

	std::cout << C_YELLOW << " < TEST " << n << " >" << std::endl;
	b = generate();
	putString("identify the pointer to the random class:", C_MAGENTA);
	std::cout << "real type is ";
	identify_ptr(b);
	putString("identify the reference to the random class:", C_MAGENTA);
	std::cout << "real type is ";
	identify_ref(*b);
	delete b;
}

int main()
{
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
		test(i);
	return 0;
}

