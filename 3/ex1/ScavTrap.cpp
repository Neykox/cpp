#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap no name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &tmp)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = tmp;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & tmp)
{
	this->name = tmp.name;
	this->hit_points = tmp.hit_points;
	this->energy_points = tmp.energy_points;
	this->attack_damage = tmp.attack_damage;
	return *this;
}

void ScavTrap::guardGate()
{
	if (this->energy_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << this->name << " entered Gate keeper mode" << std::endl << std::endl;
	this->energy_points--;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
}
