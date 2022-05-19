#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal no name constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &tmp)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = tmp;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & tmp)
{
	this->type = tmp.type;
	return *this;
}

std::string Animal::getType() const
{
	return (this->type);
}
