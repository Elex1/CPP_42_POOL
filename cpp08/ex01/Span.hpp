#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <string>
#include <vector>

class Span
{
    private:
        unsigned int _maxN;
        std::vector<int> _array;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const& obj);
        Span&    operator=(Span const& obj);
        ~Span();
        void	addNumber(int n);
        void     addNumber(std::vector<int>::iterator begin , std::vector<int>::iterator last);
        int		shortestSpan();
        int		longestSpan();
        std::vector<int>& get_arr();
        class LongShortException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class NoSpaceException : public std::exception
        {
            public:
                const char * what() const throw();

        };
};

#endif