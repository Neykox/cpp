#include "contact.hpp"

// void contact::set_data(std::string target, std::string data)
// {
// 	target = data;
// }

void set_data(std::string data)
{
	this->info[this->i] = data;
	this->i++;
	if (this->i == 5)
		this->i = 0;
}