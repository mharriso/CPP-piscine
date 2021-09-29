#include <iostream>
#include "Span.hpp"
#include "tools.hpp"
#include <time.h>

#define MAX_VAL 10000

int main()
{
	srand(time(NULL));
	putString("<<<<  INIT SPAN  >>>>", C_BLUE);
	Span	span(6);
	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(3);
	span.addNumber(4);
	span.addNumber(5);
	span.addNumber(10);
	span.print();
	putString("Longest span is ...", C_YELLOW);
	std::cout << span.longestSpan() << std::endl;
	putString("Shortest span is ...", C_YELLOW);
	std::cout << span.shortestSpan() << std::endl;
	putString("<<<<  INIT SPAN (10000 random numbers) >>>>", C_BLUE);
	Span	random_span(MAX_VAL);
	int		array[MAX_VAL];
	for (size_t i = 0; i < MAX_VAL; i++)
		array[i] = rand();
	random_span.addRange(array, array + MAX_VAL);
	putString("Longest span is ...", C_YELLOW);
	std::cout << random_span.longestSpan() << std::endl;
	putString("Shortest span is ...", C_YELLOW);
	std::cout << random_span.shortestSpan() << std::endl;
	putString("Try to add more numbers ...", C_BLUE);
	try
	{
		span.addNumber(1);
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}

	Span	one_span(1);
	putString("Try to add the range bigger than N ...", C_BLUE);
	try
	{
		one_span.addRange(array, array + MAX_VAL);
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}

	putString("Try to find impossible span ...", C_BLUE);
	try
	{
		std::cout << one_span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		putError(e.what());
	}
	return 0;
}
