#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	ShrubberyCreationForm	shrubberyForm =  ShrubberyCreationForm("Ahmed");
	RobotomyRequestForm		robotomyForm =  RobotomyRequestForm("said");
	PresidentialPardonForm	presidentialPardonForm =  PresidentialPardonForm("farid");
	Bureaucrat				bureaucrat1("sleem", 15);

	try
	{
		bureaucrat1.signForm(shrubberyForm);
		bureaucrat1.signForm(robotomyForm);
		bureaucrat1.signForm(presidentialPardonForm);
		bureaucrat1.executeForm(shrubberyForm);
		bureaucrat1.executeForm(robotomyForm);
		bureaucrat1.executeForm(presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << shrubberyForm << std::endl;
	std::cout << robotomyForm << std::endl;
	std::cout << presidentialPardonForm << std::endl;
	return 0;
}
