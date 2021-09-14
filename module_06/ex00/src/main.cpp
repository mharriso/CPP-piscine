#include <sstream>
#include <iomanip>
#include <fstream>
#include "Converter.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		std::string s = argv[1];
		Converter conv(s);
		conv.toChar();
		conv.toInt();
		conv.toFloat();
		conv.toDouble();
		return 0;
	}
	std::cout << "The program expects one argument" << std::endl;
	return 1;
}

