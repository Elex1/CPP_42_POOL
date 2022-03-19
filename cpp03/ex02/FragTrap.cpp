#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Hitpoints = 100;
    this->Energypoints = 100;
    this->Attackdamage = 30;
    std::cout << "FragTrap's Default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string _name)
{
    this->name = _name;
    this->Hitpoints = 100;
    this->Energypoints = 100;
    this->Attackdamage = 30;
    std::cout << "FragTrap's name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    std::cout << "FragTrap's Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "ScaveTrap's Destructor called" << std::endl;
}

FragTrap   &FragTrap::operator=(const FragTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    return(*this);
}

std::ostream	&operator<<( std::ostream &output, FragTrap const &num)
{
    output <<"-> name : " << num.getName() << ", Hit points : " << num.getHitpoints() << ", Energypoints :" << num.getEnergypoints() << ", Attackdamage : " << num.getAttackdamage() << std::endl;
    return(output);
}

void FragTrap::highFivesGuys(void)
{
	std::cout<< "FragTrap  " << name << " : HIGH FIVES  GUYS" << std::endl;
}