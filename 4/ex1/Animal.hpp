#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &tmp);
		virtual ~Animal(void);

		Animal & operator=(Animal const & tmp);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
