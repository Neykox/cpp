#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &tmp);
		~WrongCat(void);

		WrongCat & operator=(WrongCat const & tmp);

		void makeSound(void) const;
};

#endif
