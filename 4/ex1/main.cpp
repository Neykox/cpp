#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string type[10] = {"Dog1", "Dog2", "Dog3", "Dog4", "Dog5", "Cat1", "Cat2", "Cat3", "Cat4", "Cat5"};
	const Animal *tab[10];
	for (int i = 0; i < 5; i++)
		tab[i] = new Dog(type[i]);
	for (int i = 5; i < 10; i++)
		tab[i] = new Cat(type[i]);

	std::cout << std::endl;

	Dog tmp(*(Dog *)tab[1]);

	std::cout << tab[1]->getType() << " " << ((Dog *)tab[1])->getBrain()->getIdea(4) << std::endl;
	std::cout << tmp.getType() << " " << tmp.getBrain()->getIdea(4) << std::endl;
	std::cout << std::endl;

	std::cout << tab[1]->getType() << " " << ((Dog *)tab[1])->getBrain()->getIdea(66) << std::endl;
	std::cout << tmp.getType() << " " << tmp.getBrain()->getIdea(66) << std::endl;
	std::cout << std::endl;
	std::cout << tab[1]->getType() << " " << ((Dog *)tab[1])->getBrain()->getIdea(23) << std::endl;
	std::cout << tmp.getType() << " " << tmp.getBrain()->getIdea(23) << std::endl;
	std::cout << std::endl;



	for (int i = 0; i < 10; i++)
		delete tab[i];

	std::cout << std::endl;
	std::cout << tmp.getType() << " " << tmp.getBrain()->getIdea(4) << std::endl;
	std::cout << std::endl;
	return 0;
}
