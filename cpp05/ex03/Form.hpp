#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

    std::string const _name;
    bool    _is_signed;
    int const _signgrade;
    int const _execgrade;

    public:

    Form();
    Form(std::string name, int execgrade, int signgrade);
    Form(const Form &num);
    virtual ~Form();

    Form   &operator=(const Form &num);

    std::string getName() const;
    int     getSignGrade() const;
    int     getExecGrade() const;
    bool     getIssigned() const;
    void     setIsSigned(bool a);

    void    beSigned(Bureaucrat const &);
    bool    isEligible( Bureaucrat const &c ) const;

   
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw();
    };

    virtual void    execute(Bureaucrat const & executor) const = 0;

};
std::ostream	&operator<<( std::ostream &output, Form const &fp);

#endif