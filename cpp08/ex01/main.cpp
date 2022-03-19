#include "Span.hpp"


int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}


























// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::vector<int> a(10, 6);

//     Span ps1 = Span(12);
//     ps1.addNumber(6);
//     ps1.addNumber(a.begin(), a.end());
//     ps1.addNumber(6);
//     std::vector<int>::iterator it;

//     for (it = ps1.get_arr().begin(); it != ps1.get_arr().end();it++)
//         std::cout << *it << " ";
//     std::cout << std::endl;
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl; 
//     std::cout << ps1.shortestSpan() << std::endl;
//     std::cout << ps1.longestSpan() << std::endl;
//     return 0;
// }