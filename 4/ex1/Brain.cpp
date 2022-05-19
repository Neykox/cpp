#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain no name constructor called" << std::endl;

	std::string tmp[20] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "21", "31", "41", "51", "61", "71", "81", "91", "101"};

	srand(time(NULL));
	for (int i = 0; i < 99; i++)
		this->ideas[i] =  tmp[std::rand() % 20];
}

Brain::Brain(const Brain &tmp)
{
	std::cout << "Brain copy constructor called" << std::endl;
	// *this = tmp;
	for (int i = 0; i < 99; i++)
		this->ideas[i] =  tmp.ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & tmp)
{
	for (int i = 0; i < 99; i++)
	{
		this->ideas[i] = tmp.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}
