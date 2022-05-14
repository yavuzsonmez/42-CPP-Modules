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

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;

		Fixed&	operator++(void) ;
		Fixed&	operator--(void) ;
		Fixed	operator++(int) ;
		Fixed	operator--(int) ;

		static const Fixed&	min(Fixed  &l, Fixed  &r);
		static const Fixed&	min(Fixed const &l, Fixed const &r);
		static const Fixed&	max(Fixed  &l, Fixed  &r);
		static const Fixed&	max(Fixed const &l, Fixed const &r);

	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& output, const Fixed& src);

#endif