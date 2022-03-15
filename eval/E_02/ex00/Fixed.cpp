#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractional_bits = 8;

Fixed::Fixed(void)
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
	raw_bits = other.getRawBits();
}

Fixed&	Fixed::operator=(Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw_bits = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}
