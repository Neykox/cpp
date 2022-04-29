#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	std::string	cmd;
	PhoneBook	rep;
	std::string	data[5];
	int			i = 0;
	long int	index;

	std::cout << "Welcome :" << std::endl;
	while(1)
	{
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			while (i < 5)
			{
				std::cout << "Enter info :" << std::endl;
				std::getline(std::cin, cmd);
				data[i] = cmd;
				while (cmd == "")
				{
					std::cout << "Cannot be empty :" << std::endl;
					std::getline(std::cin, cmd);
					data[i] = cmd;
				}
				i++;
			}
			i = 0;
			for (int z = 0; z < 5; z++)
				std::cout << "data = |" << data[z] << "|" << std::endl;
			rep.fill_contact(data);
		}
		else if (cmd == "SEARCH")
		{
			rep.show_search();
			std::cout << "Enter index :" << std::endl;
			std::getline(std::cin, cmd);
			while (cmd == "")
			{
				std::cout << "Cannot be empty :" << std::endl;
				std::getline(std::cin, cmd);
			}
			index = strtol(cmd, NULL, 10);
			rep.search(1);
		}
		else if (cmd == "EXIT")
			return (1);
	}
	return (0);
}
