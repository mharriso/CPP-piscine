#include <iostream>
#include "whatever.hpp"
#include "tools.hpp"

int main( void )
{
	putString("<<<<<<  TEST SWAP  >>>>>>", C_MAGENTA);
	{
		putString("init: ", C_BLUE);
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		::swap( a, b );
		putString("result: ", C_BLUE);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		::swap( a, b );
		putString("result: ", C_BLUE);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		::swap( a, b );
		putString("result: ", C_BLUE);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		::swap( a, b );
		putString("result: ", C_BLUE);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl << std::endl;
	}

	putString("<<<<<<  TEST MAX  >>>>>>", C_MAGENTA);
	{
		putString("init: ", C_BLUE);
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;
	}
			putString("<<<<<<  TEST MAX  >>>>>>", C_MAGENTA);
	{
		putString("init: ", C_BLUE);
		int a = 2;
		int b = 3;
		std::cout << "int a = " << a << std::endl << "int b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		float a = 2.211;
		float b = 3.999;
		std::cout << "float a = " << a << std::endl << "float b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		char a = 'a';
		char b = 'b';
		std::cout << "char a = " << a << std::endl << "char b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	{
		putString("init: ", C_BLUE);
		std::string a = "chaine1";
		std::string b = "chaine2";
		std::cout << "string a = " << a << std::endl << "string b = " << b << std::endl;
		putString("result: ", C_BLUE);
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	}
	return 0;
}
