#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat no name constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat &tmp)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = tmp;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & tmp)
{
	this->type = tmp.type;
	return *this;
}


void Cat::makeSound() const
{
	std::cout << "Cat noises" << std::endl;
}
