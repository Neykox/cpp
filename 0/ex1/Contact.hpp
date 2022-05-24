#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
		std::string truncate(std::string str);
		void set_data(std::string data);
		void show_data();
		void show_all_data();
	private:
		std::string info[5];
};

#endif