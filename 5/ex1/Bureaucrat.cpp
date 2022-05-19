#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->name = "Default Bureaucrat";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Bureaucrat with param constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << "Grade too high, set to 1" << std::endl;
		this->grade = 1;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Grade too low, set to 150" << std::endl;
		this->grade = 150;
	}
	this->name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &tmp)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = tmp;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & tmp)
{
	this->name = tmp.name;
	this->grade = tmp.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::gradeUp()
{
	try
	{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
		{
			this->grade--;
			std::cout << this->name << " grade set to " << this->grade << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << "Grade too high, set to 1" << std::endl;
		this->grade = 1;
	}
}

void Bureaucrat::gradeDown()
{
	try
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->grade++;
			std::cout << this->name << " grade set to " << this->grade << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Grade too low, set to 150" << std::endl;
		this->grade = 150;
	}
}

void Bureaucrat::signForm(Form &tmp)
{
	try
	{
		tmp.beSigned(*this);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->getName() << " couldn't sign " << tmp.getName() << " because grade too low."<< std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << tmp.getName() << std::endl;
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & tmp)
{
	o << tmp.getName() << ", bureaucrat grade " << tmp.getGrade() << ".\n";
	return o;
}
