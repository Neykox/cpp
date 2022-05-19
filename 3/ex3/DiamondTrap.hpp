#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &tmp);
		~DiamondTrap(void);

		DiamondTrap & operator=(DiamondTrap const & tmp);

		// void attack(const std::string & target);
		void ScavTrap::attack(const std::string& target);


		void whoAmI(void);
};

#endif
