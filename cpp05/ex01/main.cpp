#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Bureaucrat person("sleem", 15);
        std::cout << person << std::endl;
        Form a("wri9a", 15, 15);
        std::cout << a << std::endl;
        person.signForm(a);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        Bureaucrat person("sleem", 15);
        std::cout << person << std::endl;
        Form a("wri9a", 14, 15);
        a.beSigned(person);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}