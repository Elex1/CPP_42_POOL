#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"


class FragTrap:public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string _name);
    FragTrap(const FragTrap &num);
    ~FragTrap();
    
    FragTrap   &operator=(const FragTrap &num);
    
    void highFivesGuys(void);
};

#endif