#include "Span.hpp"

Span::Span() {}
Span::Span(unsigned int n)
{
    _maxN = n;
}
Span&	Span::operator=(Span const& obj)
{
    this->_maxN = obj._maxN;
	this->_array = obj._array;
	return (*this);
}
Span::Span(Span const& obj)
{
	this->_maxN = obj._maxN;
	this->_array = obj._array;
}

void	Span::addNumber(int n)
{
	if (_maxN == 0)
	{
		throw (NoSpaceException());
	}
	else
	{
		_array.push_back(n);
		this->_maxN--;
	}
}

void     Span::addNumber(std::vector<int>::iterator begin , std::vector<int>::iterator last)
{
	int n = std::distance(begin, last);
	if (_array.size() + n > _maxN)
		throw (NoSpaceException());
	else
	{
		while (begin != last)
		{
			_array.push_back(*begin);
			_maxN--;
			begin++;
		}
	}
}


int Span::shortestSpan()
{
	
	if (_array.size() <= 1)
		throw (LongShortException());
	std::vector<int>::iterator a;
	int short1;
	std::sort(_array.begin(), _array.end());
	short1 = _array[0];
	
	for (a = _array.begin() + 1; a != _array.end();a++ )
	{
		if (short1 > *a - *(a - 1))
			short1 = *a - *(a - 1);
	}
	return (short1);
}

int		Span::longestSpan()
{
	if(_array.size() <= 1)
		throw (LongShortException());
	int max = *std::max_element(_array.begin(),_array.end());
	int min = *std::min_element(_array.begin(),_array.end());
	return(std::abs((long)(max - min)));
}

const char* Span::NoSpaceException::what() const throw()
{
	return("No Space For The Additional number");
}

const char* Span::LongShortException::what() const throw()
{
	return("No Span To Show");
}

std::vector<int>& Span::get_arr()
{
    return (_array);
}


Span::~Span(){}