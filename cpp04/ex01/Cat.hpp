#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat:public Animal
{
    private:
    Brain* brain;
    public:
    Cat();
    Cat(const Cat &num);
    ~Cat();
    
    Cat   &operator=(const Cat &num);
    void makeSound() const;
    std::string getBrain(int index) const;
    
};

#endif