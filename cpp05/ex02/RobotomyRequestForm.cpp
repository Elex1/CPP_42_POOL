#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm's Default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &num) : Form(num), _target(num._target)
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm's Destructor called" << std::endl;
}
RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &num)
{
    _target = num._target;
    return(*this);
}
void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
   	isEligible(executor);

	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << _target + "as been robotomized successfully\n";
	else
		std::cout << _target + " failed\n";

}