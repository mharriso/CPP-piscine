#include "Contact.hpp"

int Contact::setFirstName(std::string const str)
{
	_firstname = str; return (0);
}

int Contact::setLastName(std::string const str)
{
	_lastname = str; return (0);
}

int Contact::setNickname(std::string const str)
{
	_nickname = str; return (0);
}

int Contact::setPhoneNumber(std::string const str)
{
	_phonenumber = str; return (0);
}

int Contact::setDarkestSecret(std::string const str)
{
	_darkestnecret = str; return (0);
}

Contact::Contact()
{

}

Contact::~Contact()
{

}
