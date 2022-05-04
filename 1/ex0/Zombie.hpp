#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string data);
		~Zombie(void);
		void announce(void);
	private:
		std::string name;
};

#endif