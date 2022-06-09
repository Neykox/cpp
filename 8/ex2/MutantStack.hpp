#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>(){}
		MutantStack(const MutantStack &tmp) : std::stack<T>(tmp){}
		virtual ~MutantStack(void){}

		MutantStack & operator=(MutantStack const & tmp)
		{
			this->c = tmp.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void)
		{
			return (std::stack<T>::c.begin());
		}

		iterator end(void)
		{
			return (std::stack<T>::c.end());
		}
};

#endif