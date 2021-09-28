#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class NotFoundException : public std::exception
{
	const char* what() const throw()
	{
		return "Element not found";
	}
};

template <typename T>
typename T::const_iterator	easyfind(T const &haystack, int const needle)
{
	typename T::const_iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);
	if(it == haystack.end())
		throw NotFoundException();
	return (it);
}

template <typename T>
typename T::iterator	easyfind(T &haystack, int const needle)
{
	typename T::iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);
	if(it == haystack.end())
		throw NotFoundException();
	return (it);
}

#endif
