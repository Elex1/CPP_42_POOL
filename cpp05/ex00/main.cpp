#include "Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat person("sleem", 15);
        std::cout << person << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat person("sleem1", 199);
        std::cout << person << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat person("sleem", 1);
        std::cout << person << std::endl;
        person.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}