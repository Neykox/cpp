#include "Array.hpp"

template <typename T>
void ft_inc(T &tmp)
{
	tmp++;
}

template <typename T>
void ft_up(T &tmp)
{
	tmp = toupper(tmp);
}

int main( void )
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < 10; i++)	
		std::cout << a[i] << " ";
	std::cout << std::endl;

	iter<>(a, 10, &ft_inc);
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;


	std::cout << std::endl;
	char str[14] = "Hello world!\n";

	iter<char>(str, 13, ft_up);
	std::cout << str;
	return 0;
}
