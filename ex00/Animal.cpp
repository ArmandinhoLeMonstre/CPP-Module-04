/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:43 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 16:42:07 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) {

	std::cout << "Animal default constructor called" << std::endl;

	return ;
}

Animal::Animal(Animal const &copy) {

	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
	
	return ;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

Animal	&Animal::operator=(Animal const &assign) {

	if (this != &assign)
		this->type = assign.type;
	
	return (*this);
}

void	Animal::makeSound(void) const {

	if (this->type == "Dog")
		std::cout << "Waf" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Miaou" << std::endl;
	else
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