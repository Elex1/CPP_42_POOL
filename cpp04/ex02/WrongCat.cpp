#include "WrongCat.hpp"
WrongCat::WrongCat() 
{
	type = "WrongCat";
	std::cout << "WrongCat's default constructer called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &num)
{
	std::cout << "WrongCat's copy constructer called!" << std::endl;
	*this = num;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructer called!" << std::endl;
	
}

WrongCat &				WrongCat::operator=(WrongCat const & num)
{
	type = num.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat  :: MEOW MEOW MEOW MEOW MEOW MEOW!" << std::endl;
}