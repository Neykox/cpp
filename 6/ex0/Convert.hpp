#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

#include <cstdlib>
#include <cctype>
#include <limits>

class Convert
{
	private:
		const std::string str;
		int _int;
		double _double;
		float _float;
		char _char;
		int type;
	public:
		Convert(std::string str);
		Convert(const Convert &tmp);
		~Convert(void);

		std::string NonDisplayable() const;
		int get_int() const;
		float get_float() const;
		double get_double() const;

		class InvalidFormat: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("Invalid format\n");
					}
		};

		class Impossible: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("Impossible");
					}
		};
};

std::ostream & operator<<(std::ostream & o, Convert const & tmp);

#endif
