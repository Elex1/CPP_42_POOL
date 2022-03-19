#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal's Default constructor called" << std::endl;
}

Animal::Animal(const Animal &num)
{
    type = num.type;
    
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal   &Animal::operator=(const Animal &num)
{
    type = num.type;
    return(*this);
}

void    Animal::setType(std::string _type)
{
    type = _type;
}

std::string Animal::getType() const
{
    return(type);
}
void Animal::makeSound() const
{
	std::cout << "ANIMAL is making a sound!" << std::endl;
}

std::ostream	&operator<<( std::ostream &output, Animal const &num)
{
    output <<"-> type : " << num.getType()  << std::endl;
    return(output);
}