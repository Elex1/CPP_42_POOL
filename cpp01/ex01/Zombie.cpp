#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "";
}
Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie is destroyed " << _name << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..."<<std::endl;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
    return ;
}