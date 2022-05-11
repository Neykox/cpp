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

		int operator>(Fixed const & tmp) const;
		int operator<(Fixed const & tmp) const;
		int operator>=(Fixed const & tmp) const;
		int operator<=(Fixed const & tmp) const;
		int operator==(Fixed const & tmp) const;
		int operator!=(Fixed const & tmp) const;

		Fixed & operator+(Fixed const & tmp);
		Fixed & operator-(Fixed const & tmp);
		Fixed & operator*(Fixed const & tmp);
		Fixed & operator/(Fixed const & tmp);

		Fixed & operator++();
		Fixed & operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed min(Fixed & tmp1, Fixed & tmp2);
		static Fixed min(const Fixed & tmp1, const Fixed & tmp2);
		static Fixed max(Fixed & tmp1, Fixed & tmp2);
		static Fixed max(const Fixed & tmp1, const Fixed & tmp2);
};

Fixed min(Fixed & tmp1, Fixed & tmp2);
Fixed min(const Fixed & tmp1, const Fixed & tmp2);
Fixed max(Fixed & tmp1, Fixed & tmp2);
Fixed max(const Fixed & tmp1, const Fixed & tmp2);

std::ostream & operator<<(std::ostream & o, Fixed const & tmp);

#endif
