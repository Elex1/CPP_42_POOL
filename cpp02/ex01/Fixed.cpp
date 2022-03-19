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

