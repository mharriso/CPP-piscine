#include "Point.hpp"

std::ostream& operator << (std::ostream &os, const Point &p)
{
	os << p.getX() << " " << p.getY();
	return os;
}

Point::Point() :
		_x(0),
		_y(0)
{

}

Point::Point(const float x, const float y) :
		_x(x),
		_y(y)
{

}

Point::Point(const Point& rPoint) :
		_x(rPoint._x),
		_y(rPoint._y)
{

}

Point::~Point()
{

}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

Point& Point::operator=(const Point&)
{
	return (*this);
}
