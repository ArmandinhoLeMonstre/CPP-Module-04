/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:37:04 by armitite          #+#    #+#             */
/*   Updated: 2025/02/22 13:37:12 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain {

protected:

	std::string ideas[100];
	
public:

	Brain(void);
	Brain(Brain const &copy);
	~Brain(void);

	Brain	&operator=(Brain const &assign);

	void			setIdea(std::string type, int index);
	std::string		getIdea(int index) const;

};

#endif