#include "Convert.hpp"

int main(int argc, char**argv)
{
	if (argc != 2)
		return 1;

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
