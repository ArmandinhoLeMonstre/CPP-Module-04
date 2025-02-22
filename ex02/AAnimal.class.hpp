/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:46 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:43:25 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal {

protected:

	std::string type;

public:
	
	AAnimal();
	AAnimal(AAnimal const &copy);
	AAnimal & operator=(AAnimal const &assign);
	virtual ~AAnimal();

	virtual void	makeSound(void) const = 0;
	void			setType(std::string type);
	std::string		getType(void) const;
	
};



#endif