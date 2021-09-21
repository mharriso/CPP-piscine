#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T 				*_array;
		unsigned int	_n;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const&);
		Array	&operator=(Array const&);
		T		&operator[](unsigned int i) const;
		~Array();
		unsigned int	size() const;
		class OutOfLimitsException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error: index out of limits";
			}
		};
};

#endif
