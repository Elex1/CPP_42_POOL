#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal's Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &num)
{
    type = num.type;
    
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal   &WrongAnimal::operator=(const WrongAnimal &num)
{
    type = num.type;
    return(*this);
}

void    WrongAnimal::setType(std::string _type)
{
    type = _type;
}

std::string WrongAnimal::getType() const
{
    return(type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making a sound!" << std::endl;
}

std::ostream	&operator<<( std::ostream &output, WrongAnimal const &num)
{
    output <<"-> type : " << num.getType()  << std::endl;
    return(output);
}