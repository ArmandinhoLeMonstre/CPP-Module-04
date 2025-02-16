/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:41 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 14:00:11 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal {

private:
	
	Brain	*Cat_Brain;
	
public:

	Cat(void);
	Cat(Cat const &copy);
	~Cat(void);

	Cat	&operator=(Cat const &assign);
	void			virtual makeSound(void) const;
	
};

#endif