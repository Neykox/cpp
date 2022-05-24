#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string	cmd;
	PhoneBook	rep;
	std::string	data[5];
	int			i = 0;
	int			index = -1;

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
			rep.fill_contact(data);
		}
		else if (cmd == "SEARCH")
		{
			rep.show_search();
			while (1)
			{
				std::cout << "Enter index :" << std::endl;
				std::getline(std::cin, cmd);
				while (cmd == "")
				{
					std::cout << "Cannot be empty :" << std::endl;
					std::getline(std::cin, cmd);
				}
				std::stringstream convert(cmd);
				convert >> index;
				if (index > 0 && index < 9)
					break ;
			}
			rep.search(index);
			index = -1;
		}
		else if (cmd == "EXIT")
			return (1);
	}
	return (0);
}

