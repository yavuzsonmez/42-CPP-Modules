#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	{
		bool inside;

		Point a(8.1, 3.2);
		Point b(5.4, 2.1);
		Point c(4.2, 1.1);
		Point point(7.1, 3.2);

		std::cout << a.getX().toFloat() << " and " << a.getY().toFloat() << std::endl;

//std::cout << << std::endl;
		a.setX(b.getX());

		std::cout << a.getX().toFloat() << " and " << a.getY().toFloat() << std::endl;

		//inside = bsp(a, b, c, point);
		//if (inside)
		//	std::cout << "The point is in the triangle" << std::endl;
		//else
		//	std::cout << "The point is not in the triangle" << std::endl;
	}
	return (0);
}
