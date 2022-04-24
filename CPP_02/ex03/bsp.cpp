#include "Point.hpp"
#include "Fixed.hpp"

/*
*	Check if one point is confused with another one
*/

int is_vertex(Point const a, Point const b, Point const c, Point const point) {

	if (a.getX() == point.getX() && a.getY() == point.getY())
		return (1);
	if (b.getX() == point.getX() && b.getY() == point.getY())
		return (1);
	if (c.getX() == point.getX() && c.getY() == point.getY())
		return (1);
	if (a.getX() == b.getX() && a.getY() == b.getY())
		return (1);
	if (a.getX() == c.getX() && a.getY() == c.getY())
		return (1);
	if (b.getX() == c.getX() && b.getY() == c.getY())
		return (1);
	return (0);
}

/*
*	Calculate each line equation to check it the point is on one of the edge of the triangle
*			y = mx + b
*		- calculate m first the slope of each line (m)
*		- calculate the slope of each line (b)
*		- apply the line equation to the point and if y = mx + b is true the point is one the line
*/


int is_edge(Point const a, Point const b, Point const c, Point const point) {

	float slope_ab = ((b.getY() - a.getY()) / (b.getX() - a.getX())).toFloat();
	float slope_bc = ((c.getY() - b.getY()) / (c.getX() - b.getX())).toFloat();
	float slope_ca = ((a.getY() - c.getY()) / (a.getX() - c.getX())).toFloat();

	float b_ab = a.getY().toFloat() - (slope_ab * a.getX().toFloat());
	float b_bc = b.getY().toFloat() - (slope_bc * b.getX().toFloat());
	float b_ca = c.getY().toFloat() - (slope_ca * c.getX().toFloat());

	if (point.getY().toFloat() == (slope_ab * point.getX().toFloat() + b_ab))
		return (1);
	if (point.getY().toFloat() == (slope_ca * point.getX().toFloat() + b_ca))
		return (1);
	if (point.getY().toFloat() == (slope_bc * point.getX().toFloat() + b_bc))
		return (1);
	return (0);
}

/*
*	Calculate a triangle area from 3 points
*/

float area(Point const a, Point const b, Point const c) {

	return(
		fabs(
			(a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())).toFloat() / 2));
}


/*
*	Check if a point is inside a triangle
*		The point is not considered inside if it's on one of the edge or vertex of the triangle
*		If area of the triangle = sum of the area of each subtriangle calculated with the external point
*			then the point is insie the triangle
*/

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	if (is_vertex(a, b, c, point))
		return (false);
	if (is_edge(a, b, c, point))
		return (false);

	float abc = area(a, b, c);

	float abp = area(a, b, point);
	float acp = area(a, c, point);
	float bcp = area(b, c, point);

	return (abc == abp + acp + bcp);
}