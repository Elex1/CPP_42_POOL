#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  //  this->Hitpoints = 100;
   // this->Energypoints = 50;
   // this->Attackdamage = 20;
    std::cout << "ScavTrap's Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string _name)
{
    this->name = _name;
   // this->Hitpoints = 100;
   // this->Energypoints = 50;
   // this->Attackdamage = 20;
    std::cout << "ScavTrap's name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    std::cout << "ScavTrap's Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScaveTrap's Destructor called" << std::endl;
}

ScavTrap   &ScavTrap::operator=(const ScavTrap &num)
{
    name = num.name;
    Hitpoints = num.Hitpoints;
    Energypoints = num.Energypoints;
    Attackdamage = num.Attackdamage;
    return(*this);
}

std::ostream	&operator<<( std::ostream &output, ScavTrap const &num)
{
    output <<"-> name : " << num.getName() << ", Hit points : " << num.getHitpoints() << ", Energypoints :" << num.getEnergypoints() << ", Attackdamage : " << num.getAttackdamage() << std::endl;
    return(output);
}

void ScavTrap::guardGate()
{
	std::cout << name << " in Gate keeper mode" << std::endl;
}