#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main()
{
	Zombie *tmp;
	int n = 4;

	tmp = zombieHorde(n, "rick");
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		tmp[i].announce();
	std::cout << std::endl;
	delete[] tmp;
	return (0);
}