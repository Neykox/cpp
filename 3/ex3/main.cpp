#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("a");
	DiamondTrap b;
	DiamondTrap c(a);
	DiamondTrap d;

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
	c.whoAmI();

	d = a;
	d.attack("a rock");
	return 0;
}