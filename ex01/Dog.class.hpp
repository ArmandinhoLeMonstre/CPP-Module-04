/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:36 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 16:00:29 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Brain.class.hpp"

class Dog : public Animal {

private:
	
	Brain	*Dog_Brain;
	
public:

	Dog(void);
	Dog(Dog const &copy);
	~Dog(void);

	Dog	&operator=(Dog const &assign);

};

#endif