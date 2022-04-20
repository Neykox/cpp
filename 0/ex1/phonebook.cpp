#include "phonebook.hpp"

phoneBook::phoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->oldest = 0;
}

phoneBook::~phoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void phoneBook::change_oldest(std::string *data[5])
{
	fill_contact(this->repertoir[this->oldest], data);
	this->oldest++;
	if (this->oldest == 7)
		this->oldest = 0;
}

void phoneBook::fill_contact(std::string *data[5])
{
	int target = check_place();
	if (target == 8)
		change_oldest(data);
	else
	{
		for (int i = 0; i < 5; i++)
		{
			this->repertoir[target].set_data(data[i]);
		}
	}
}

int phoneBook::check_place(void)
{
	int i = 0;
	while (this->repertoir[i] && i < 8)
		i++;
	return (i);
}
