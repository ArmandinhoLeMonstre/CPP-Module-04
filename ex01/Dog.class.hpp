/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:36 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:40:30 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Brain.class.hpp"
#include "Animal.class.hpp"

class Dog : public Animal {

private:
	
	Brain	*Dog_Brain;
	
public:

	Dog(void);
	Dog(Dog const &copy);
	~Dog(void);

	Dog	&operator=(Dog const &assign);

	void	makeSound(void) const;
	Brain&	getBrain(void) const;

};

#endif