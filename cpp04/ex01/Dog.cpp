#include "Dog.hpp"

Dog::Dog() 
{
	brain = new Brain();
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
	delete brain;
	std::cout << "Dog's destructer called!" << std::endl;
	
}

Dog &				Dog::operator=(Dog const & num)
{
	type = num.type;
	brain = new Brain();
	for (int i= 0; i < 100; i++)
	{
		brain->setIdeas(i, num.brain->getIdeas(i));
	}
	return (*this);
}

std::string Dog::getBrain(int index) const
{
	return (brain->getIdeas(index));
}
void Dog::makeSound() const
{
	std::cout << "Dog  ::  BARK BARK BARK BARK BARK BARK BARK BARK BARK!" << std::endl;
}