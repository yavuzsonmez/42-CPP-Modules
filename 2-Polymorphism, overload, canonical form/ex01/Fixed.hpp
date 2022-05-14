#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

	public:
		Fixed	(void);
		Fixed	(Fixed const &src);
		Fixed	(int const number);
		Fixed	(float const number);
		~Fixed	(void);

		Fixed&	operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& output, const Fixed& src);

#endif