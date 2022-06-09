#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string type, std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &tmp);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & tmp);

		void execute_part2(Bureaucrat const & tmp) const;
};

#endif
