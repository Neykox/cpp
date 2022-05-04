#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	std::cout << "Weapon's Constructor called" << std::endl;
	this->type = name;
}

Weapon::~Weapon()
{
	std::cout << "Weapon's destructor called" << std::endl;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}