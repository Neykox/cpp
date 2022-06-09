#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T & t, int n)
{
	return (std::find(t.begin(), t.end(), n));
}

// template <typename T>
// int easyfind(T & t, int n)
// {
// 	typename T::iterator it = std::find(t.begin(), t.end(), n);

// 	return *it;
// }

#endif

// template <class InputIterator, class T>
//    InputIterator find (InputIterator first, InputIterator last, const T& val);