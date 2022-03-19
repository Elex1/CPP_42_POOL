#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"


class Cat:public Animal
{
    public:
    Cat();
    Cat(const Cat &num);
    ~Cat();
    
    Cat   &operator=(const Cat &num);
    void makeSound() const;

};

#endif