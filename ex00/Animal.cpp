/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:43 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 11:24:55 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) {

	std::cout << "Animal default constructor called" << std::endl;
	setType("No type");
	
	return ;
}

Animal::Animal(Animal const &copy) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	
	return ;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

Animal	&Animal::operator=(Animal const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
	}
	
	return (*this);
}

void	Animal::makeSound(void) const {

	
	std::cout << "No sound" << std::endl;

	return ;
}

void	Animal::setType(std::string type) {

	this->type = type;

	return ;
}

std::string	Animal::getType(void) const {

	return (this->type);
}
