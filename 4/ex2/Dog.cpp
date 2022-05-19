#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog no name constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(std::string type)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog &tmp)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = tmp;
	this->brain = new Brain(*tmp.brain);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & tmp)
{
	this->type = tmp.type;
	return *this;
}


void Dog::makeSound() const
{
	std::cout << "Dog noises" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}
