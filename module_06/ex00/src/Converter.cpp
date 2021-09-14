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

	std::cout << "  char: ";
	try
	{
		if(_str == "nan" || _str == "nanf")
			throw Converter::WrongConvertException();
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
	std::cout << '\'' << c << '\'' << std::endl;
}

void	Converter::toInt() const
{
	double	d;
	int		i;

	std::cout << "   int: ";
	try
	{
		if(_str == "nan" || _str == "nanf")
			throw Converter::WrongConvertException();
		d = stod(_str);
		if(d > INT_MAX || d < INT_MIN)
			throw Converter::WrongConvertException();
		i = static_cast<int>(d);
	}
	catch(const std::exception& e)
	{
		std::cout  << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;
}

void	Converter::toFloat() const
{
	double	d;
	float	f;

	std::cout << " float: ";
	try
	{
		d = stod(_str);
		f = static_cast<float>(d);
	}
	catch(const std::exception& e)
	{
		std::cout  << "impossible" << std::endl;
		return ;
	}
	if (f == ceil(f))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << f << 'f'<< std::endl;
}

void	Converter::toDouble() const
{
	double	d;

	std::cout << "double: ";
	try
	{
		d = stod(_str);
	}
	catch(const std::exception& e)
	{
		std::cout  << "impossible" << std::endl;
		return ;
	}
	if (d == ceil(d))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << d << std::endl;
}
