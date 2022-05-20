#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &tmp)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = tmp;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & tmp)
{
	(void)tmp;
	return *this;
}

Form* Intern::makeForm(const std::string formName, const std::string target)
{
	Form *tmp = NULL;
	int i = 0;
	std::string format[3] = {"shrubbry creation", "robotomy request", "presidential pardon"};

	while (i < 3)
	{
		if (format[i] == formName)
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(formName, target);
			break;
		case 1:
			tmp = new RobotomyRequestForm(formName, target);
			break;
		case 2:
			tmp = new PresidentialPardonForm(formName, target);
			break;
		default:
			std::cout << "Wrong form format, gotta start from zero again." << std::endl;
			return (NULL);
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (tmp);
}
