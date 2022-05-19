#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap no name constructor called" << std::endl;
	// this->name = "no name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = tmp;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & tmp)
{
	this->name = tmp.name;
	this->hit_points = tmp.hit_points;
	this->energy_points = tmp.energy_points;
	this->attack_damage = tmp.attack_damage;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "hooami" << std::endl;
}

// void ScavTrap::attack(const std::string& target)
// {
// 	if (this->energy_points == 0)
// 	{
// 		std::cout << "DiamondTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
// 		return ;
// 	}
// 	if (this->hit_points <= 0)
// 	{
// 		std::cout << "DiamondTrap " << this->name << " is dead!" << std::endl << std::endl;
// 		return ;
// 	}
// 	std::cout << "DiamondTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
// 	this->energy_points--;
// }
