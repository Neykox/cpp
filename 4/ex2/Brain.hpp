#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &tmp);
		~Brain(void);

		Brain & operator=(Brain const & tmp);

		std::string getIdea(int index) const;
};

#endif
