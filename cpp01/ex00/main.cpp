#include "Zombie.hpp"

int main()
{
    Zombie a("Zombie  stack");
    a.announce();
    Zombie* b = newZombie("newZombie heap");
    b->announce();
    delete b;
    randomChump("randomChump ");
    return(0);
}