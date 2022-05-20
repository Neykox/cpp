#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Default ShrubberyCreationForm", "Default target", 137, 145)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target): Form(name, target, 137, 145)
{
	std::cout << "ShrubberyCreationForm with param constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp): Form(tmp)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & tmp)
{
	(void)tmp;
	return *this;
}


void ShrubberyCreationForm::execute_part2(Bureaucrat const & tmp) const
{
	this->execute(tmp);
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "         	   ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&&%&%&&%,@@@@@/@@@@@@,8888888/8o\n   ,%&%&&&%&&%,@@@@@@@/@@@88888888/88'\n   %&&%&%&/%&&%@@@@@/ /@@@88888888888'\n   %&&%/ %&&%&&@@  V /@@' `8888 `/88'\n   `&%  ` /%&'    |.|        / '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n       jgs /// ._///_/__/  ,/_//__///.  /_//__/_";
	ofs.close();
}
