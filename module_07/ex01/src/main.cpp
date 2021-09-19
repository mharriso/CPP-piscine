#include <iostream>
#include "iter.hpp"
#include "tools.hpp"

int main()
{
	putString("<<<<<<  TEST INT  >>>>>>", C_MAGENTA);
	{
		putString("init int array: ", C_BLUE);
		int array[] = { 0, 1, 2, 3, 4, 5};
		print_array(array, 6);
		putString("inc result: ", C_BLUE);
		iter(array, 6, inc);
		print_array(array, 6);
		putString("multiply21 result: ", C_BLUE);
		iter(array, 6, multiply21);
		print_array(array, 6);

	}
	putString("<<<<<<  TEST FLOAT  >>>>>>", C_MAGENTA);
	{
		putString("init float array: ", C_BLUE);
		float array [] = {1.1, 2.2, 3.3};
		print_array(array, 3);
		putString("inc result: ", C_BLUE);
		iter(array, 3, inc);
		print_array(array, 3);
		putString("multiply21 result: ", C_BLUE);
		iter(array, 3, multiply21);
		print_array(array, 3);

	}
	putString("<<<<<<  TEST CHAR  >>>>>>", C_MAGENTA);
	{
		putString("init char array: ", C_BLUE);
		char array [] = {'A', 'B', 'C'};
		print_array(array, 3);
		putString("inc result: ", C_BLUE);
		iter(array, 3, inc);
		print_array(array, 3);
		putString("multiply21 result: ", C_BLUE);
		iter(array, 3, multiply21);
		print_array(array, 3);
	}
	return 0;
}


