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

    /*
     * Arithmetic operators
     */
    Fixed   &operator=(const Fixed &anotherFixed);
    Fixed   operator+(const Fixed &anotherFixed);
    Fixed   operator-(const Fixed &anotherFixed);
    Fixed   operator*(const Fixed &anotherFixed);
    Fixed   operator/(const Fixed &anotherFixed);
    /*
     * Comparison operators
     */
    bool    operator>(const Fixed &anotherFixed) const;
    bool    operator>=(const Fixed &anotherFixed) const;
    bool    operator<(const Fixed &anotherFixed) const;
    bool    operator<=(const Fixed &anotherFixed) const;
    bool    operator==(const Fixed &anotherFixed) const;
    bool    operator!=(const Fixed &anotherFixed) const;
    /*
     * Increment / decrement operators
     */
    Fixed   &operator++();
    Fixed   &operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);
    /*
     * Min / max overload
     */
    static Fixed   &min(Fixed &value1, Fixed &value2);
    static Fixed   &max(Fixed &value1, Fixed &value2);

    static Fixed const  &min(const Fixed &value1, const Fixed &value2);
    static Fixed const  &max(const Fixed &value1, const Fixed &value2);
};

std::ostream    &operator<<(std::ostream &out, const Fixed &anotherFixed);

#endif
