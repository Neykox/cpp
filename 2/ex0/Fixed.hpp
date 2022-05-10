#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

class Fixed
{
	private:
		int val;
		static const int sval = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &tmp);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed & operator=(Fixed const & tmp);
};

#endif