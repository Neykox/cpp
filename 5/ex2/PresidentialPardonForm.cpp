#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Default PresidentialPardonForm", "Default target", 5, 25)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target): Form(name, target, 5, 25)
{
	std::cout << "PresidentialPardonForm with param constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp): Form(tmp)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & tmp)
{
	(void)tmp;
	return *this;
}


void PresidentialPardonForm::execute_part2(Bureaucrat const & tmp) const
{
	this->execute(tmp);
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox.\n";
}
