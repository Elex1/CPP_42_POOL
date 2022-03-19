#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
    std::string const _name;
    int _grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &num);
    ~Bureaucrat();

    Bureaucrat   &operator=(const Bureaucrat &num);

    std::string getName() const;
    int     getGrade() const;

    void	increment();
    void	decrement();
    
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw();
    };

    void    signForm(Form &);

};
std::ostream	&operator<<( std::ostream &output, Bureaucrat const &fp);

#endif