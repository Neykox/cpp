#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

class ClapTrap
{
	protected:
		std::string name;
		int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &tmp);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & tmp);

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
