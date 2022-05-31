#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

template<typename T, typename U, template <void (*F)(T &)>>
void iter(T & a, U & b, F c)
{
	U i;

	i = 0;
	while (i < b)
	{
		c(a[i]);
		i++;
	}
}

#endif
