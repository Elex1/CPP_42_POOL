#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"


class Dog:public Animal
{
    public:
    Dog();
    Dog(const Dog &num);
    ~Dog();
    
    Dog   &operator=(const Dog &num);

    void makeSound() const;    
  

};

#endif