#include "phonebook.hpp"

phoneBook::phoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->oldest = -1;
	for (int j = 0; j < 8; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			this->repertoir[j].set_data("");
		}
	}
}

phoneBook::~phoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void phoneBook::change_oldest(void)
{
	if (this->oldest == 8)
	{
		std::cout << "changed oldest" << std::endl;
		this->oldest = 0;
	}
}

void phoneBook::fill_contact(std::string data[5])
{
	int target = check_place();
	if (target == 8)
	{
		target = 0;
		change_oldest();
	}
	//else
	//{
	for (int i = 0; i < 5; i++)
	{
		this->repertoir[target].set_data(data[i]);
	}
	//}
	// std::cout << "" << std::endl;
	// this->repertoir[target].show_data();
}

int phoneBook::check_place(void)
{
	this->oldest++;
	return (this->oldest);
}

int phoneBook::search(int index)
{
	if (index < 0 || index > 7)
		return (1);
	this->repertoir[index].show_data();
	return (0);
}
