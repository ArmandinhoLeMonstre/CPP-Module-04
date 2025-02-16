/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:46 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 13:57:23 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal {

private:


protected:

	std::string type;
	std::string sound;

public:
	
	AAnimal();
	AAnimal(AAnimal const &copy);
	AAnimal & operator=(AAnimal const &assign);
	virtual ~AAnimal();

	void			virtual makeSound(void) const = 0;
	void			setType(std::string type);
	void			setSound(std::string sound);
	std::string		getType(void) const;
	
};



#endif