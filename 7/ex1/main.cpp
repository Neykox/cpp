#include "iter.hpp"

void ft_add(int *tmp)
{
	*tmp++;
}

int main( void )
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << a << std::endl;

	iter<int [], int, ft_add>(&a, 10, &ft_add);

	std::cout << a << std::endl;
	return 0;
}