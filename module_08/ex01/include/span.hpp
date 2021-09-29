#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <limits>
# include <algorithm>
# include <numeric>
# include <stdexcept>

class Span: private std::vector<int>
{
	public:
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNumber(int n);
		void	print();
		template <typename InputIterator>
		void	addRange(InputIterator b, InputIterator e);
		Span	&operator=(Span const &);
		Span(unsigned int N);
		Span(Span const &);
		~Span();

	private:
		unsigned int const _N;
		Span();
};

template <typename InputIterator>
void	Span::addRange(InputIterator b, InputIterator e)
{
	if (size() + std::distance(b, e) > _N)
		throw (std::length_error("Error: range is too big"));
	insert(end(), b, e);
}

#endif
