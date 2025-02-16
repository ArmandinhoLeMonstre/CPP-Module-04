/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:31 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 14:03:32 by armitite         ###   ########.fr       */
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
std::cout << "Type is : " << j->getType() << " " << std::endl;
std::cout << "Type is : " << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
//meta->makeSound();
k->makeSound();

//delete meta;
delete j;
delete i;
delete k;
return 0;
}