#include "Brain.hpp"
Brain::Brain() 
{
	std::cout << "Brain's default constructer called!" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = "idea " + std::to_string(i);
	}
}

Brain::Brain(const Brain &num)
{
	std::cout << "Brain's copy constructer called!" << std::endl;
	*this = num;
}

Brain::~Brain()
{
	std::cout << "Brain's destructer called!" << std::endl;
}

Brain &				Brain::operator=(Brain const & num)
{
	for(int i = 0; i < 100; i++) 
	{
		ideas[i] = num.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdeas(int index) const
{
	return(ideas[index]);
}

void Brain::setIdeas(int index, std::string idea)
{
	ideas[index] = idea;
}