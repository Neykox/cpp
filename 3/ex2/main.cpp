#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("a");
	FragTrap b;
	FragTrap c(a);
	FragTrap d;

	std::cout << std::endl;

	for (int i = 0; i < 102; i++)
	{
		std::cout << i << " ";
		a.attack("a rock");
	}

	b.takeDamage(50);
	b.takeDamage(20);
	b.beRepaired(60);
	b.beRepaired(230);

	b.takeDamage(520);
	b.beRepaired(100);

	c.attack("a rock");
	c.highFiveGuys();

	d = a;
	d.attack("a rock");
	return 0;
}