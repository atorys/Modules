//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "Point.hpp"

int main( void ) {
    Point   a;
    Point   b(2.3, 4.6);
    Point   c(a);

    Point   const A1(10, 0);
    Point   const A2(20, 5);
    Point   const A3(4, 8);

    Point   const P(6.5, 5);

    if (bsp(A1, A2, A3, P))
        std::cout << "point is inside\n";
    else
        std::cout << "point is outside\n";
    return 0;
}
