#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{

    public:

    Intern();
    Intern(const Intern &num);
    ~Intern();
    Intern   &operator=(const Intern &num);
    Form* makeForm(std::string name, std::string target);
    class FormNotFound : public std::exception
    {
        const char* what() const throw();
    };


};

#endif