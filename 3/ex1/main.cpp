#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("a");
	ScavTrap b;
	ScavTrap c(a);
	ScavTrap d;

	std::cout << std::endl;

	for (int i = 0; i < 52; i++)
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
	c.guardGate();

	d = a;
	d.attack("a rock");
	return 0;
}