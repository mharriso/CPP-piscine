#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	private:
		int					_fixpoint;
		static const int	_fbits;
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed();
		~Fixed();

};
#endif
