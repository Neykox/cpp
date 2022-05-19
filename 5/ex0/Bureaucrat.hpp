#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <tgmath.h>

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

		class GradeTooHighException: public std::exception{};
		class GradeTooLowException: public std::exception{};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & tmp);


#endif
