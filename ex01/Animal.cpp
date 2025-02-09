/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:43 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:25:31 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) {

	std::cout << "Animal default constructor called" << std::endl;
	this->sound = "No sound";
	return ;
}

Animal::Animal(Animal const &copy) {

	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;
	
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
		this->sound = assign.sound;
	}
	
	return (*this);
}

void	Animal::makeSound(void) const {

	
	std::cout << this->sound << std::endl;

	return ;
}

void	Animal::setType(std::string type) {

	this->type = type;

	return ;
}

std::string	Animal::getType(void) const {

	return (this->type);
}

void	Animal::setSound(std::string sound) {

	this->sound = sound;

	return ;
}