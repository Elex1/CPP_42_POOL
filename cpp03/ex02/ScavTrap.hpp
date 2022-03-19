#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"


class ScavTrap:public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &num);
    ~ScavTrap();
    
    ScavTrap   &operator=(const ScavTrap &num);
    
    void guardGate();

};

#endif