#include "Base.hpp"

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
}

A::~A(void)
{
	std::cout << "A destructor called" << std::endl;
}

B::~B(void)
{
	std::cout << "B destructor called" << std::endl;
}

C::~C(void)
{
	std::cout << "C destructor called" << std::endl;
}
