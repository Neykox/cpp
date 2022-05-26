#include "Convert.hpp"

Convert::Convert(std::string str): str(str)
{
	if (str.length() == 1)
	{
		this->_char = static_cast<char>(str);
	}
}

Convert::Convert(const Convert &tmp): str(tmp.str), _int(tmp._int), _double(tmp._double), _float(tmp._float), _char(tmp._char)
{
	std::cout << "Convert copy constructor called" << std::endl;
}

Convert::~Convert(void)
{}

void Convert::executeForm(Form const & form)
{
	try
	{
		form.execute_part2(*this);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because grade too low."<< std::endl;
		return ;
	}
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}


std::ostream & operator<<(std::ostream & o, Convert const & tmp)
{
	o << "char: " << this->_char << std::endl << "int: " << this->_int << std::endl << "float: " << this->_float << std::endl << "double: " << this->_double << std::endl;
	return o;
}
