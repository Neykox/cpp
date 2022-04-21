#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class contact
{
	public:
		void set_data(std::string data);

	//private:
		// std::string first_name;
		// std::string last_name;
		// std::string nickname;
		// std::string phone_number;
		// std::string darkest_secret;

		std::string info[5];
		int i;
};

#endif