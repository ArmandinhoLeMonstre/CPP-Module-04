/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:33 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:30:00 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include <iostream>

Dog::Dog(void) {

	std::cout << "Dog default constructor called" << std::endl;
	setType("Dog");
	setSound("Waf");

	return ;
}

Dog::Dog(Dog const &copy) : Animal(copy) {

	std::cout << "Dog default constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;

	return ;
}

Dog::~Dog(void) {
	
	std::cout << "Dog destructor called" << std::endl;

	return ;
}

Dog	&Dog::operator=(Dog const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
		this->sound = assign.sound;
	}

	return (*this);
}