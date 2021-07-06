#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_fixpoint;
		static const int	_fbits = 8;
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed&	operator=(const Fixed&);
		Fixed(const Fixed&);
		Fixed(const int i);
		Fixed(const float f);
		Fixed();
		~Fixed();
};

std::ostream& operator << (std::ostream &os, const Fixed &f);

#endif
