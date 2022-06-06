#include "Span.hpp"

Span::Span(void): max(0)
{
	std::cout << "Constructor called\n";
	array.reserve(0);
}

Span::Span(unsigned int n): max(n)
{
	std::cout << "Constructor with param called\n";
	array.reserve(max);
}

Span::Span(const Span &tmp)
{
	std::cout << "Copy constructor called\n";
	*this = tmp;
}

Span::~Span(void)
{
	std::cout << "Destructor called\n";
}

Span::Span & operator=(Span const & tmp)
{
	this->max = tmp.max;
	this->array.reserve(max);
	for (unsigned int i = 0; i < curr; i++)
		array[i] = tmp.array[i];
	return (*this);
}

int Span::shortestSpan() const
{
	if (this->array.size() < 2)
		throw Span::NotEnoughElem();
}

int Span::longestSpan() const
{
	if (this->array.size() < 2)
		throw Span::NotEnoughElem();
	return (*array.max_element(array.begin(), array.end()) - *array.min_element(array.begin(), array.end()));
}

void Span::addNumber(int to_add)
{
	if (this->array.size() == this->curr)
		throw Span::AlreadyFull();
	this->array.pushback(to_add);
}

void Span::addNumber(std::vector<int> & tmp)
{
	if (this->array.size() == this->curr)
		throw Span::AlreadyFull();
	this->array.insert(this->array.end(), tmp.begin(), tmp.end());
}
