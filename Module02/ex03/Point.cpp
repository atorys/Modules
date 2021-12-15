//
// Created by atory on 12.12.2021.
//

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
//    std::cout << "POINT: [ DEF Constructor called. ]\n";
}

Point::Point(const float &x, const float &y): _x(x), _y(y) {
//    std::cout << "POINT: [ CONST FLOATS Constructor called. ]\n";
}

Point::Point(Point const &copy): _x(copy._x), _y(copy._y) {
//    *this = copy;
//    std::cout << "POINT: [ COPY Constructor called. ]\n";
}

Point::~Point() {
//    std::cout << "POINT: [ DEF Destructor called. ]\n";
}

Fixed Point::getX() const {
    return this->_x;
}
Fixed Point::getY() const {
    return this->_y;
}

void Point::setX(const Fixed x) {
    const_cast<Fixed &>(this->_x) = x;
}

void Point::setY(const Fixed y) {
    const_cast<Fixed &>(this->_y) = y;
}

Point &Point::operator=(Point const &point) {
    this->setX(point.getX());
    this->setY(point.getY());
    return *this;
}
