#include <iostream>
#include <ostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	raw_bits = 0;
}

Fixed::~Fixed()
{
	//
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	raw_bits = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}

Fixed::Fixed(const int i)
{
	raw_bits = i << Fixed::fractional_bits;
}

Fixed::Fixed(const float f)
{
	raw_bits = roundf(f * (1 << Fixed::fractional_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)raw_bits / (float)(1 << Fixed::fractional_bits));
}

int Fixed::toInt(void) const
{
	return (raw_bits >> Fixed::fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx)
{
	os << fx.toFloat();
	return (os);
}

bool Fixed::operator==(const Fixed& y) const
{
	if ((this->getRawBits() ^ y.getRawBits()) == 0)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& y) const
{
	if (*this == y)
		return (false);
	return (true);
}

bool Fixed::operator>(const Fixed& y) const
{
	if (this->getRawBits() - y.getRawBits() > 0)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& y) const
{
	if (this->getRawBits() - y.getRawBits() < 0)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& y) const
{
	if (this->getRawBits() - y.getRawBits() >= 0)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& y) const
{
	if (this->getRawBits() - y.getRawBits() <= 0)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& y) const
{
	return (Fixed(this->toFloat() + y.toFloat()));
}

Fixed Fixed::operator-(const Fixed& y) const
{
	return (Fixed(this->toFloat() - y.toFloat()));
}

Fixed Fixed::operator*(const Fixed& y) const
{
	return (Fixed(this->toFloat() * y.toFloat()));
}

Fixed Fixed::operator/(const Fixed& y) const
{
	return (Fixed(this->toFloat() / y.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->raw_bits += 1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->raw_bits -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}
