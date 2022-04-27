#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class contact
{
	public:
		void set_data(std::string data);
		void show_data();

		std::string info[5];
};

#endif