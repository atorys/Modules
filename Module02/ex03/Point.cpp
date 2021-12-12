//
// Created by atory on 12.12.2021.
//

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
    std::cout << "[ DEF Constructor called. ]\n";
}

Point::Point(const float x, const float y): _x(x), _y(y) {
    std::cout << "[ CONST FLOATS Constructor called. ]\n";
}

Point::Point(const Point &copy): _x(copy._x), _y(copy._y) {
//    *this = copy;
    std::cout << "[ COPY Constructor called. ]\n";
}

Point::~Point() {
    std::cout << "[ DEF Destructor called. ]\n";
}

Fixed Point::getX() const {
    return this->_x;
}
Fixed Point::getY() const {
    return this->_y;
}

//void Point::setX(const Fixed x) {
//    this->_x.setRawBits(x.getRawBits());
//}
//
//void Point::setY(const Fixed y) {
//    this->_y = y.getRawBits();
//}
//
Point &Point::operator=(const Point &point) {
    Point const temp(point);
//    this->setX(point.getX());
//    this->setY(point.getY());
    return *temp;
}

