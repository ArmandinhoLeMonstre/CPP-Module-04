/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:38 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:29:42 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include <iostream>

Cat::Cat(void) {

	std::cout << "Cat default constructor called" << std::endl;
	setType("Cat");
	setSound("Meovv");

	return ;
}

Cat::Cat(Cat const &copy) : Animal(copy) {

	std::cout << "Cat default constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;

	return ;
}

Cat::~Cat(void) {
	
	std::cout << "Cat destructor called" << std::endl;

	return ;
}

Cat	&Cat::operator=(Cat const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
		this->sound = assign.sound;
	}

	return (*this);
}