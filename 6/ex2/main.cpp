#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Type A" << std::endl;
			return (new A);
		case 1:
			std::cout << "Type B" << std::endl;
			return (new B);
		case 2:
			std::cout << "Type C" << std::endl;
			return (new C);
		default:
			;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Real type = A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Real type = B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Real type = C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &tmp = dynamic_cast<A &>(p);
		std::cout << "Real type = A" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		B &tmp = dynamic_cast<B &>(p);
		std::cout << "Real type = B" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		C &tmp = dynamic_cast<C &>(p);
		std::cout << "Real type = C" << std::endl;
	}
	catch (std::bad_cast &bc) {}
}

int main()
{
	Base *base = generate();
	Base *base2 = generate();
	Base &base_ref = *base2;

	std::cout << std::endl;

	identify(base);
	identify(base_ref);

	std::cout << std::endl;

	delete base;
	delete base2;
	return 0;
}