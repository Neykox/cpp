#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const int gradeToExec;
		const int gradeToSign;
		bool is_signed;
	public:
		Form(void);
		Form(std::string type, int gradeToExec, int gradeToSign);
		Form(const Form &tmp);
		~Form(void);

		Form & operator=(Form const & tmp);

		std::string getName(void) const;
		int getGradeToExec() const;
		int getGradeToSign() const;
		bool get_is_signed() const;

		void beSigned(Bureaucrat const & tmp);

		class GradeTooHighException: public std::exception{};
		class GradeTooLowException: public std::exception{};
};

std::ostream & operator<<(std::ostream & o, Form const & tmp);


#endif
