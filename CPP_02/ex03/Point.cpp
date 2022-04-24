#include "Point.hpp"

Point::Point(void) {

}

Point::Point(Point const &src)
{
	*this = src;
}

Point::Point(const float x, const float y):_x(x), _y(y) {
}

Point::~Point(void) {
}

Point& Point::operator=(Point const &rhs) {
	const_cast<Fixed&>(_x) = rhs._x;
	const_cast<Fixed&>(_y) = rhs._y;
	return (*this);
}

Fixed Point::getX(void) const {
	return (_x);
}

Fixed Point::getY(void) const {
	return (_y);
}
