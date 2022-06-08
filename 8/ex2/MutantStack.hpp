#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

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
			return (std::begin(std::stack<T>::c));
		}

		iterator end(void)
		{
			return (std::end(std::stack<T>::c));
		}
};

#endif