#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	std::cout << *easyfind<>(mstack, 4) << "\n";
	std::cout << *easyfind<>(mstack, 17) << "\n";
	return 0;
}