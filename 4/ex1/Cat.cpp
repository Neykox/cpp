#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat no name constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(std::string type)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &tmp)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = tmp;
	this->brain = new Brain(*tmp.brain);
}

Cat::~Cat(void)
{
	delete this->brain;
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

Brain* Cat::getBrain() const
{
	return this->brain;
}
