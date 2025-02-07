/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:12 by armitite          #+#    #+#             */
/*   Updated: 2025/02/07 17:40:39 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "Animal.class.hpp"

class WrongCat : public WrongAnimal {

private:
	
	
	
public:

	WrongCat(void);
	WrongCat(WrongCat const &copy);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &assign);

};

#endif