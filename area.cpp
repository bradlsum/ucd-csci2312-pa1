#include "Point.h"
// Finds the area of a triange
double computeArea(const Point &a, const Point &b, const Point &c) {

	double area, s, a1 = a.distanceTo(c), b1 = a.distanceTo(b), c1 = b.distanceTo(c);

	s = (a1 + b1 + c1) / 2;

	area = sqrt(s*(s - a1)*(s - b1)*(s - c1));

	return area;
};