#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &tmp);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & tmp);

		void attack(const std::string & target);

		void highFiveGuys(void);
};

#endif
