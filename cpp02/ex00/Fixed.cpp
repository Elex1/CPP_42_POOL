#include "Fixed.hpp"

Fixed::Fixed(): _fp(0)
{
    std::cout << "Default constructor called" << std::endl;
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