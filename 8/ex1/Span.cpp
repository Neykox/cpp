#include "Span.hpp"

Span::Span(void): n(0)
{
	std::cout << "Constructor called\n";
	array = new int[0];
}

Span::Span(unsigned int n): n(n)
{
	std::cout << "Constructor with param called\n";
	array = new int[n];
}

Span::Span(const Span &tmp)
{
	std::cout << "Copy constructor called\n";
	*this = tmp;
}

Span::~Span(void)
{
	std::cout << "Destructor called\n";
	delete[] array;
}

Span::Span & operator=(Span const & tmp)
{
	this->n = tmp.n;
	this->array = new int[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = tmp.array[i];
	return (*this);
}

int Span::size() const
{
	return (this->n);
}

int Span::shortestSpan() const
{
	if (this->n < 2)
		throw Span::NotEnoughElem();
}

int Span::longestSpan() const
{
	if (this->n < 2)
		throw Span::NotEnoughElem();
}

void Span::addNumber(int to_add)
{
	if ()
		throw Span::AlreadyFull();
}
