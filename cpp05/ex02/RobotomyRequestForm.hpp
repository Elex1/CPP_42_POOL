#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"


class RobotomyRequestForm: public Form
{
    private:

    std::string _target;

    public:

    RobotomyRequestForm(const std::string);
    RobotomyRequestForm(const RobotomyRequestForm &num);
    ~RobotomyRequestForm();
    RobotomyRequestForm   &operator=(const RobotomyRequestForm &num);
    void    execute(Bureaucrat const & executor) const;

};

#endif