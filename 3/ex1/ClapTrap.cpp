#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap no name constructor called" << std::endl;
	this->name = "no name";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = tmp;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & tmp)
{
	this->name = tmp.name;
	this->hit_points = tmp.hit_points;
	this->energy_points = tmp.energy_points;
	this->attack_damage = tmp.attack_damage;
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl << std::endl;
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " receives " << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " has " << this->hit_points << " hit points" << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy points!" << std::endl << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repaires himself for " << amount << " hit points" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " has " << this->hit_points << " hit points" << std::endl << std::endl;
}
