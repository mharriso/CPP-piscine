#include <iostream>
#include "Array.hpp"
#include "tools.hpp"

#define MAX_VAL 221

int		test_int()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	putString("<<<<<<<<< INIT INT ARRAY >>>>>>>>>", C_BLUE);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
		std::cout << value << ' ';
    }
	std::cout << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	putString("<< Attempt to access an element with a invalid index >>", C_BLUE);
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	return 0;
}

int		test_char()
{
	Array<char> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	putString("<<<<<<<<< INIT CHAR ARRAY >>>>>>>>>", C_BLUE);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const char value = static_cast<char>(33 + rand() % 94);
        numbers[i] = value;
        mirror[i] = value;
		std::cout << value << ' ';
    }
	std::cout << std::endl;
    //SCOPE
    {
        Array<char> tmp = numbers;
        Array<char> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	putString("<< Attempt to access an element with a invalid index >>", C_BLUE);
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	return 0;
}

int main(int, char**)
{
	srand(time(NULL));
	test_int();
	test_char();
}
