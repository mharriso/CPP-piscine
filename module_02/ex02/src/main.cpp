#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed a;
	// Fixed b;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << --b << std::endl;
	// std::cout << b-- << std::endl;
	// std::cout << b << std::endl;

	float a = 10.123;
	int bit = 2048;
	int b = roundf(a * bit);
	std::cout << b << std::endl;
	std::cout << b / bit << std::endl;
	std::cout << (float)(b & (bit - 1)) / bit << std::endl;
	std::cout << (float)b / bit + (b & (bit - 1)) / bit << std::endl;
	return 0;
}
