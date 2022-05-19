#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap no name constructor called" << std::endl;
	// this->name = "no name";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &tmp)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = tmp;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & tmp)
{
	this->name = tmp.name;
	this->hit_points = tmp.hit_points;
	this->energy_points = tmp.energy_points;
	this->attack_damage = tmp.attack_damage;
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	if (this->energy_points == 0)
	{
		std::cout << "FragTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << ": wanna high five?" << std::endl;
	this->energy_points--;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "FragTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}
