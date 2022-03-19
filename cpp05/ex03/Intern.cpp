#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern's Default constructor called" << std::endl;
}
Intern::Intern(const Intern &num)
{
	*this = num;
    std::cout << "Intern Copy constructor called" << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern's Destructor called" << std::endl;
}
Intern& Intern::operator=(const Intern &num)
{
	if (this != &num)
	{
		//lbssala
	}
    return(*this);
}
Form*   Intern::makeForm(std::string name, std::string target) 
{
   std::string	formsNames[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	Form* (*f[3])(std::string target);
	f[0] = ShrubberyCreationForm::create;
	f[1] = RobotomyRequestForm::create;
	f[2] = PresidentialPardonForm::create;
    for (int i = 0; i < 3; i++)
	{
		if (name == formsNames[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return f[i](target);
		}
	}
	throw(FormNotFound());
}

const char* Intern::FormNotFound::what() const throw()
{
	return "Form Not Found";
}