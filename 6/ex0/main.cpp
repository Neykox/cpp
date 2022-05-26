#include "Convert.hpp"

int main(int argc, char**argv)
{
	if (argc != 2)
		return 1;

	// int tmp = static_cast<int>(argv[1][0]);

	// std::cout << "char: " << argv[1] << std::endl;
	// std::cout << "int: " << tmp << std::endl;
	// std::cout << "float: " << (float)argv[1] << std::endl;
	// std::cout << "double: " << (double)argv[1] << std::endl;
	try
	{
		Convert hi(argv[1]);
		std::cout << hi;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	return 0;
}


// static_cast<int>(b);