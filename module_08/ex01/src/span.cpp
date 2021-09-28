#include "span.hpp"

typedef std::vector<int>::iterator	Iter;

void	Span::addNumber(int n)
{
	if (size() >= _N)
		throw (std::length_error("Error: span is full"));
	push_back(n);
}

int		Span::shortestSpan(void)
{
	Span	sorted(*this);
	Span	result(size());

	if (size() < 2)
		throw (std::length_error("Error: at least two numbers are needed"));
	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), result);
	return (*std::min_element(result.begin(), result.end()));
}

int		Span::longestSpan(void)
{
	if (size() < 2)
		throw (std::length_error("Error: at least two numbers are needed"));
	return (*std::max_element(begin(), end()) - *std::min_element(begin(), end()));
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
	{
		if (rhs.size() > _N)
			throw (std::length_error("Error: span is full"));
		assign(rhs.begin(), rhs.end());
	}
	return (*this);
}

			Span::Span(void) :
			_N(0)
{
}
