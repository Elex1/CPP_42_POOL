#include "Form.hpp"
#include "Form.hpp"

Form::Form() : _name("Form") , _signgrade(150), _execgrade(150)
{
    _is_signed = false;
    std::cout << "Form's Default constructor called" << std::endl;
}

Form::Form(std::string name,  int signgrade, int execgrade) : _name(name),_is_signed(false), _signgrade(signgrade),  _execgrade(execgrade)
{
	std::cout << "Form constructer called!" << std::endl;
	if (signgrade < 1 || execgrade < 1)
		throw (GradeTooHighException());
	else if (signgrade > 150 || execgrade > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &num) : _name(num._name), _signgrade(num._signgrade),  _execgrade(num._execgrade)
{
    _is_signed = num._is_signed;
    std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form   &Form::operator=(const Form &num)
{
    _is_signed = num._is_signed;
    return(*this);
}

std::string Form::getName() const
{
    return(_name);
}
int     Form::getSignGrade() const
{
    return(_signgrade);
}
int     Form::getExecGrade() const
{
    return(_execgrade);
}
bool     Form::getIssigned() const
{
    return(_is_signed);
}
void     Form::setIsSigned(bool a)
{
    _is_signed = a;
}

const   char* Form::GradeTooHighException::what() const throw()
{
    return("Grade is Too High !!");
}

const   char* Form::GradeTooLowException::what() const throw()
{
    return("Grade is Too Low!!");
}
void    Form::beSigned(Bureaucrat const &c)
{

    if (c.getGrade() <= _signgrade)
    {
        _is_signed = true;
        std::cout <<  c.getName() << " signed " << _name << std::endl;
    }
    else
        throw (GradeTooLowException());
}

bool Form::isEligible( Bureaucrat const &c ) const
{
	if (getIssigned() && c.getGrade() <= getExecGrade())
		return true;
	else
		throw GradeTooLowException();
}



std::ostream	&operator<<( std::ostream &output, Form const &num)
{
    output << "-> Name : " << num.getName()  << std::endl;
    output << "-> Sign Grade : " << num.getSignGrade() << std::endl;
    output << "-> Exec : " << num.getExecGrade()  << std::endl;
    output << "-> Signed : " << num.getIssigned() << std::endl;
    return(output);
}

