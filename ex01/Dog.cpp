/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:33 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 12:54:11 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Brain.class.hpp"
#include <iostream>

Dog::Dog(void) {

	std::cout << "Dog default constructor called" << std::endl;
	setType("Dog");
	this->Dog_Brain = new Brain();

	return ;
}

Dog::Dog(Dog const &copy) : Animal(copy) {

	std::cout << "Dog copy constructor called" << std::endl;
	this->Dog_Brain = NULL;
	*this = copy;

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
		if (this->Dog_Brain)
			delete this->Dog_Brain;
		this->Dog_Brain = new Brain(*assign.Dog_Brain);
	}

	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Waf" << std::endl;

	return ;
}

Brain&	Dog::getBrain(void) const {

	return (*this->Dog_Brain);
}