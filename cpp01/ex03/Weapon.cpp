#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string name)
{
    _type = name;
}

const std::string &Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{

}