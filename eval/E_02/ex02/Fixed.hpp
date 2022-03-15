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

		bool operator==(const Fixed& y) const;
		bool operator!=(const Fixed& y) const;
		bool operator>(const Fixed& y) const;
		bool operator<(const Fixed& y) const;
		bool operator>=(const Fixed& y) const;
		bool operator<=(const Fixed& y) const;

		Fixed operator+(const Fixed& y) const;
		Fixed operator-(const Fixed& y) const;
		Fixed operator*(const Fixed& y) const;
		Fixed operator/(const Fixed& y) const;

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed& min(Fixed& x, Fixed& y);
		static const Fixed& min(const Fixed& x, const Fixed& y);
		static Fixed& max(Fixed& x, Fixed& y);
		static const Fixed& max(const Fixed& x, const Fixed& y);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fx);

#endif
