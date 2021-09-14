#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include <math.h>

class Converter
{
	private:
		Converter();
		std::string _str;
	public:
		void	toChar() const;
		void	toInt() const;
		void	toFloat() const;
		void	toDouble() const;
		void	checkStr(std::string::size_type sz) const;
		Converter(std::string str);
		Converter(Converter const &);
		Converter &operator=(Converter const &);
		~Converter();

		class WrongConvertException : public std::exception
		{
			const char* what() const throw()
			{
				return "impossible";
			}
		};

		class NonDisplayableException : public std::exception
		{
			const char* what() const throw()
			{
				return "Non displayable";
			}
		};
};
#endif
