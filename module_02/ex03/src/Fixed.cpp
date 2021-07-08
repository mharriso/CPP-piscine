#include "Fixed.hpp"

std::ostream& operator << (std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

Fixed::Fixed() :
		_fixpoint(0)
{
}

Fixed::Fixed(const Fixed& Src) :
		_fixpoint(Src._fixpoint)
{
}

Fixed& Fixed::operator=(const Fixed&Rhs)
{
	if(this != &Rhs)
	{
		_fixpoint = Rhs._fixpoint;
	}
	return (*this);
}

Fixed::Fixed(const int i) :
		_fixpoint(i << _fbits)
{
}

Fixed::Fixed(const float f) :
		_fixpoint(roundf(f * (1 << _fbits)))
{
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

Fixed			Fixed::operator+(Fixed const &Rhs) const
{
	Fixed	tmp;

	tmp._fixpoint = _fixpoint + Rhs._fixpoint;
	return (tmp);
}

Fixed			Fixed::operator-(Fixed const &Rhs) const
{
	Fixed	tmp;

	tmp._fixpoint = _fixpoint - Rhs._fixpoint;
	return (tmp);
}

Fixed			Fixed::operator*(Fixed const &Rhs) const
{
	if(Rhs._fixpoint == 0)
		return (Fixed(0));
	int n = 1 << _fbits;
	signed int res = _fixpoint * Rhs._fixpoint;
	if(res / Rhs._fixpoint != _fixpoint)
	{
		signed int i1 = _fixpoint / n;
		signed int i2 = Rhs._fixpoint / n;
		signed int f1 = _fixpoint & (n - 1) ;
		signed int f2 = _fixpoint & (n - 1) ;
		return Fixed((float)(i1*i2*n + f1*f2/n + i1*f2 + i2*f1)/n);
	}
	return Fixed((float)res / (n * n));
}

Fixed			Fixed::operator/(Fixed const &Rhs) const
{
	return (Fixed(toFloat() / Rhs.toFloat()));
}

Fixed			&Fixed::min(Fixed &Lhs, Fixed &Rhs)
{
	return ((Lhs < Rhs) ? Lhs : Rhs);
}

Fixed const		&Fixed::min(Fixed const &Lhs, Fixed const &Rhs)
{
	return ((Lhs < Rhs) ? Lhs : Rhs);
}

Fixed			&Fixed::max(Fixed &Lhs, Fixed &Rhs)
{
	return ((Lhs > Rhs) ? Lhs : Rhs);
}

Fixed const		&Fixed::max(Fixed const &Lhs, Fixed const &Rhs)
{
	return ((Lhs > Rhs) ? Lhs : Rhs);
}
