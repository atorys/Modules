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

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed s1((a.getX() - point.getX()) * (b.getY() - a.getY() - b.getX() + a.getX()) * (a.getY() - point.getY()));
    Fixed s2((b.getX() - point.getX()) * (c.getY() - b.getY() - c.getX() + b.getX()) * (b.getY() - point.getY()));
    Fixed s3((c.getX() - point.getX()) * (a.getY() - c.getY() - a.getX() + c.getX()) * (c.getY() - point.getY()));
    return ((s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0));
}


