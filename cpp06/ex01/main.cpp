#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *ptr = new Data;
	uintptr_t raw;

	ptr->testVar = 1337;
	ptr->testVar2 = "//=*/";
	std::cout << "Data ptr before cast: " << ptr << std::endl;
    raw = serialize(ptr);
	std::cout << "Data ptr cast to uint: " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "Data ptr after recast: " << ptr << std::endl;
	std::cout << ptr->testVar2 << " " << ptr->testVar << std::endl;
}