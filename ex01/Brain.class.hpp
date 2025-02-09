#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain {

private:
	
protected:

	std::string ideas[100];

	
public:

	Brain(void);
	Brain(Brain const &copy);
	~Brain(void);

	Brain	&operator=(Brain const &assign);

};

#endif