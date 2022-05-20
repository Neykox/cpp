#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Bureaucrat first("first", 5);
	Bureaucrat second("second", 45);
	Bureaucrat third("third", 137);
	Bureaucrat fourth("fourth", 150);
	std::cout << first;
	std::cout << second;
	std::cout << third;
	std::cout << fourth << std::endl;

	Form* first_F;
	Form* second_F;
	Form* third_F;

	first_F = intern.makeForm("presidential pardon", "rick sanchez");
	// PresidentialPardonForm first_F("first_F", "rick sanchez");
	second_F = intern.makeForm("robotomy request", "musk");
	third_F = intern.makeForm("shrubbry creation", "garden");
	std::cout << *first_F;
	std::cout << *second_F;
	std::cout << *third_F << std::endl << std::endl;


	try
	{
		first.executeForm(*first_F);
	}
	catch (Form::FormNotSignedException & e)
	{
		std::cout << "Form not signed, can't execute.\n\n";
	}

	fourth.signForm(*third_F);
	std::cout << *third_F;
	third.signForm(*third_F);
	std::cout << *third_F;
	second.signForm(*second_F);
	std::cout << *second_F;
	first.signForm(*first_F);
	std::cout << *first_F << std::endl << std::endl;
	

	fourth.executeForm(*third_F);
	std::cout << *third_F;
	third.executeForm(*third_F);
	std::cout << *third_F;
	second.executeForm(*second_F);
	std::cout << *second_F;
	first.executeForm(*second_F);
	std::cout << *second_F;
	first.executeForm(*first_F);
	std::cout << *first_F << std::endl << std::endl;

	first.signForm(*first_F);
	std::cout << *first_F << std::endl;
	std::cout << std::endl;
	delete first_F;
	delete second_F;
	delete third_F;
	return (0);
}
