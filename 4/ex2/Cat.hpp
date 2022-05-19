#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &tmp);
		~Cat(void);

		Cat & operator=(Cat const & tmp);

		void makeSound(void) const;
		Brain* getBrain() const;
};

#endif
