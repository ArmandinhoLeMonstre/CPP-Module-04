/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:26:41 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 16:18:59 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.class.hpp"

class Cat : public Animal {

private:
	
	
	
public:

	Cat(void);
	Cat(Cat const &copy);
	~Cat(void);

	Cat	&operator=(Cat const &assign);

};

#endif