/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:31 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:52:38 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

int main()
{
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	//std::cout << meta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "Dog sound : ";
	j->makeSound();
	std::cout << "Cat sound : ";
	i->makeSound();
	//std::cout << "Default Animal sound : ";
	//meta->makeSound();
	std::cout << "Wrong cat sound : ";
	k->makeSound();

	//delete meta;
	delete j;
	delete i;
	delete k;
	return 0;

}