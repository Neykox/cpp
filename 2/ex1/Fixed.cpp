#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const int &tmp)
{
	std::cout << "Int Constructor called" << std::endl;
	this->val = tmp << this->sval;
	// this->val = tmp * this->sval;
}

Fixed::Fixed(const float &tmp)
{
	std::cout << "Float Constructor called" << std::endl;
	this->val = roundf(tmp * (1 << this->sval));
	// this->val = roundf(tmp * this->sval);
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
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}


float Fixed::toFloat(void) const
{
	return (float)this->val / (1 << this->sval);
	// return (float)this->val / this->sval;
}

int Fixed::toInt(void) const
{
	return (this->val >> this->sval);
	// return this->val / this->sval;
}



Fixed & Fixed::operator=(Fixed const & tmp)
{
	this->val = tmp.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & tmp)
{
	o << tmp.toFloat();
	return o;
}

// inline double fixed_to_double(fixed_point_t input)
// {
//     return ((double)input / (double)(1 << FIXED_POINT_FRACTIONAL_BITS));
// }

// inline fixed_point_t double_to_fixed(double input)
// {
//     return (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));
// }