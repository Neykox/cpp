#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>

class Fixed
{
	private:
		int val;
		static const int sval = 8;
	public:
		Fixed(void);
		Fixed(const int &tmp);
		Fixed(const float &tmp);
		Fixed(const Fixed &tmp);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		Fixed & operator=(Fixed const & tmp);
};

std::ostream & operator<<(std::ostream & o, Fixed const & tmp);

#endif