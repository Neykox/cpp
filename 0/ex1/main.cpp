#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string	cmd;
	phoneBook	rep;
	std::string	data[5];
	int			i = 0;

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
					std::cout << "Cannot be empty" << std::endl;
					std::getline(std::cin, cmd);
					data[i] = cmd;
				}
				i++;
			}
			rep.fill_contact(data);
			i = 0;
			while (i < 5)
			{
				data[i].clear();
				i++;
			}
		}
		else if (cmd == "EXIT")
			return (1);
		//clear(cmd)/cmd.clear;
	}
	return (0);
}
