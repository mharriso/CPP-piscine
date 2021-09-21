#include "Array.hpp"

template<typename T>
Array<T>::Array():
		_array(NULL),
		_n(0)
{}

template<typename T>
Array<T>::Array(unsigned int n):
		_n(n)
{
	_array = new T[n]();
}

template<typename T>
Array<T>::Array(Array<T> const& src)
{
	_array = new T[src.size()];
	_n = src.size();
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = src._array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const& rhs)
{
	if (this != &rhs)
	{
		if (_array)
			delete[] _array;
		_array = new T[rhs.size()];
		_n = rhs.size();
		for (unsigned int i = 0; i < _n; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
T		&Array<T>::operator[](unsigned int i) const
{
	if (i >= _n  || !_array || i < 0)
		throw OutOfLimitsException();
	return _array[i];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return _n;
}

template<typename T>
Array<T>::~Array()
{
	if (_n > 0)
	delete[] _array;
}
