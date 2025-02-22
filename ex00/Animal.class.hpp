/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:46 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 11:22:32 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

protected:

	std::string type;

public:
	
	Animal();
	Animal(Animal const &copy);
	Animal & operator=(Animal const &assign);
	virtual ~Animal();

	virtual void	makeSound(void) const;
	void			setType(std::string type);
	std::string		getType(void) const;
	
};

#endif