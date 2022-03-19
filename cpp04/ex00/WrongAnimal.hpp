#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal
{
    protected:
    std::string type;

    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &num);
    ~WrongAnimal();

    WrongAnimal   &operator=(const WrongAnimal &num);

    std::string getType() const;
    void    setType(std::string type);
    void makeSound() const;

};
std::ostream	&operator<<( std::ostream &output, WrongAnimal const &fp);

#endif