#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
    private:

    int    _fp;
    static const int _value = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fp);
        int getRawBits(void) const;
        Fixed &operator=(const Fixed &fp);
        void setRawBits(int const raw);


};

#endif