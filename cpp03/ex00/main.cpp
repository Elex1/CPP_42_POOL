#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("sleem1");
    ClapTrap b("sleem2");

    std::cout << a.getAttackdamage() << std::endl;

    a.attack(b.getName());
    b.takeDamage(a.getAttackdamage());
    b.beRepaired(10);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
}