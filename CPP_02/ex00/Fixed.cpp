#include "Fixed.hpp"

Fixed::Fixed(void):_value(0) {
	std::cout << "Default constructor called" << std::endl ;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl ;
}

int Fixed::getRawBits(void) const {

}

void Fixed::setRawBits(int const raw) {

}