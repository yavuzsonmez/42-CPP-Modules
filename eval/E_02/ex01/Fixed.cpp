#include <iostream>
#include <ostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw_bits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	raw_bits = i << Fixed::fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
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
