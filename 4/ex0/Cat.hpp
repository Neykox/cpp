#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &tmp);
		~Cat(void);

		Cat & operator=(Cat const & tmp);

		void makeSound(void) const;
};

#endif
