/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:19 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:40:52 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {

private:


protected:

	std::string type;
	std::string sound;

public:
	
	WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal & operator=(WrongAnimal const &assign);
	~WrongAnimal();

	void			makeSound(void) const;
	void			setType(std::string type);
	std::string		getType(void) const;
	
};

#endif