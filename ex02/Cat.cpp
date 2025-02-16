/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:38 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 14:03:07 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"
#include "Cat.class.hpp"
#include <iostream>

Cat::Cat(void) {

	std::cout << "Cat default constructor called" << std::endl;
	setType("Cat");
	setSound("Meovv");
	this->Cat_Brain = new Brain();

	return ;
}

Cat::Cat(Cat const &copy) : AAnimal(copy) {

	std::cout << "Cat default constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;
	this->Cat_Brain = copy.Cat_Brain;

	return ;
}

Cat::~Cat(void) {
	
	std::cout << "Cat destructor called" << std::endl;
	delete this->Cat_Brain;
	
	return ;
}

Cat	&Cat::operator=(Cat const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
		this->sound = assign.sound;
		delete this->Cat_Brain;
		this->Cat_Brain = new Brain(*assign.Cat_Brain);
	}

	return (*this);
}

void	Cat::makeSound(void) const {

	
	std::cout << this->sound << std::endl;

	return ;
}