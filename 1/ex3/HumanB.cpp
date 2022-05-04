#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << name << "'s Constructor called" << std::endl;
	this->name = name;
}

HumanB::~HumanB()
{
	std::cout << this->name << "'s destructor called" << std::endl;
}

void HumanB::attack()
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}