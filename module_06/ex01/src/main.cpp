#include <iostream>

#define C_RED     "\e[1;31m"
#define C_GREEN   "\e[1;32m"
#define C_YELLOW  "\e[1;33m"
#define C_BLUE    "\e[1;34m"
#define C_MAGENTA "\e[1;35m"
#define C_CYAN    "\e[1;36m"
#define C_RESET   "\e[0m"

struct Data
{
	std::string	type;
	int			max_age;
	std::string	fav_food;
};

void	print(Data data)
{
	std::cout << "TYPE: " << data.type << std::endl;
	std::cout << "MAX AGE: " << data.max_age << " years" << std::endl;
	std::cout << "FAVOURITE FOOD: " << data.fav_food << std::endl;
}

uintptr_t	serialize(Data* ptr)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
	return address;
}

Data*	deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int main()
{
	Data		alpaca;
	uintptr_t	address;
	Data*		ptr;

	std::cout << C_BLUE << "< INIT DATA >" << C_RESET << std::endl;
	alpaca.type = "Alpaca";
	alpaca.max_age = 15;
	alpaca.fav_food = "fruits";
	print(alpaca);
	std::cout << std::endl << C_YELLOW << "SERIALIZE -> " << C_RESET << std::endl;
	address = serialize(&alpaca);
	std::cout << address << std::endl;
	std::cout << std::endl << C_YELLOW << "DESERIALIZE -> " << C_RESET << std::endl;
	ptr = deserialize(address);
	print(*ptr);
}
