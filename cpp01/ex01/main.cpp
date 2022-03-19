#include "Zombie.hpp"

int main()
{
    Zombie  *test;

    test = ZombieHorde(5, "Slaam");
    int i = 0;
    while(i < 5)
    {
        test[i].announce();
        i++;
    }
    delete [] test;
}