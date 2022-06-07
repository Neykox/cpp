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

Span & Span::operator=(Span const & tmp)
{
	this->max = tmp.max;
	this->array.reserve(this->max);
	for (unsigned int i = 0; i < tmp.array.size(); i++)
		this->array[i] = tmp.array[i];
	return (*this);
}

int Span::shortestSpan() const
{
	if (this->array.size() < 2)
		throw Span::NotEnoughElem();
	int min = *std::min_element(array.begin(), array.end());
	int diff = array[0];

	// for (std::vector<int>::iterator it = sp.array.begin(); it != sp.array.end(); ++it)
 //      std::cout << *it << ' ';

	for (std::vector<int>::iterator it = this->array.begin(); it != this->array.end(); it++)
	{
		if (diff < *it && diff > min)
			diff = *it;
	}
}

int Span::longestSpan() const
{
	if (this->array.size() < 2)
		throw Span::NotEnoughElem();
	return (*std::max_element(array.begin(), array.end()) - *std::min_element(array.begin(), array.end()));
}

void Span::addNumber(int to_add)
{
	if (this->array.size() == this->max)
		throw Span::AlreadyFull();
	this->array.push_back(to_add);
}

void Span::addNumber(std::vector<int> & tmp)
{
	if (this->array.size() == this->max)
		throw Span::AlreadyFull();
	this->array.insert(this->array.end(), tmp.begin(), tmp.end());
}
