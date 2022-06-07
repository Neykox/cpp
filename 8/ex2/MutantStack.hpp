#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void):
		{
			std::cout << "Constructor called\n";
		};

		MutantStack(T t):
		{
			std::cout << "Constructor with param called\n";
		};

		MutantStack(const MutantStack &tmp)
		{
			std::cout << "Copy constructor called\n";
			*this = tmp;
		};

		~MutantStack(void)
		{
			std::cout << "Destructor called\n";
		};

		MutantStack & operator=(MutantStack const & tmp)
		{
			return (*this);
		};

		int size() const
		{
			return (this->n);
		};

		class InvalidIndex: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("Invalid index\n");
					}
		};
};

#endif