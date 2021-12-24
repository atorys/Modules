//
// Created by atory on 12.12.2021.
//

#include "Point.hpp"
#include "math.h"

float calc_area_triangle(Point const a, Point const b, Point const c)
{
    float area = 0.5 * abs((float)(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                               b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                               c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())));
    return area;
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = calc_area_triangle(a, b, c);
    float areaPAB = calc_area_triangle(point, a, b);
    float areaPAC = calc_area_triangle(point, a, c);
    float areaPBC = calc_area_triangle(point, b, c);
    return (areaABC == (areaPAB + areaPAC + areaPBC));
}
