//
// Created by atory on 12.12.2021.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class   Point {
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    Point(const Point &copy);
    Point(const float x, const float y);
    ~Point();

    Fixed   getX(void) const;
    Fixed   getY(void) const;
//    void    setX(Fixed const x);
//    void    setY(Fixed const y);
//
//    Point   &operator=(const Point &point);
};

#endif
