//
// Created by atory on 11.12.2021.
//

#include "Fixed.hpp"
#include <iostream>
#define COLOR_G "\033[32m"
#define COLOR_V "\033[35m"
#define COLOR_R "\033[31m"
#define COLOR_B "\033[34m"
#define COLOR_DEF "\033[0m"

Fixed::Fixed(): _value(0) {
    std::cout << COLOR_V;
    std::cout << "[ DEF Constructor called. ]\n";
    std::cout << COLOR_DEF;
}
Fixed::~Fixed() {
    std::cout << COLOR_R;
    std::cout << "[ DEF Destructor called. ]\n";
    std::cout << COLOR_DEF;
}

Fixed   &Fixed::operator=(const Fixed &anotherFixed) {
    std::cout << COLOR_B;
    std::cout << "[ Assignation operator '=' called. ]\n";
    this->_value = anotherFixed.getRawBits();
    std::cout << COLOR_DEF;
    return *this;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << COLOR_G;
    std::cout << "[ Copy constructor called. ]\n";
    *this = copy;
    std::cout << COLOR_DEF;
}

int Fixed::getRawBits() const {
    std::cout << "FUNC getRawBits called.\n";
    return _value;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "FUNC setRawBits called.\n";
    _value = raw;
}
