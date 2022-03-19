#include "iter.hpp"
int main()
{
    int a[3] = {0,1,2};
    char b[6] = "sleem";

    std::cout << "for the ints" << std::endl;
    iter(a, 3, f);
    std::cout << "for the chars" << std::endl;
    iter(b, 5, f);

}