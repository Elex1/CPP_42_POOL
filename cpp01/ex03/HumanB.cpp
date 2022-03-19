#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *type)
{
    _name = name;
    _forb = type;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _forb->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    _forb = &Weapon;
}