#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal no name constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tmp)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = tmp;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & tmp)
{
	this->type = tmp.type;
	return *this;
}


void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
