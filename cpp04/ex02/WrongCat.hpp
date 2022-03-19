#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string.h>
#include "WrongAnimal.hpp"


class WrongCat:public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat &num);
    ~WrongCat();
    
    WrongCat   &operator=(const WrongCat &num);
    void makeSound() const;

};

#endif