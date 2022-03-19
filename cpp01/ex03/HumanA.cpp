#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _fora(type)
{
    _name = name;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << _fora.getType() << std::endl;
}
