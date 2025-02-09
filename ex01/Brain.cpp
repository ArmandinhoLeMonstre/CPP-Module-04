#include "Brain.class.hpp"

Brain::Brain(void) {

	std::cout << "Brain default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "I have an idea";
	return ;
}

Brain::Brain(Brain const &copy) {

	std::cout << "Brain default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];

	return ;
}

Brain::~Brain(void) {
	
	std::cout << "Brain destructor called" << std::endl;

	return ;
}

Brain	&Brain::operator=(Brain const &assign) {

	if (this != &assign)
	{
		for(int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	}

	return (*this);
}