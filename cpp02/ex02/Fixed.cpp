#include "Fixed.hpp"

Fixed::Fixed(): _fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// A constructor that takes a constant integer as a parameter.
Fixed::Fixed(const int i)
{
    std::cout << "int constructor called" << std::endl;
    this->_fp = i << _value;
}

//A constructor that takes a constant floating-point number as a parameter.

Fixed::Fixed(const float i)
{
    std::cout << "float constructor called" << std::endl;
    _fp = roundf((float) i * (1 << _value));
}

Fixed::Fixed(const Fixed &fp)
{
    std::cout << "Copy constructor called" << std::endl;
   *this = fp;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &fp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fp = fp.getRawBits();
    return(*this);
}

//An overload of the insertion («)

std::ostream	&operator<<( std::ostream &output, Fixed const &fp)
{
    output << fp.toFloat() << std::endl;
    return(output);
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fp);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fp = raw;
}

// function that converts the fixed-point value to a floating-point value.

float   Fixed::toFloat(void)const
{
    return(_fp / (float)(1 << _value));
}

//function that converts the fixed-point value to an integer value.

int Fixed::toInt(void)const
{
    return((int)_fp >> _value);
}


//The 6 comparison operators: >, <, >=, <=, == and != 

bool    Fixed::operator==(const Fixed &fp)
{
    return(this->_fp = fp._fp);
}

bool    Fixed::operator!=(const Fixed &fp)
{
    return(this->_fp != fp._fp);
}

bool    Fixed::operator<(const Fixed &fp)
{
    return(this->_fp < fp._fp);
}

bool    Fixed::operator>(const Fixed &fp)
{
    return(this->_fp > fp._fp);
}

bool    Fixed::operator<=(const Fixed &fp)
{
    return(this->_fp <= fp._fp);
}

bool    Fixed::operator>=(const Fixed &fp)
{
    return(this->_fp >= fp._fp);
}

// The 4 arithmetic operators: +, -, *, and /
Fixed   Fixed::operator+(const Fixed &fp)
{
    return(this->toFloat() + fp.toFloat());
}

Fixed   Fixed::operator-(const Fixed &fp)
{
    return(this->toFloat() - fp.toFloat());
}

Fixed   Fixed::operator*(const Fixed &fp)
{
    return(this->toFloat() * fp.toFloat());
}

Fixed   Fixed::operator/(const Fixed &fp)
{
    return(this->toFloat() / fp.toFloat());
}

// The 4 increment/decrement

Fixed   &Fixed::operator++()
{
    this->_fp++;
    return(*this);
}

Fixed   &Fixed::operator--()
{
    this->_fp--;
    return(*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed a = *this;
    ++(*this);
    return(a);
}

Fixed   Fixed::operator--(int)
{
    Fixed a = *this;
    --(*this);
    return(a);
}

//min , Min, max, Max

Fixed & Fixed::min(Fixed &fp1,Fixed &fp2)
{
    return (fp1.getRawBits() > fp2.getRawBits() ? fp2: fp1);
}
 
const Fixed   & Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
    return fp1.getRawBits() > fp2.getRawBits() ? fp2: fp1;
}

Fixed    & Fixed::max(Fixed &fp1,Fixed &fp2)
{
    return (fp1.getRawBits() < fp2.getRawBits() ? fp2: fp1);
}

const Fixed    & Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
    return (fp1.getRawBits() < fp2.getRawBits() ? fp2: fp1);
}
