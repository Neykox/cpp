#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

template<typename T>
class Array
{
	private:
		T array[n];
		unsigned int n;
	public:
		Array(void): n(1)
		{
			std::cout << "Constructor called\n";
		};

		Array(unsigned int n): n(n)
		{
			std::cout << "Constructor with param called\n";
			if (n < 1)
				throw Array::InvalidIndex();
		};

		Array(const Array &tmp)
		{
			std::cout << "Copy constructor called\n";
			*this = tmp;
		};

		~Array(void)
		{
			std::cout << "Destructor called\n";
			delete[] array;
		};

		Array & operator=(Array const & tmp) { *this = tmp | *this = new tmp; };

		int size() const { return (this->n); };

		class InvalidIndex: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("Invalid index\n");
					}
		};
}

#endif
