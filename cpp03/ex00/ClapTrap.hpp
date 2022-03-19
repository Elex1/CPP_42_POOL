#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
    private:
    std::string name;
    int Hitpoints;
    int Energypoints;
    int Attackdamage;


    public:
    ClapTrap();
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &num);
    ~ClapTrap();

    ClapTrap   &operator=(const ClapTrap &num);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getHitpoints() const;
    int getEnergypoints() const;
    int getAttackdamage() const;

};
std::ostream	&operator<<( std::ostream &output, ClapTrap const &fp);

#endif