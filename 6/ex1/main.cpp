#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t tmp;

	tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data* deserialize(uintptr_t raw)
{
	Data* tmp;
	tmp = reinterpret_cast<Data *>(raw);
	return (tmp);
}

int main()
{
	Data conv;
	Data *ret;
	uintptr_t _uint;

	conv._int = 42;
	conv.str = "Hello world";
	std::cout << &conv  << " " << conv._int << " " << conv.str << std::endl;

	_uint = serialize(&conv);

	std::cout << &_uint << " " << _uint << std::endl;

	ret = deserialize(_uint);

	std::cout << &conv  << " " << conv._int << " " << conv.str<< std::endl;
	std::cout << &ret   << " " << ret->_int << " " << ret->str << std::endl;
	return 0;
}
