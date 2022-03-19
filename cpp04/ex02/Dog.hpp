#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
    private:
        Brain*  brain;
    public:
    Dog();
    Dog(const Dog &num);
    ~Dog();
    
    Dog   &operator=(const Dog &num);

    void makeSound() const;    
  std::string getBrain(int index) const;

};

#endif