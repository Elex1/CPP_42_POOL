#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
    protected:
        std::string type;

    public:
    Animal();
    Animal(const Animal &num);
    ~Animal();

    Animal   &operator=(const Animal &num);

    std::string getType() const;
    void    setType(std::string type);
    virtual void makeSound() const;

};
std::ostream	&operator<<( std::ostream &output, Animal const &fp);

#endif