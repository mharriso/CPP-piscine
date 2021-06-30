#include "Contact.hpp"

void Contact::setFirstName(std::string const str)
{
	_firstname = str;
}

void Contact::setLastName(std::string const str)
{
	_lastname = str;
}

void Contact::setNickname(std::string const str)
{
	_nickname = str;
}

void Contact::setPhoneNumber(std::string const str)
{
	_phonenumber = str;
}

void Contact::setDarkestSecret(std::string const str)
{
	_darkestnecret = str;
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
