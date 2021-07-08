#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Fixed getX() const;
		Fixed getY() const;
		Point&	operator=(const Point&);
		Point(const Point&);
		Point(const float x, const float y);
		Point();
		~Point();
};

std::ostream& operator << (std::ostream &os, const Point &p);

#endif
