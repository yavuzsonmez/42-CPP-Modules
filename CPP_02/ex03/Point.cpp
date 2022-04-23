#include "Point.hpp"

Point::Point(void) {

}

Point::Point(Point const &src)//:_x(src._x), _y(src._y)
{
	*this = src; //This doesnt work
}

Point::Point(const float x, const float y):_x(x), _y(y) {
}

Point::~Point(void) {
}

Point& Point::operator=(Point const &rhs) {
	setX(rhs._x);
	setY(rhs._y);
	return (*this);
}

Fixed Point::getX(void) const {
	return (_x);
}

Fixed Point::getY(void) const {
	return (_y);
}

void	Point::setX(Fixed src) {
	(Fixed)_x = src;
}

void	Point::setY(Fixed src) {
	(Fixed)_y = src;
}


