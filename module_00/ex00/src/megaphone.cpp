#include <iostream>
#include <cctype>

int main(int argc, char const **argv)
{
	if(argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; argv[i][j]; j++)
			std::cout << (char)toupper(argv[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}

