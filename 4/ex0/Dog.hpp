#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &tmp);
		~Dog(void);

		Dog & operator=(Dog const & tmp);

		void makeSound(void) const;
};

#endif
