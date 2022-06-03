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
		unsigned int n;
		T *array;
	public:
		Array(void): n(0)
		{
			std::cout << "Constructor called\n";
			array = new T[0];
		};

		Array(unsigned int n): n(n)
		{
			std::cout << "Constructor with param called\n";
			array = new T[n];
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

		Array & operator=(Array const & tmp)
		{
			this->n = tmp.n;
			this->array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = tmp.array[i];
			return (*this);
		};

		T & operator[](unsigned int index)
		{
			if (index >= n)
				throw Array::InvalidIndex();
			return (array[index]);
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

	// if (n < 1)
		// 	throw Array::InvalidIndex();
