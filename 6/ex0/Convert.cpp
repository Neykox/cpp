#include "Convert.hpp"

Convert::Convert(std::string init): str(init), _int(0), _double(0), _float(0), _char(0)
{
	if (str.empty())
			throw Convert::InvalidFormat();
	if (str.length() == 1)
	{
		this->_char = static_cast<char>(*str.c_str());
	}
	else if ('.' || 'f')
	{
		char *end;
		double tmp = strtod(str.c_str(), &end);

		if (errno == ERANGE)
			throw Convert::InvalidFormat();
		if (*end == 'f')
		{
			if (tmp >= std::numeric_limits<float>::min() && tmp <= std::numeric_limits<float>::max())
				this->_float = static_cast<float>(tmp);
			else
				throw Convert::InvalidFormat();
		}
		else
			this->_double = static_cast<double>(tmp);
	}
	else
	{
		long int tmp = strtol(str.c_str(), NULL, 10);
		if (errno == ERANGE)
			throw Convert::InvalidFormat();
		if (tmp > std::numeric_limits<int>::min() && tmp < std::numeric_limits<int>::max())
			this->_int = static_cast<int>(tmp);
	}
}

Convert::Convert(const Convert &tmp): str(tmp.str), _int(tmp._int), _double(tmp._double), _float(tmp._float), _char(tmp._char)
{
	std::cout << "Convert copy constructor called" << std::endl;
}

Convert::~Convert(void)
{}

// class Impossible: public std::exception
// {
// 	public:
// 			const char* what() const throw()
// 			{
// 				return ("Impossible\n");
// 			}
// };

std::string Convert::NonDisplayable() const
{
	// if (isprint(this->_char) != 0)
	// 	return ("Non displayable");
	// else
		return (std::to_string(this->_char));
}

int Convert::get_int() const
{
	return this->_int;
}

float Convert::get_float() const
{
	return this->_float;
}

double Convert::get_double() const
{
	return this->_double;
}

std::ostream & operator<<(std::ostream & o, Convert const & tmp)
{
	o << "char: " << tmp.NonDisplayable() << std::endl << "int: " << tmp.get_int() << std::endl << "float: " << tmp.get_float() << "f\ndouble: " << tmp.get_double() << std::endl;
	return o;
}
