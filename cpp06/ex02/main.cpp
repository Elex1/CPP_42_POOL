#include "Base.hpp"

Base * generate()
{
    srand(time(NULL));
	int	randValue = rand() % 3;

	if (randValue == 0)
		return (new A());
	else if (randValue == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Bad Cast!" << std::endl;
}


void identify(Base & p)
{
    try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Bad Cast!: " << e.what() << '\n';
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Bad Cast!: " << e.what() << '\n';
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Bad Cast!: " << e.what() << '\n';
	}
}

int main(void)
{   
	Base *p = generate();
    std::cout << "--------- identify by pointer ---------" << std::endl;
    identify(p);
    std::cout << "--------- identify by reference ---------" << std::endl;
    identify(*p);
	return(0);
}