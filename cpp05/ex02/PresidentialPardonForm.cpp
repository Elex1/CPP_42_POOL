#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm's Default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &num) : Form(num), _target(num._target)
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm's Destructor called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &num)
{
    _target = num._target;
    return(*this);
}
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    isEligible(executor);
    std::cout << _target + " has been pardoned by Zafod Beeblebrox." << std::endl;

}