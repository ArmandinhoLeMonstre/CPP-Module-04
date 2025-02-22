/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 11:26:29 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include <iostream>

WrongCat::WrongCat(void) {

	std::cout << "WrongCat default constructor called" << std::endl;
	setType("Wrong Cat");

	return ;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) {

	std::cout << "WrongCat default constructor called" << std::endl;
	*this = copy;

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
	}

	return (*this);
}

void	WrongCat::makeSound(void) const {

	
	std::cout << "Wrong cat sound" << std::endl;

	return ;
}