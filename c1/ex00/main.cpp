#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"

void remote_zombie(Zombie *themis)
{
	themis->announce();
}

int main()
{
	Zombie mathieu("mathieu");
	Zombie *themis = newZombie("themis");

	std::cout << std::endl;
	mathieu.announce();
	remote_zombie(themis);
	std::cout << std::endl;
	randomChump("mika");
	// marc->announce();
	std::cout << std::endl;
	delete themis;
	return (0);
}