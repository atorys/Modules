//
// Created by atory on 11.12.2021.
//

#include "Fixed.hpp"
#include <cmath>

#define COLOR_G "\033[32m"
#define COLOR_V "\033[35m"
#define COLOR_R "\033[31m"
#define COLOR_B "\033[34m"
#define COLOR_DEF "\033[0m"

/**
 * Default constructor:
 * def _value = 0
 */
Fixed::Fixed(): _value(0) {
    std::cout << COLOR_V;
    std::cout << "[ DEF Constructor called. ]\n";
    std::cout << COLOR_DEF;
}

/**
 * Integer constructor
 * bitwise shift by Fixed::_bit
 * @param value given integer
 */
Fixed::Fixed(const int value) {
    std::cout << COLOR_V;
    std::cout << "[ INT Constructor called. ]\n";
    _value = value << _bits;
    std::cout << COLOR_DEF;
}

/**
 * Float constructor
 * bitwise shift be Fixed::_bit of 1
 * 1 << 8 = 1|00000000 = 2^8 = 256
 * then
 * multiplication given value by 256
 * 26.5 = 11010.1 * 256 = 11010|10000000
 * now we have no mantissa but really big integer
 * @param value
 */
Fixed::Fixed(const float value) {
    std::cout << COLOR_V;
    std::cout << "[ FLOAT Constructor called. ]\n";
    _value = roundf(value * (1 << _bits));
    std::cout << COLOR_DEF;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << COLOR_G;
    std::cout << "[ Copy constructor called. ]\n";
    *this = copy;
    std::cout << COLOR_DEF;
}

Fixed::~Fixed() {
    std::cout << COLOR_R;
    std::cout << "[ DEF Destructor called. ]\n";
    std::cout << COLOR_DEF;
}

/*
 * Member functions
 */
int Fixed::getRawBits() const {
    std::cout << "FUNC getRawBits called.\n";
    return _value;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "FUNC setRawBits called.\n";
    _value = raw;
}

int Fixed::toInt() const {
    return _value >> _bits;
}

float Fixed::toFloat() const {
    return ((float)_value / (float)(1 << _bits));
}

/*
 * Overloading operations
 */

Fixed   &Fixed::operator=(const Fixed &anotherFixed) {
    std::cout << COLOR_B;
    std::cout << "[ Assignation operator '=' called. ]\n";
    this->_value = anotherFixed.getRawBits();
    std::cout << COLOR_DEF;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &anotherFixed) {
    out << anotherFixed.toFloat();
    return (out);
}
