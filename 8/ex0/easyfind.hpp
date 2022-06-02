#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

#include <cstdlib>
#include <cctype>
#include <climits>
#include <limits>
#include <cfloat>

#include <algorithm>
#include <vector>

template <typename T>
T easyfind(T & t, int n)
{
	std::vector<T>::iterator it = t.begin();
	std::vector<T>::iterator ite = t.end();

	while (it != ite)
	{
		if (*it == n)
			return (*it);
		it++;
	}
	return (*ite);
	// std::vector<T>::iterator it;

	// it = find_forst_of(t.begin(), t.end(). );
};

#endif
