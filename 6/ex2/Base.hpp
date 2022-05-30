#ifndef BASE_HPP
# define BASE_HPP

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

class Base
{
	public:
		virtual ~Base(void);
};

class A: public Base
{
	~A(void);
};
class B: public Base
{
	~B(void);
};
class C: public Base
{
	~C(void);
};

#endif
