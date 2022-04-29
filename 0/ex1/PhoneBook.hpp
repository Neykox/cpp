#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int	check_place(void);
		void change_oldest(void);
		void fill_contact(std::string data[5]);
		void show_search(void);
		int search(int index);
	private:
		Contact repertoir[8];
		int oldest;
};

#endif