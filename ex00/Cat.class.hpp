/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:41 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 11:16:11 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.class.hpp"

class Cat : public Animal {
	
public:

	Cat(void);
	Cat(Cat const &copy);
	~Cat(void);

	Cat	&operator=(Cat const &assign);

	void			makeSound(void) const;

};

#endif