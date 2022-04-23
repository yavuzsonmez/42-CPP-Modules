#include "Point.hpp"
#include "Fixed.hpp"

float area(Point const a, Point const b, Point const c) {

	return(
		fabs(
			(a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())).toFloat() / 2));
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {

	std::cout << a.getX().toFloat() << " and " << a.getY().toFloat() << std::endl;

	float abc = area(a, b, c);

	float abp = area(a, b, point);
	float acp = area(a, c, point);
	float bcp = area(b, c, point);

	std::cout << abc << abp << acp << bcp << std::endl ;
	return (abc == abp + acp + bcp);
}