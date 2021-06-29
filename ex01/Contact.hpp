#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		int	setFirstName(std::string const str);
		int	setLastName(std::string const str);
		int	setNickname(std::string const str);
		int	setPhoneNumber(std::string const str);
		int	setDarkestSecret(std::string const str);

	//private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestnecret;



};

#endif
