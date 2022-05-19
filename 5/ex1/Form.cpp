#include "Form.hpp"

Form::Form(void): name("Default Form"), gradeToExec(150), gradeToSign(150), is_signed(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToExec, int gradeToSign): name(name), gradeToExec(gradeToExec), gradeToSign(gradeToSign), is_signed(0)
{
	std::cout << "Form with param constructor called" << std::endl;
	if (gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToExec > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &tmp): name(tmp.name), gradeToExec(tmp.gradeToExec), gradeToSign(tmp.gradeToSign), is_signed(0)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & tmp)
{
	(void)tmp;
	return *this;
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

bool Form::get_is_signed() const
{
	return (this->is_signed);
}

void Form::beSigned(Bureaucrat const & tmp)
{
	if (tmp.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->is_signed = 1;
}


std::ostream & operator<<(std::ostream & o, Form const & tmp)
{
	o << "Form: " << tmp.getName() << ", gradeToExec = " << tmp.getGradeToExec() << ", gradeToSign = " << tmp.getGradeToSign() << (tmp.get_is_signed()?", is signed.\n":", isnt signed.\n") << std::endl;
	return o;
}
