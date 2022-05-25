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
	while(std::getline(std::cin, cmd))
	{
		if (cmd.compare("ADD") == 0)
		{
			std::cout << "Enter info :" << std::endl;
			while (std::getline(std::cin, cmd))
			{
				data[i] = cmd;
				if(cmd == "")
					std::cout << "Cannot be empty :" << std::endl;
				while (cmd == "" && std::getline(std::cin, cmd))
				{
					if(cmd == "")
						std::cout << "Cannot be empty :" << std::endl;
					data[i] = cmd;
				}
				i++;
				if (i == 5)
					break ;
				std::cout << "Enter info :" << std::endl;
			}
			i = 0;
			rep.fill_contact(data);
		}
		else if (cmd == "SEARCH")
		{
			rep.show_search();
			std::cout << "Enter index :" << std::endl;
			while (std::getline(std::cin, cmd))
			{
				if(cmd == "")
					std::cout << "Cannot be empty :" << std::endl;
				while (cmd == "" && std::getline(std::cin, cmd))
					std::cout << "Cannot be empty :" << std::endl;
				std::stringstream convert(cmd);
				convert >> index;
				if (index > 0 && index < 9)
					break ;
				std::cout << "Enter index :" << std::endl;
			}
			rep.search(index);
			index = -1;
		}
		else if (cmd == "EXIT")
			return (1);
	}
	return (0);
}

