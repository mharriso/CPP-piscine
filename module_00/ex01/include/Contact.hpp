#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		void	setFirstName(std::string const str);
		void	setLastName(std::string const str);
		void	setNickname(std::string const str);
		void	setPhoneNumber(std::string const str);
		void	setDarkestSecret(std::string const str);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestnecret;

};

#endif
