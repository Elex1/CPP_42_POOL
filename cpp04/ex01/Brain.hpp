#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"


class Brain
{
    private:
    std::string ideas[100];
    public:
    Brain();
    Brain(const Brain &num);
    ~Brain();
    
    Brain   &operator=(const Brain &num);
    std::string getIdeas(int index) const;
    void setIdeas(int index, std::string idea);

};

#endif