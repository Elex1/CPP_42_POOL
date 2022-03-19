#ifndef ITER_HPP
#define ITER_HPP 
#include <iostream>

template <typename T>
void    iter(T* array, int len, void(*f)(T const &))
{
    for (int i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void f(T& array)
{
    std::cout << array << std::endl;
}

#endif