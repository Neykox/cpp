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


		MutantStack::<T>::iterator begin(void)
		{
			return (std::begin(T));
		}

		MutantStack::<T>::iterator end(void)
		{
			return (std::end(T));
		}
};

#endif