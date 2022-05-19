#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat first("first", 1);
	std::cout << first << std::endl;

	first.gradeUp();
	std::cout << first << std::endl;

	first.gradeDown();
	std::cout << first << std::endl;


	Bureaucrat second("second", 150);
	std::cout << second << std::endl;

	second.gradeDown();
	std::cout << second << std::endl;

	second.gradeUp();
	std::cout << second << std::endl;
	return (0);
}