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
void iter(T * a, int b, void (*f)(T &))
{
	int i;

	i = 0;
	while (i < b)
	{
		f(a[i]);
		i++;
	}
}

#endif
