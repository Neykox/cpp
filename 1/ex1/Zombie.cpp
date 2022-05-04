#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string data)
{
	std::cout << data << "'s Constructor called" << std::endl;
	this->name = data;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "'s destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}