#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <tgmath.h>

int main(int argc, char**argv)
{
	if (argc != 2)
		return 0;

	int* tmp = (int*)&argv[1];

	std::cout << "char: " << argv[1] << std::endl;
	std::cout << "int: " << *tmp << std::endl;
	// std::cout << "float: " << (float)argv[1] << std::endl;
	// std::cout << "double: " << (double)argv[1] << std::endl;
}