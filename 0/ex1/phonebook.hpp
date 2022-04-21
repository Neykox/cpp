#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

class phoneBook
{
	public:
		phoneBook(void);
		~phoneBook(void);
		int	check_place(void);
		void change_oldest(void);
		//void change_oldest(std::string *data[5]);
		void fill_contact(std::string data[5]);
	private:
		contact repertoir[8];
		int oldest;
};

#endif