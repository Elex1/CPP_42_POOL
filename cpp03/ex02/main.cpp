#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap a("Sleem1");
    FragTrap c("sleem2");

    std::cout << "Before : " << std::endl << std::endl;

    std::cout << a << std::endl;
    std::cout << c << std::endl;

    a.attack(c.getName());
    c.takeDamage(a.getAttackdamage());
    c.beRepaired(10);

    
    std::cout << "After : " << std::endl << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;

    c.attack(a.getName());
    a.takeDamage(c.getAttackdamage());
    a.beRepaired(10);
    c.highFivesGuys();

    std::cout << "After : " << std::endl << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;

    return 0;
}