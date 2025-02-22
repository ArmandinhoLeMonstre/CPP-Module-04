/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:43 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:36:34 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal(void) {

	std::cout << "AAnimal default constructor called" << std::endl;
	setType("No type");
	
	return ;
}

AAnimal::AAnimal(AAnimal const &copy) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
	
	return ;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal destructor called" << std::endl;

	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
	}
	
	return (*this);
}

void	AAnimal::makeSound(void) const {

	
	std::cout << "No sound" << std::endl;

	return ;
}

void	AAnimal::setType(std::string type) {

	this->type = type;

	return ;
}

std::string	AAnimal::getType(void) const {

	return (this->type);
}
