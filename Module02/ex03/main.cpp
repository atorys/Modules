//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "Point.hpp"

int main( void ) {
    Point   a;
    Point   b(2.3, 4.6);
    Point   c(a);

    Point   const A1(4.6, -1.02);
    Point   const A2(6.3, 4.38);
    Point   const A3(12.14, 2.58);

    Point   const P(7.78, 2.38);

    if (bsp(A1, A2, A3, P))
        std::cout << "point is inside\n";
    else
        std::cout << "point is outside\n";
    return 0;
}
