#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
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

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::change_oldest(void)
{
	if (this->oldest == 8)
	{
		std::cout << "changed oldest" << std::endl;
		this->oldest = 0;
	}
}

void PhoneBook::fill_contact(std::string data[5])
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

int PhoneBook::check_place(void)
{
	this->oldest++;
	return (this->oldest);
}

void PhoneBook::show_search(void)
{
	for (int z = 0; z < 8; z++)
	{
		std::cout << '|' << std::setfill (' ') << std::setw (10);
		std::cout << z + 1;
		this->repertoir[z].show_data();
	}
}

int PhoneBook::search(int index)
{
	if (index < 1 || index > 8)
		return (1);
	this->repertoir[index--].show_all_data();
	return (0);
}
