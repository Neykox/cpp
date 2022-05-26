#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

#include <cstdlib>


int main(int argc, char**argv)
{
	if (argc != 2)
		return 0;

	int tmp = static_cast<int>(argv[1][0]);

	std::cout << "char: " << argv[1] << std::endl;
	std::cout << "int: " << tmp << std::endl;
	// std::cout << "float: " << (float)argv[1] << std::endl;
	// std::cout << "double: " << (double)argv[1] << std::endl;
}


// static_cast<int>(b);