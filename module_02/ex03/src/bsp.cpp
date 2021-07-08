#include "func.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed res1;
	Fixed res2(0);
	Fixed res3(0);

	res1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	res2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	res3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

	if(res1 < 0 && res2 < 0 && res3 < 0)
		return (true);
	if(res1 > 0 && res2 > 0 && res3 > 0)
		return (true);
	return (false);
}
