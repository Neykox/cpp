#include "Harl.hpp"

int main()
{
	Harl karen;

	karen.complain("debug");
	std::cout << std::endl;
	karen.complain("info");
	std::cout << std::endl;
	karen.complain("warning");
	std::cout << std::endl;
	karen.complain("error");
	return (0);
}