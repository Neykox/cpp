#include "contact.hpp"

void contact::set_data(std::string data)
{
	static int i;
	this->info[i] = data;
	i++;
	if (i == 5)
		i = 0;
}

void contact::show_data()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->info[i] << std::endl;
	}
}