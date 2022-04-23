#include "Fixed.hpp"

Fixed::Fixed(void):_value(0) {
	std::cout << "Default constructor called" << std::endl ;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl ;
	*this = src;
}

Fixed::Fixed(int const number) {
	std::cout << "Int constructor called" << std::endl ;
	_value = number << Fixed::_fractionalBits ;
}

Fixed::Fixed(float const number) {
	std::cout << "Float constructor called" << std::endl ;
	_value = roundf(number * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl ;
	return (_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl ;
	_value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)_value / (float)(1 << Fixed::_fractionalBits));
}

int Fixed::toInt(void) const {
	return (_value >> Fixed::_fractionalBits);
}

std::ostream& operator<<(std::ostream& output, const Fixed& src)
{
	output << src.toFloat();
	return (output);
}