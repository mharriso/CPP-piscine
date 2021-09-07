#include "Converter.hpp"

Converter::Converter()
{
}

Converter::Converter(std::string str):
		_str(str)
{
}

Converter::Converter(Converter const &src):
		_str(src._str)
{
}

Converter::~Converter()
{
}

Converter &Converter::operator=(Converter const &rhs)
{
	if(this != &rhs)
		this->_str = rhs._str;
	return *this;
}

void	Converter::toChar() const
{
	double	d;
	char	c;

	std::cout << "char: ";
	try
	{
		d = stod(_str);
		if(d > CHAR_MAX || d < CHAR_MIN)
			throw Converter::WrongConvertException();
		c = static_cast<char>(d);
		if(!isprint(c))
			throw Converter::NonDisplayableException();
	}
	catch(std::invalid_argument)
	{
		std::cout  << "impossible" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cout  << e.what() << std::endl;
		return ;
	}
	std::cout << c << std::endl;
}

void	Converter::toInt() const
{
	double	d;
	int		i;

	std::cout << " int: ";
	try
	{
		d = stod(_str);
		if(d > INT_MAX || d < INT_MIN)
			throw Converter::WrongConvertException();
		i = static_cast<int>(d);
	}
	// catch(std::invalid_argument)
	// {
	// 	std::cout  << "impossible" << std::endl;
	// 	return ;
	// }
	catch(const std::exception& e)
	{
		std::cout  << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;
}
