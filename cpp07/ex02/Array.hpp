#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <exception>
template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _n;
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> const& obj);
        Array<T>   operator=(Array<T> const& obj);
        T& operator[]( unsigned int n ) const;
        unsigned int    size() const;
        class invalidIndexException : public std::exception
        {
            const char* what() const throw()
            {
                return("Out Of Range Exception\n");
            }
        };
        ~Array();
};

#endif
