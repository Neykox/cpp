#include "Convert.hpp"

Convert::Convert(std::string init): str(init), _int(0), _double(0), _float(0), _char(0), type(-1)
{
	if (str.empty())
			throw Convert::InvalidFormat();
	if (str.length() == 1 && isdigit(*str.c_str()) == 0)
	{
		this->_char = static_cast<char>(*str.c_str());
		type = 0;
	}
	else if (str.length() >= 1 && isdigit(*str.c_str()) != 0)
	{
		char *end;
		strtol(str.c_str(), &end, 10);
		
		if (*end == '.')
		{
			double tmp = strtod(str.c_str(), &end);

			if (errno == ERANGE)
				throw Convert::InvalidFormat();
			if (*end == 'f')
			{
				if (tmp >= std::numeric_limits<float>::min() && tmp <= std::numeric_limits<float>::max())
					this->_float = static_cast<float>(tmp);
				else
					throw Convert::InvalidFormat();
				type = 2;
			}
			else
			{
				this->_double = static_cast<double>(tmp);
				type = 3;
			}
		}
		else
		{
			long int tmp_int = strtol(str.c_str(), NULL, 10);
			if (errno == ERANGE)
				throw Convert::InvalidFormat();
			if (tmp_int > std::numeric_limits<int>::min() && tmp_int < std::numeric_limits<int>::max())
				this->_int = static_cast<int>(tmp_int);
			type = 1;
		}
	}
}

Convert::Convert(const Convert &tmp): str(tmp.str), _int(tmp._int), _double(tmp._double), _float(tmp._float), _char(tmp._char), type(tmp.type)
{
	std::cout << "Convert copy constructor called" << std::endl;
}

Convert::~Convert(void)
{}

std::string Convert::NonDisplayable() const
{
	if (isprint(this->_char) == 0)
		return ("Non displayable");
	else
	{
		std::string s(1, this->_char);
		return (s);
	}
}

int Convert::get_int() const
{
	return std::to_string(this->_int);
}

float Convert::get_float() const
{
	return this->_float;
}

double Convert::get_double() const
{
	return this->_double;
}

std::string Convert::do_conv(void)
{
	std::string ret;

	switch (type)
	{
		case 0:
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
			break ;
		case 1:
			if (_int < CHAR_MIN || _int > CHAR_MAX)
				problem;
			else
				_char = static_cast<char>(_int);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
			break ;
		case 2:
			if (_float < CHAR_MIN || _float > CHAR_MAX)
				problem;
			else
				_char = static_cast<char>(_float);
			if (_float < INT_MIN || _float > INT_MAX)
				problem;
			else
				_int = static_cast<int>(_float);
			_double = static_cast<double>(_float);
			break ;
		case 3:
			if (_double < CHAR_MIN || _double > CHAR_MAX)
				problem;
			else
				_char = static_cast<char>(_double);
			if (_double < INT_MIN || _double > INT_MAX)
				problem;
			else
				_int = static_cast<int>(_double);
			if (_double < FLOAT_MIN || _double > FLOAT_MAX)
				problem;
			else
			_float = static_cast<float>(_double);
			break ;
		default:
			;
	}
}

std::ostream & operator<<(std::ostream & o, Convert const & tmp)
{
	o << "char: " << tmp.NonDisplayable() << std::endl << "int: " << tmp.get_int() << std::endl << "float: " << tmp.get_float() << "f\ndouble: " << tmp.get_double() << std::endl;
	return o;
}
