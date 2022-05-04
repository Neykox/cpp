#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	std::cout << name << "'s Constructor called" << std::endl;
	this->name = name;
}

HumanA::~HumanA()
{
	std::cout << this->name << "'s destructor called" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}