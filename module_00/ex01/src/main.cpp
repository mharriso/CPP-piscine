#include <iomanip>
#include "Contact.hpp"

#define NUM_CONTACTS 8
#define GREEN   "\033[32m"
#define ULINE   "\033[21m"
#define RESET   "\033[0m"
#define CRAPPY "\U0001F47B"

void	set_input(Contact &contact, std::string type, void (Contact::*func)(std::string input))
{
	std::string input;

	std::cout << type;
	while(getline(std::cin, input))
	{
		if(!input.empty())
		{
			(contact.*func)(input);
			return ;
		}
		else
			std::cout << "This field is required" << std::endl;
		std::cout << type;
	}
	return ;
}

void	add_contact(Contact *book)
{
	static int	i;

	if(i == NUM_CONTACTS)
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

void	print_book(Contact *book)
{
	print_format("Index", "First Name", "Last Name", "Nickname");
	for(int i = 0; i < NUM_CONTACTS && !book[i].getFirstName().empty(); i++)
		print_format(std::to_string(i + 1), book[i].getFirstName(), book[i].getLastName(), book[i].getNickname());
}

void	print_contact(Contact book)
{
	std::cout << ULINE"First name"RESET": " << book.getFirstName() << std::endl;
	std::cout << ULINE"Last name"RESET": " << book.getLastName() << std::endl;
	std::cout << ULINE"Nickname"RESET": " << book.getNickname() << std::endl;
	std::cout << ULINE"Phone number"RESET": " << book.getPhoneNumber() << std::endl;
	std::cout << ULINE"Darkest secret"RESET": " << book.getDarkestSecret() << std::endl;
}

void	search_contact(Contact *book)
{
	int	index;

	print_book(book);
	std::cout << GREEN"index "CRAPPY"> "RESET;
	std::cin >> index;
	while(index < 1 || index > NUM_CONTACTS || book[index - 1].getFirstName().empty())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cerr << "Invalid index" << std::endl;
		std::cout << GREEN"index "CRAPPY"> "RESET;
		std::cin >> index;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	print_contact(book[index - 1]);
}

int	main()
{
	Contact		book[NUM_CONTACTS];
	std::string	input;

	std::cout << GREEN"crappybook "CRAPPY"> "RESET;
	while(getline(std::cin, input, '\n'))
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

