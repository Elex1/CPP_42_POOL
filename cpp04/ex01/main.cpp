#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal *animal[4];
    for(int i=0; i<2; i++)
    {
        animal[i] = new Cat();
    }
    for(int i=2; i<4; i++)
    {
        animal[i] = new Dog();
    }
    for(int i=0; i<4; i++)
    {
        std::cout << *animal[i] << std::endl;
    }
    for(int i=0; i<4; i++)
    {
        delete animal[i];
    }
    Dog *dog = new Dog();
    Dog DeepDog(*dog);
    delete dog;
    std::cout << DeepDog.getType() + " ****** " << DeepDog.getBrain(1)<< std::endl;
}