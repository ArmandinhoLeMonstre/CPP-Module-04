/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:33 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 14:02:54 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"
#include "Dog.class.hpp"
#include "Brain.class.hpp"
#include <iostream>

Dog::Dog(void) {

	std::cout << "Dog default constructor called" << std::endl;
	setType("Dog");
	setSound("Waf");
	this->Dog_Brain = new Brain();

	return ;
}

Dog::Dog(Dog const &copy) : AAnimal(copy) {

	std::cout << "Dog default constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;
	this->Dog_Brain = copy.Dog_Brain;

	return ;
}

Dog::~Dog(void) {
	
	std::cout << "Dog destructor called" << std::endl;
	delete this->Dog_Brain;

	return ;
}

Dog	&Dog::operator=(Dog const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
		this->sound = assign.sound;
		delete this->Dog_Brain;
		this->Dog_Brain = new Brain(*assign.Dog_Brain);
	}

	return (*this);
}

void	Dog::makeSound(void) const {

	
	std::cout << this->sound << std::endl;

	return ;
}