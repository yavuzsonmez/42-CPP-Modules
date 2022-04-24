#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	{
		bool inside;

		Point a(4, 1);
		Point b(7, 6);
		Point c(12, 1);
		Point point(11, 1.1); //check with 1.0 to verify edge

		inside = bsp(a, b, c, point);

		if (inside)
			std::cout << "The point is in the triangle" << std::endl;
		else
			std::cout << "The point is not in the triangle" << std::endl;
	}
	return (0);
}
