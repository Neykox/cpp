#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Harl karen;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (levels[i] == argv[1])
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
			karen.complain(levels[0]);
		case 1:
			karen.complain(levels[1]);
		case 2:
			karen.complain(levels[2]);
		case 3:
			karen.complain(levels[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}