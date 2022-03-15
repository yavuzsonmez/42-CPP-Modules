#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <ostream>

class Fixed
{
	private:
		int	raw_bits;
		static const int	fractional_bits;

	public:
		// ex00
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		int	getRawBits(void) const;
		void setRawBits(int const raw);

		// ex01
		Fixed(const int i);
		Fixed(const float f);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fx);

#endif
