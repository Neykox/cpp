#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("a");
	ClapTrap b;
	ClapTrap c(a);
	ClapTrap d;

	std::cout << std::endl;

	for (int i = 0; i < 12; i++)
		a.attack("a rock");

	b.takeDamage(5);
	b.takeDamage(2);
	b.beRepaired(6);
	b.beRepaired(23);

	b.takeDamage(12);
	b.beRepaired(10);

	c.attack("a rock");

	d = a;
	d.attack("a rock");
	return 0;
}