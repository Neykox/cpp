#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat first("first", 5);
	Bureaucrat second("second", 45);
	Bureaucrat third("third", 137);
	Bureaucrat fourth("fourth", 150);
	std::cout << first;
	std::cout << second;
	std::cout << third;
	std::cout << fourth << std::endl;

	PresidentialPardonForm first_F("first_F", "rick sanchez");
	RobotomyRequestForm second_F("second_F", "musk");
	ShrubberyCreationForm third_F("third_F", "garden");
	std::cout << first_F;
	std::cout << second_F;
	std::cout << third_F << std::endl << std::endl;


	try
	{
		first.executeForm(first_F);
	}
	catch (Form::FormNotSignedException & e)
	{
		std::cout << "Form not signed, can't execute.\n\n";
	}

	fourth.signForm(third_F);
	std::cout << third_F;
	third.signForm(third_F);
	std::cout << third_F;
	second.signForm(second_F);
	std::cout << second_F;
	first.signForm(first_F);
	std::cout << first_F << std::endl << std::endl;
	

	fourth.executeForm(third_F);
	std::cout << third_F;
	third.executeForm(third_F);
	std::cout << third_F;
	second.executeForm(second_F);
	std::cout << second_F;
	first.executeForm(second_F);
	std::cout << second_F;
	first.executeForm(first_F);
	std::cout << first_F << std::endl << std::endl;

	first.signForm(first_F);
	std::cout << first_F << std::endl;
	std::cout << std::endl;
	return (0);
}

// int main()
// {
// 	Bureaucrat first("first", 1);
// 	std::cout << first << std::endl;
// 	PresidentialPardonForm first_F("first_F", "bezos");
// 	std::cout << first_F << std::endl;

// 	try
// 	{
// 		first.executeForm(first_F);
// 	}
// 	catch (Form::FormNotSignedException & e)
// 	{
// 		std::cout << "Form not signed, can't execute.\n";
// 	}

// 	first.signForm(first_F);
// 	std::cout << first_F << std::endl;

// 	first.executeForm(first_F);
// 	std::cout << first_F << std::endl;

// 	first.signForm(first_F);
// 	std::cout << first_F << std::endl;
// 	std::cout << std::endl;




// 	Bureaucrat second("second", 20);
// 	std::cout << second << std::endl;
// 	PresidentialPardonForm second_F("second_F", "musk");
// 	std::cout << second_F << std::endl;

// 	second.signForm(second_F);
// 	std::cout << second_F << std::endl;

// 	try
// 	{
// 		second.executeForm(second_F);
// 	}
// 	catch (Form::FormNotSignedException & e)
// 	{
// 		std::cout << "Form not signed, can't execute.\n";
// 	}

// 	second.signForm(second_F);
// 	std::cout << second_F << std::endl;
// 	std::cout << std::endl;



// 	Bureaucrat third("third", 150);
// 	std::cout << third << std::endl;
// 	PresidentialPardonForm third_F("third_F", "cz");
// 	std::cout << third_F << std::endl;

// 	third.signForm(third_F);
// 	std::cout << third_F << std::endl;

// 	try
// 	{
// 		third.executeForm(third_F);
// 	}
// 	catch (Form::FormNotSignedException & e)
// 	{
// 		std::cout << "Form not signed, can't execute.\n";
// 	}

// 	third.signForm(third_F);
// 	std::cout << third_F << std::endl;
// 	return (0);
// }
