#include "Point.h"

// Default constructor
Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

// 3 var constructor
Point::Point(double nx, double ny, double nz)
{
	x = nx;
	y = ny;
	z = nz;
}

// Set varriable X
void Point::setX(double newX)
{
	x = newX;
}

// Set var y
void Point::setY(double newY)
{
	y = newY;
}

// Set var Z
void Point::setZ(double newZ)
{
	z = newZ;
}

// Acesses var X
double Point::getX() const
{
	return x;
}

// Acesses var Y
double Point::getY() const
{
	return y;
}

// Acesses var Z
double Point::getZ() const
{
	return z;
}

// Finds the distance between two points
double Point::distanceTo(const Point & x1) const
{
	double distance, xd, yd, zd;
	xd = x1.getX() - x;
	yd = x1.getY() - y;
	zd = x1.getZ() - z;

	distance = sqrt(xd*xd + yd*yd + zd*zd);

	return distance;
}
