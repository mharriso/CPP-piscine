#include <iostream>
#include "span.hpp"

int main()
{
	Span span(6);
	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(3);
	span.addNumber(4);
	span.addNumber(5);
	span.addNumber(10);
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
	return 0;
}
