#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Default RobotomyRequestForm", "Default target", 45, 72)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target): Form(name, target, 45, 72)
{
	std::cout << "RobotomyRequestForm with param constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp): Form(tmp)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & tmp)
{
	(void)tmp;
	return *this;
}


void RobotomyRequestForm::execute_part2(Bureaucrat const & tmp) const
{
	this->execute(tmp);
	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << this->getTarget() << " robotomy was succesful.\n";
	else
		std::cout << this->getTarget() << " robotomy has failed.\n";
}
