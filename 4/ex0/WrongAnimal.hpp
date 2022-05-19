#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &tmp);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & tmp);

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
