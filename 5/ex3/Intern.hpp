#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &tmp);
		~Intern(void);

		Intern & operator=(Intern const & tmp);

		Form* makeForm(const std::string formName, const std::string target);		

		// class GradeTooHighException: public std::exception{};
		// class GradeTooLowException: public std::exception{};
};

#endif
