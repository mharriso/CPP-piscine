#include <iomanip>
//#include <string>
#include "Contact.hpp"

#define NUM_CONTACTS 8
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define CRAPPY "\U0001F47B"

//first name, last name, nickname, phone number,darkest secret
void	set_input(Contact &contact, std::string type, int (Contact::*func)(std::string input))
{
	std::string input;

	std::cout << type;
	while(getline(std::cin, input))
	{
		if(!(contact.*func)(input))
			return ;
		std::cout << type;
	}
	return ;
}

void	add_contact(Contact *book)
{
	static int	i;

	if(i == NUM_CONTACTS - 1)
		i = 0;
	set_input(book[i], "First name: ", &Contact::setFirstName);
	set_input(book[i], "Last name: ", &Contact::setLastName);
	set_input(book[i], "Nickname: ", &Contact::setNickname);
	set_input(book[i], "Phone number: ", &Contact::setPhoneNumber);
	set_input(book[i], "Darkest secret: ", &Contact::setDarkestSecret);
	i++;
}
std::string	form_str(std::string str)
{
	if(str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	print_format(std::string s0, std::string s1, std::string s2, std::string s3)
{
	std::cout << std::setw(10) << form_str(s0) << '|';
	std::cout << std::setw(10) << form_str(s1) << '|';
	std::cout << std::setw(10) << form_str(s2) << '|';
	std::cout << std::setw(10) << form_str(s3) << std::endl;
}

void	print_book(Contact const *book)
{
	print_format("Index", "First Name", "Last Name", "Nickname");
	for(int i = 0; i < NUM_CONTACTS && !book[i]._firstname.empty(); i++)
		print_format(std::to_string(i), book[i]._firstname, book[i]._lastname, book[i]._nickname);
}

void	search_contact(Contact *book)
{
	print_book(book);

}

int	main(int argc, char const *argv[])
{
	Contact		book[NUM_CONTACTS];
	std::string	input;

	std::cout << GREEN"crappybook "CRAPPY"> "RESET;
	while(getline(std::cin, input))
	{
		if(input == "ADD")
			add_contact(book);
		if(input == "SEARCH")
			search_contact(book);
		else if(input == "EXIT")
			break ;
		std::cout << GREEN"crappybook "CRAPPY"> "RESET;
	}
	return 0;
}

