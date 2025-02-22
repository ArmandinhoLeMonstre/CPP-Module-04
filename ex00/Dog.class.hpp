/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:36 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 11:16:06 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {

public:

	Dog(void);
	Dog(Dog const &copy);
	~Dog(void);

	Dog	&operator=(Dog const &assign);

	void			makeSound(void) const;

};

#endif