#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	public:
		unsigned int max;
		std::vector<int> array;
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &tmp);
		~Span(void);
		Span & operator=(Span const & tmp);

		int size() const;
		int shortestSpan() const;
		int longestSpan() const;
		void addNumber(int to_add);
		void addNumber(std::vector<int> & tmp);

		class AlreadyFull: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("Span already full\n");
					}
		};

		class NotEnoughElem: public std::exception
		{
			public:
					const char* what() const throw()
					{
						return ("One or less elem in span\n");
					}
		};
};

#endif
