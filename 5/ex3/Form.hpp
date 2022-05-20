#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const std::string target;
		const int gradeToExec;
		const int gradeToSign;
		bool is_signed;
	public:
		Form(void);
		Form(std::string name, std::string target);
		Form(std::string name, std::string target, int gradeToExec, int gradeToSign);
		Form(const Form &tmp);
		virtual ~Form(void);

		Form & operator=(Form const & tmp);

		std::string getName(void) const;
		std::string getTarget(void) const;
		int getGradeToExec() const;
		int getGradeToSign() const;
		bool get_is_signed() const;

		void beSigned(Bureaucrat const & tmp);
		void execute(Bureaucrat const & tmp) const;
		virtual void execute_part2(Bureaucrat const & tmp) const = 0;

		class GradeTooHighException: public std::exception{};
		class GradeTooLowException: public std::exception{};
		class FormNotSignedException: public std::exception{};
};

std::ostream & operator<<(std::ostream & o, Form const & tmp);


#endif
