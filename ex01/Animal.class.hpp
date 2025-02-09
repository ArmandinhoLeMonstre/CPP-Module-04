/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:46 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:29:18 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

private:


protected:

	std::string type;
	std::string sound;

public:
	
	Animal();
	Animal(Animal const &copy);
	Animal & operator=(Animal const &assign);
	virtual ~Animal();

	void			makeSound(void) const;
	void			setType(std::string type);
	void			setSound(std::string sound);
	std::string		getType(void) const;
	
};



#endif