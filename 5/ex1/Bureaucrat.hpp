#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string type, int grade);
		Bureaucrat(const Bureaucrat &tmp);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & tmp);

		std::string getName(void) const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		
		void signForm(Form &tmp);

		class GradeTooHighException: public std::exception{};
		class GradeTooLowException: public std::exception{};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & tmp);


#endif
