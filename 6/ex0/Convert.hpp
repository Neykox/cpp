#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

class Form;

class Convert
{
	private:
		const std::string str;
		int _int;
		double _double;
		float _float;
		char _char;
	public:
		Convert(std::string str);
		~Convert(void);

		void display(void) const;

		class InvalidFormat: public std::exception{};
		class Impossible: public std::exception{};
		class NonDisplayable: public std::exception{};
};


#endif
