#include "Contact.hpp"

void Contact::set_data(std::string data)
{
	static int i;
	this->info[i] = data;
	i++;
	if (i == 5)
		i = 0;
}

std::string Contact::truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::show_data()
{
	std::string tmp;

	for (int i = 0; i < 3; i++)
	{
		tmp = truncate(this->info[i]);
		std::cout << '|' << std::setfill (' ') << std::setw (10);
		std::cout << tmp;
	}
	std::cout << '|' << std::endl;
}

void Contact::show_all_data()
{
	std::string tmp;

	for (int i = 0; i < 5; i++)
	{
		tmp = truncate(this->info[i]);
		std::cout << '|' << std::setfill (' ') << std::setw (15);
		std::cout << tmp;
	}
	std::cout << '|' << std::endl;
}
