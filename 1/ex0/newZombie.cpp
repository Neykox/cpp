#include "newZombie.hpp"

// Zombie* newZombie::newZombie(std::string name)
// {
// 	this->_newZombie = new Zombie(name);
// 	return (tmp);
// }

// newZombie::~newZombie(void)
// {
// 	delete this->_newZombie;
// 	std::cout << this->name << "'s destructor called" << std::endl;
// }

Zombie* newZombie(std::string name)
{
	Zombie *tmp;

	tmp = new Zombie(name);
	return (tmp);
}
