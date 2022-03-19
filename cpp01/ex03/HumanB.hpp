#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *_forb;
        std::string _name;
        
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon *type);
        void    attack();
        void    setWeapon(Weapon &Weapon);
        ~HumanB();
};

#endif