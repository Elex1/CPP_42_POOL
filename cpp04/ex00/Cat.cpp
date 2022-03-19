#include "Cat.hpp"
Cat::Cat() 
{
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
	std::cout << "Cat's destructer called!" << std::endl;
	
}

Cat &				Cat::operator=(Cat const & num)
{
	type = num.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat  ::  MEOW MEOW MEOW MEOW MEOW MEOW!" << std::endl;
}