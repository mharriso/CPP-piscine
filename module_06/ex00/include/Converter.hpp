#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <limits>
#include <iostream>

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
		Converter(std::string str);
		Converter(Converter const &);
		Converter &operator=(Converter const &);
		~Converter();

		class WrongArgException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error argument";
			}
		};

		class WrongConvertException : public std::exception
		{
			const char* what() const throw()
			{
				return "impossible";
			}
		};
};
#endif
