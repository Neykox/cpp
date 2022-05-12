#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	// private:
	// 	int hit_points;
	// 	unsigned int energy_points;
	// 	unsigned int attack_damage;
	// // protected:
	// 	std::string name;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &tmp);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & tmp);

		void attack(const std::string & target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);

		void guardGate();
};

#endif
