#include "easyfind.hpp"
#include <vector>

int main()
{
	int val[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 ,9};

	std::cout << easyfind<>(val, 4) << "\n";
	std::cout << easyfind<>(val, 12) << "\n";


	// std::vector<char> cal = {'h', 'e', 'l', 'l', 'o'};

	// std::cout << easyfind<>(cal, 'o') << "\n";
	// std::cout << easyfind<>(cal, 'q') << "\n";
	return 0;
}