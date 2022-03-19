#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon();
        Weapon(std::string name);
        void    setType(std::string name);
        const std::string    &getType();
        ~Weapon();
};

#endif