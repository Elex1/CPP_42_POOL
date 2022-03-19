#include "easyfind.hpp"
#include <list>
#include <stack>

std::vector<int>	convert_adaptors(std::stack<int> stack)
{
	std::vector<int> tmp;
	while (!stack.empty())
	{
		tmp.push_back(stack.top());
		stack.pop();
	}
	return tmp;
}

std::vector<int>	convert_adaptors(std::queue<int> queue)
{
	std::vector<int> tmp;
	while (!queue.empty())
	{
		tmp.push_back(queue.front());
		queue.pop();
	}
	return tmp;
}

std::vector<int>	convert_adaptors(std::priority_queue<int> priority_queue)
{
	std::vector<int> tmp;
	while (!priority_queue.empty())
	{
		tmp.push_back(priority_queue.top());
		priority_queue.pop();
	}
	return tmp;
}

int main()
{
	std::stack<int>	stack;
	std::vector<int> vector;
	std::vector<int> tmp;
	int  j = 10;
	for(int i = 0; i < 7; i++)
		stack.push(j++);
	j = 10;
	for (int i = 0; i < 7; i++)
		vector.push_back(j++);
	tmp = convert_adaptors(stack);
	try
	{
		easyfind(tmp, 13);
		easyfind(vector, 13);
	}
	catch(const char *e)
	{ 
		std::cerr << e ;
	}
}