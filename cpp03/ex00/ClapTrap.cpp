#include "ClapTrap.hpp"
ClapTrap::ClapTrap(): Hitpoints(10), Energypoints(10), Attackdamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string _name): name(_name), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
    std::cout << "ClapTrap's name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    return(*this);
}
void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attackdamage << " points of damage ! " << std::endl;
    Energypoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take damage of " << amount << "!!" << std::endl;
    Hitpoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    
    std::cout << "ClapTrap " << name << " heal amount of " << amount << "!!" << std::endl;
    Hitpoints += amount;
    Energypoints--;

}
std::string ClapTrap::getName() const
{
    return(name);
}

int ClapTrap::getHitpoints() const
{
    return(Hitpoints);
}

int ClapTrap::getEnergypoints() const
{
    return(Energypoints);
}

int ClapTrap::getAttackdamage() const
{
    return(Attackdamage);
}

std::ostream	&operator<<( std::ostream &output, ClapTrap const &num)
{
    output <<"->name : " << num.getName() << "| Hit points : " << num.getHitpoints() << "| Energypoints :" << num.getEnergypoints() << "| Attackdamage : " << num.getAttackdamage() << std::endl;
    return(output);
}