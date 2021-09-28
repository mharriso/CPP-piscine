#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
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
		template <typename InputIterator>
		void	addRange(InputIterator first, InputIterator last);
		Span(unsigned int N);
		Span	&operator=(Span const &);
		Span(Span const &);
		~Span();
	private:
		unsigned int const _N;
		Span();
};

#endif
