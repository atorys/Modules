//
// Created by atory on 11.12.2021.
//

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    int                 _value;
    static const int    _bits = 8; /* Fractional bits */
public:
    Fixed();                    /* Default constructor */
    Fixed(const Fixed &copy);   /* Copy constructor */
    ~ Fixed();                  /* Destructor */

    Fixed   &operator=(const Fixed &anotherFixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif
