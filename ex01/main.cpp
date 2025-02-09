/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:31 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:41:54 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

int main()
{
	int		nbr;
	int i;

	i = 0;
	nbr = 4;
	const Animal	*Animal[nbr];
	
	for(i = 0; i < nbr /2; i++)
		Animal[i] = new Dog();
	for(int x = i; x < nbr; x++)
		Animal[x] = new Cat();
	for (int i = 0; i < nbr; i++)
		delete Animal[i];
	
	return (0);
}