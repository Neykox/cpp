#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat no name constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &tmp)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = tmp;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & tmp)
{
	this->type = tmp.type;
	return *this;
}


void WrongCat::makeSound() const
{
	std::cout << "WrongCat noises" << std::endl;
}
