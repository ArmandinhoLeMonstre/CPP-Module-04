/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:42:20 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include <iostream>

WrongCat::WrongCat(void) {

	std::cout << "WrongCat default constructor called" << std::endl;
	setType("WrongCat");

	return ;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) {

	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = copy.type;
	this->sound = copy.sound;

	return ;
}

WrongCat::~WrongCat(void) {
	
	std::cout << "WrongCat destructor called" << std::endl;

	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &assign) {

	if (this != &assign)
	{
		this->type = assign.type;
		this->sound = assign.sound;
	}

	return (*this);
}