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
        bool    operator==(const Fixed &fp);  //The 6 comparison operators: >, <, >=, <=, == and !=
        bool    operator!=(const Fixed &fp);
        bool    operator<(const Fixed &fp);
        bool    operator>(const Fixed &fp);
        bool    operator<=(const Fixed &fp);
        bool    operator>=(const Fixed &fp);
        Fixed   operator+(const Fixed &fp);       // The 4 arithmetic operators: +, -, *, and /
        Fixed   operator-(const Fixed &fp);	
        Fixed   operator*(const Fixed &fp);
        Fixed   operator/(const Fixed &fp);
        Fixed   &operator++();                      // The 4 increment/decrement
        Fixed   &operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);
        static Fixed    &min(Fixed &fp1,Fixed &fp2);
        static const Fixed    &min(const Fixed &fp1, const Fixed &fp2);
        static Fixed    &max(Fixed &fp1,Fixed &fp2);
        static const Fixed    &max(const Fixed &fp1, const Fixed &fp2);
};
std::ostream	&operator<<( std::ostream &output, Fixed const &fp);

#endif