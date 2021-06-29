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

std::string	Contact::getFirstName()
{
	return (_firstname);
}

std::string	Contact::getLastName()
{
	return (_lastname);
}

std::string	Contact::getNickname()
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (_phonenumber);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestnecret);
}

Contact::Contact() :
	_firstname("")
{

}

Contact::~Contact()
{

}
