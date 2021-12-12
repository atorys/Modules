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
//    std::cout << "FUNC getRawBits called.\n";
    return _value;
}

void Fixed::setRawBits(const int raw) {
//    std::cout << "FUNC setRawBits called.\n";
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
//    std::cout << "[ Assignation operator '=' called. ]\n";
    this->_value = anotherFixed.getRawBits();
    std::cout << COLOR_DEF;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &anotherFixed) {
    out << anotherFixed.toFloat();
    return (out);
}

/*
 * Arithmetic operations
 */

Fixed   Fixed::operator+(const Fixed &anotherFixed) {
    Fixed   sum(*this);
    sum.setRawBits(this->getRawBits() + anotherFixed.getRawBits());
    return sum;
}

Fixed   Fixed::operator-(const Fixed &anotherFixed) {
    Fixed   difference(*this);
    difference.setRawBits(this->getRawBits() - anotherFixed.getRawBits());
    return difference;
}

Fixed   Fixed::operator*(const Fixed &anotherFixed) {
    Fixed   multiplication(*this);
    multiplication.setRawBits(this->getRawBits() * anotherFixed.getRawBits() / (1 << _bits));
    return multiplication;
}

Fixed   Fixed::operator/(const Fixed &anotherFixed) {
    Fixed   quotient(*this);
    quotient.setRawBits(this->getRawBits() * (1 << _bits) / anotherFixed.getRawBits() );
    return quotient;
}

/*
 * Comparison operations
 */
bool Fixed::operator<(const Fixed &anotherFixed) const {
    return (this->getRawBits() < anotherFixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &anotherFixed) const {
    return (this->getRawBits() <= anotherFixed.getRawBits());
}

bool Fixed::operator>(const Fixed &anotherFixed) const {
    return (this->getRawBits() > anotherFixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &anotherFixed) const {
    return (this->getRawBits() >= anotherFixed.getRawBits());
}

bool Fixed::operator==(const Fixed &anotherFixed) const {
    return (this->getRawBits() == anotherFixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &anotherFixed) const {
    return (this->getRawBits() != anotherFixed.getRawBits());
}

/*
 * Increment / decrement operators
 */

Fixed &Fixed::operator++() {
    this->_value++;
    return *this;
}

Fixed &Fixed::operator--() {
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed   temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed   temp(*this);
    --(*this);
    return temp;
}

/*
 * Min / Max overload
 */
Fixed &Fixed::max(Fixed &value1, Fixed &value2) {
    return (value1 >= value2) ? value1 : value2;
}

Fixed const &Fixed::max(const Fixed &value1, const Fixed &value2) {
    return (value1 >= value2) ? value1 : value2;
}

Fixed &Fixed::min(Fixed &value1, Fixed &value2) {
    return (value1 < value2) ? value1 : value2;
}

Fixed const &Fixed::min(const Fixed &value1, const Fixed &value2) {
    return (value1 < value2) ? value1 : value2;
}