#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"
#include <fstream>


class ShrubberyCreationForm: public Form
{
    private:

    std::string _target;

    public:

    ShrubberyCreationForm(const std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm &num);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &num);
    void    execute(Bureaucrat const & executor) const;
    std::string gettarget() const;
    static Form* create(std::string target);

};

#endif