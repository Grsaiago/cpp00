/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:35:05 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 13:51:48 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "I have a brain c:" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = "oficina do diabo";
	return ;
}

Brain::Brain(std::string thought)
{
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = thought;
	std::cout << "I have a brain c:" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "I no longer have a brain :c" << std::endl;
	return ;
}
