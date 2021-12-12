//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 ); /* 10 = 1010 << 8 = 1010|00000000 = 2^11 + 2^9 = 2560 */
    Fixed const c( 42.42f ); /* 42.42f = 101010.0112 * (1 << 8) = 101010.0112 * 1|00000000 = 101010|10000000 = 2^5 + 2^3 + 2^1 + 2^-1 = 42.5 */
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
