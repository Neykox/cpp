#include "randomChump.hpp"

void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}

// void ~randomChump::randomChump(void)
// {
// 	std::cout << this->name << "'s destructor called" << std::endl;
// }