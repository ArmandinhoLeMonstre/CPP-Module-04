/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:33:25 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal default constructor called" << std::endl;
	setType("Wrong Animal");

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destructor called" << std::endl;

	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
	}
	
	return (*this);
}

void	WrongAnimal::makeSound(void) const {

	
	std::cout << "Wrong sound" << std::endl;

	return ;
}


std::string	WrongAnimal::getType(void) const {

	return (this->type);
}

void	WrongAnimal::setType(std::string type) {

	this->type = type;

	return ;
}
