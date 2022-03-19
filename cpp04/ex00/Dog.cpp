#include "Dog.hpp"

Dog::Dog() 
{
	type = "Dog";
	std::cout << "Dog's default constructer called!" << std::endl;
}

Dog::Dog(const Dog &num)
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = num;
}

Dog::~Dog()
{
	std::cout << "Dog's destructer called!" << std::endl;
	
}

Dog &				Dog::operator=(Dog const & num)
{
	type = num.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog  ::  BARK BARK BARK BARK BARK BARK BARK BARK BARK!" << std::endl;
}