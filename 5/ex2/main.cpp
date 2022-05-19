#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat first("first", 1);
	std::cout << first << std::endl;
	Form first_F("first_F", 1, 1);
	std::cout << first_F << std::endl;

	first.signForm(first_F);
	std::cout << first_F << std::endl;

	first.signForm(first_F);
	std::cout << first_F << std::endl;


	Bureaucrat second("second", 150);
	std::cout << second << std::endl;
	Form second_F("second_F", 1, 1);
	std::cout << second_F << std::endl;

	second.signForm(second_F);
	std::cout << second_F << std::endl;

	second.signForm(second_F);
	std::cout << second_F << std::endl;

	try
	{
		Form third("third_F", 1, 200);
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << "Grade too high.\n";
		return (1);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << "Grade too low.\n";
		return (1);
	}
	return (0);
}