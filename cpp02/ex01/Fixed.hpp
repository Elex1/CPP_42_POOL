#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

class Fixed
{
    private:

    int    _fp;
    static const int _value = 8;

    public:

        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &fp);
        ~Fixed();
        int toInt(void)const;
        int getRawBits(void)const;
        void    setRawBits(int const raw);
        float   toFloat(void)const;
        Fixed   &operator=(const Fixed &fp);
};
std::ostream	&operator<<( std::ostream &output, Fixed const &fp);

#endif