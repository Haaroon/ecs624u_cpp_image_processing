#include <cmath>
#include "ex5vector2d.h"

ex5vector2d::ex5vector2d()
{
	x = 0;
	y = 0;
}

ex5vector2d::ex5vector2d(double x_, double y_)
{
	x = x_;
	y = y_;
}


int ex5vector2d::length()
{
	// 		√( x^2 + y^2 )
	return sqrt(pow(x, 2) + pow(y, 2))c;
}