#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
    name = _name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie is destroyed " << name << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}
