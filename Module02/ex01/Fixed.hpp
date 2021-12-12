//
// Created by atory on 11.12.2021.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    int                 _value;
    static const int    _bits = 8; /* Fractional bits */
public:
    Fixed();                    /* Default constructor */
    Fixed(const int value);     /* Integer constructor */
    Fixed(const float value);   /* Float constructor */
    Fixed(const Fixed &copy);   /* Copy constructor */
    ~ Fixed();                  /* Destructor */

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    int     toInt(void) const;
    float   toFloat(void) const;

    Fixed           &operator=(const Fixed &anotherFixed);
};

std::ostream    &operator<<(std::ostream &out, const Fixed &anotherFixed);

#endif
