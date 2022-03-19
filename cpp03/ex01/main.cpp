#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Sleem1");
    ScavTrap b("sleem2");
    std::cout << "Before : " << std::endl << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    a.attack(b.getName());
    b.takeDamage(a.getAttackdamage());
    b.beRepaired(10);
    
    std::cout << "After : " << std::endl << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}