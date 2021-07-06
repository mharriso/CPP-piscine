#include "Fixed.hpp"

std::ostream& operator << (std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

Fixed::Fixed() :
		_fixpoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& Src) :
		_fixpoint(Src._fixpoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&Rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &Rhs)
	{
		_fixpoint = Rhs._fixpoint;
	}
	return (*this);
}

Fixed::Fixed(const int i) :
		_fixpoint(i << _fbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) :
		_fixpoint(roundf(f * (1 << _fbits)))
{
	std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_fixpoint / (1 <<_fbits));
}
int		Fixed::toInt( void ) const
{
	return (_fixpoint >> _fbits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixpoint = raw;
}

Fixed Fixed::operator++ (int)
{
	Fixed prev = *this;
	this->_fixpoint++;
	return (prev);
}

Fixed Fixed::operator++ ()
{
	this->_fixpoint++;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed prev = *this;
	this->_fixpoint--;
	return (prev);
}

Fixed Fixed::operator-- ()
{
	this->_fixpoint--;
	return (*this);
}

bool			Fixed::operator==(Fixed const &Rhs) const
{
	return (_fixpoint == Rhs._fixpoint);
}

bool			Fixed::operator!=(Fixed const &Rhs) const
{
	return (_fixpoint != Rhs._fixpoint);
}

bool			Fixed::operator>(Fixed const &Rhs) const
{
	return (_fixpoint > Rhs._fixpoint);
}

bool			Fixed::operator<(Fixed const &Rhs) const
{
	return (_fixpoint < Rhs._fixpoint);
}

bool			Fixed::operator>=(Fixed const &Rhs) const
{
	return (_fixpoint >= Rhs._fixpoint);
}

bool			Fixed::operator<=(Fixed const &Rhs) const
{
	return (_fixpoint <= Rhs._fixpoint);
}

