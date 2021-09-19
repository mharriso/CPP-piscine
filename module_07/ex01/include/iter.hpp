#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t n, void f(T &elem))
{
	for (size_t i = 0; i < n; i++)
		f(array[i]);
}

template <typename T>
void	inc(T &elem)
{
	elem++;
}

template <typename T>
void	multiply21(T &elem)
{
	elem *= 21;
}

template <typename T>
void	print_array(T *array, size_t n)
{
	for (size_t i = 0; i < n; i++)
		std::cout << array[i] << ' ';
	std::cout << std::endl;
}

#endif
