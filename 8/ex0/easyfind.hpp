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
typename T::iterator easyfind(T & t, int n)
{
	return (find(t.begin(), t.end(), n));
}

#endif

// template <class InputIterator, class T>
//    InputIterator find (InputIterator first, InputIterator last, const T& val);