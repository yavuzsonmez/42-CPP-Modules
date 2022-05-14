#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"
#include <stdlib.h>


class Point {

	public:
		Point	(void);
		Point	(Point const &src);
		Point	(const float x, const float y);
		~Point	(void);
		Point&	operator=(Point const &rhs);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;
};


#endif