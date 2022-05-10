#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const Fixed &tmp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = tmp.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}



int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

Fixed & Fixed::operator=(Fixed const & tmp)
{
	this->val = tmp.getRawBits();
	return *this;
}
