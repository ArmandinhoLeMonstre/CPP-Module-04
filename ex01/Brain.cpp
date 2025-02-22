/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:37:23 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:37:24 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(void) {

	std::cout << "Brain default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "I have an idea";
	return ;
}

Brain::Brain(Brain const &copy) {

	std::cout << "Brain copy constructor called" << std::endl;
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

void	Brain::setIdea(std::string type, int index) {

	if (index < 0 || index > 99)
	{
		std::cout << "Index has to be between 0 and 99" << std::endl;
		return ;
	}
	this->ideas[index] = type;

	return ;
}

std::string	Brain::getIdea(int index) const {

	if (index < 0 || index > 99)
		return ("Index has to be between 0 and 99");
	return (this->ideas[index]);
}