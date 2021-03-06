#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        Zombie (std::string name);
        void    announce(void);
        void    set_name(std::string name);
        ~Zombie ();
};

Zombie* ZombieHorde(int N, std::string name);

#endif