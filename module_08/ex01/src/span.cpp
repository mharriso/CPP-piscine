#include "Span.hpp"

typedef std::vector<int>::iterator	Iter;

void	Span::addNumber(int n)
{
	if (size() >= _N)
		throw (std::length_error("Error: span is full"));
	push_back(n);
}

int		Span::shortestSpan(void)
{
	Span	tmp(*this);;

	if (size() < 2)
		throw (std::length_error("Error: at least two numbers are needed"));
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*std::min_element(tmp.begin(), tmp.end()));
}

int		Span::longestSpan(void)
{
	if (size() < 2)
		throw (std::length_error("Error: at least two numbers are needed"));
	return (*std::max_element(begin(), end()) - *std::min_element(begin(), end()));
}

void	Span::print()
{
	for (Iter i = begin(); i != end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

Span::Span(unsigned int N) :
			_N(N)
{
}

Span::Span(Span const &src) :
			_N(src._N)
{
	*this = src;
}

Span::~Span(void)
{
}

Span		&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
		assign(rhs.begin(), rhs.end());
	return (*this);
}

Span::Span(void) :
		_N(0)
{
}
