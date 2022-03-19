#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"


class PresidentialPardonForm: public Form
{
    private:

    std::string _target;

    public:

    PresidentialPardonForm(const std::string);
    PresidentialPardonForm(const PresidentialPardonForm &num);
    ~PresidentialPardonForm();
    PresidentialPardonForm   &operator=(const PresidentialPardonForm &num);
    void    execute(Bureaucrat const & executor) const;
    static Form* create(std::string target);

};

#endif