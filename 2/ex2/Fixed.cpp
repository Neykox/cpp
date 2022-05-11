#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->val = 0;
}

Fixed::Fixed(const int &tmp)
{
	this->val = tmp << this->sval;
}

Fixed::Fixed(const float &tmp)
{
	this->val = roundf(tmp * (1 << this->sval));
}

Fixed::Fixed(const Fixed &tmp)
{
	this->val = tmp.toFloat();
}

Fixed::~Fixed(void)
{}



int Fixed::getRawBits(void) const
{
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}


float Fixed::toFloat(void) const
{
	return (float)this->val / (1 << this->sval);
}

int Fixed::toInt(void) const
{
	return (this->val >> this->sval);
}



Fixed & Fixed::operator=(Fixed const & tmp)
{
	this->val = tmp.getRawBits();
	return *this;
}



int Fixed::operator>(Fixed const & tmp) const
{
	if (this->val > tmp.val)
		return (1);
	return (0);
}

int Fixed::operator<(Fixed const & tmp) const
{
	if (this->val < tmp.val)
		return (1);
	return (0);
}

int Fixed::operator>=(Fixed const & tmp) const
{
	if (this->val >= tmp.val)
		return (1);
	return (0);
}

int Fixed::operator<=(Fixed const & tmp) const
{
	if (this->val <= tmp.val)
		return (1);
	return (0);
}

int Fixed::operator==(Fixed const & tmp) const
{
	if (this->val == tmp.val)
		return (1);
	return (0);
}

int Fixed::operator!=(Fixed const & tmp) const
{
	if (this->val != tmp.val)
		return (1);
	return (0);
}



Fixed & Fixed::operator+(Fixed const & tmp)
{
	this->val += tmp.val;
	return *this;
}

Fixed & Fixed::operator-(Fixed const & tmp)
{
	this->val -= tmp.val;
	return *this;
}

Fixed & Fixed::operator*(Fixed const & tmp)
{
	this->val *= tmp.val;
	return *this;
}

Fixed & Fixed::operator/(Fixed const & tmp)
{
	this->val /= tmp.val;
	return *this;
}



Fixed & Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(this->toFloat());
	this->val++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(this->toFloat());
	this->val--;
	return (tmp);
}



Fixed Fixed::min(Fixed & tmp1, Fixed & tmp2)
{
	if (tmp1.toFloat() < tmp2.toFloat())
		return (tmp1.toFloat());
	return (tmp2.toFloat());
}

Fixed Fixed::min(const Fixed & tmp1, const Fixed & tmp2)
{
	if (tmp1.toFloat() < tmp2.toFloat())
		return (tmp1.toFloat());
	return (tmp2.toFloat());
}

Fixed Fixed::max(Fixed & tmp1, Fixed & tmp2)
{
	if (tmp1.toFloat() > tmp2.toFloat())
		return (tmp1.toFloat());
	return (tmp2.toFloat());
}

Fixed Fixed::max(const Fixed & tmp1, const Fixed & tmp2)
{
	if (tmp1.toFloat() > tmp2.toFloat())
		return (tmp1.toFloat());
	return (tmp2.toFloat());
}



std::ostream & operator<<(std::ostream & o, Fixed const & tmp)
{
	o << tmp.toFloat();
	return o;
}
