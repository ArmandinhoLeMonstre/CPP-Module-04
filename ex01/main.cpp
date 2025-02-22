/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:31 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:28:59 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

int main()
{
	// std::cout << "----------Animal Tab---------------" << std::endl;
	// {
	// 	int	nbr;
	// 	int i;
	// 	i = 0;
	// 	nbr = 4;
	// 	const Animal	*Animal[nbr];

	// 	for(i = 0; i < nbr /2; i++)
	// 		Animal[i] = new Dog();
	// 	for(int x = i; x < nbr; x++)
	// 		Animal[x] = new Cat();
	// 	for (int i = 0; i < nbr; i++)
	// 		delete Animal[i];
	// }
	std::cout << "----------Brain & Copy---------------" << std::endl << std::endl;
	Cat basic;
	{
		Cat tmp = basic;
		tmp.getBrain().setIdea("I think like a cat !", 20);
		std::cout << "Tmp idea : " << tmp.getBrain().getIdea(20) << std::endl;
		std::cout << "Basic idea : " << basic.getBrain().getIdea(20) << std::endl;
		std::cout << "Basic idea : " << basic.getBrain().getIdea(201) << std::endl;

		Cat	copy_of_tmp(tmp);
		std::cout << "Copy of tmp idea : " << copy_of_tmp.getBrain().getIdea(20) << std::endl;
	}
	// Dog basic2;
	// basic2.getBrain().setIdea("I think like a dog !", 20);
	// std::cout << "Basic2 idea : " << basic2.getBrain().getIdea(20) << std::endl;
	// Dog tmp2 = basic2;
	// std::cout << "Tmp2 idea : " << tmp2.getBrain().getIdea(20) << std::endl;
	
	return (0);
}