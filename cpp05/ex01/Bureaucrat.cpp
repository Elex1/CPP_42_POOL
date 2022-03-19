#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
    _grade = 15;
    std::cout << "Bureaucrat's Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructer called!" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &num) : _name(num._name)
{
    _grade = num._grade;
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat &num)
{
    _grade = num._grade;
    return(*this);
}

std::string Bureaucrat::getName() const
{
    return(_name);
}
int Bureaucrat::getGrade() const
{
    return(_grade);
}

const   char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is Too High !!");
}

const   char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is Too Low!!");
}
void	Bureaucrat::increment()
{
	_grade--;
	if (_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrement()
{
	_grade++;
    if(_grade > 150)
        throw (GradeTooLowException());
}

std::ostream	&operator<<( std::ostream &output, Bureaucrat const &num)
{
    output << "-> Name : " << num.getName()  << std::endl;
    output << "-> Grade : " << num.getGrade() << std::endl;
    return(output);
}

void    Bureaucrat::signForm(Form &c)
{
    if (_grade <= c.getSignGrade())
    {
        c.setIsSigned(true);
        std::cout <<  _name << " signed " << c.getName() << std::endl;
    }
    else
        std::cout <<  _name << " couldn't sign " << c.getName() << " because the Grade is Too Low."<< std::endl;
}