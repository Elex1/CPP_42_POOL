#include "Cat.hpp"
Cat::Cat() 
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat's default constructer called!" << std::endl;
}

Cat::Cat(const Cat &num)
{
	std::cout << "Cat's copy constructer called!" << std::endl;
	*this = num;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat's destructer called!" << std::endl;
}

Cat &				Cat::operator=(Cat const & num)
{
	type = num.type;
	brain = new Brain();
	for (int i= 0; i < 100; i++)
	{
		brain->setIdeas(i, num.brain->getIdeas(i));
	}
	return (*this);
}
std::string Cat::getBrain(int index) const
{
	return (brain->getIdeas(index));
}

void Cat::makeSound() const
{
	std::cout << "Cat  ::  MEOW MEOW MEOW MEOW MEOW MEOW!" << std::endl;
}