/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:35:05 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 17:24:38 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain::Brain(void)
{
	std::cout << "I have a brain c:" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = "oficina do diabo";
	return ;
}

Brain::Brain(std::string thought)
{
	std::cout << "I have a brain c:" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = thought;
	return ;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "I have a  copy of a brain c:" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->setIdea(cpy.getIdea(i), i);
	return ;
}

Brain::~Brain(void)
{
	std::cout << "I no longer have a brain :c" << std::endl;
	return ;
}

std::string	Brain::getIdea(unsigned int index) const
{
	std::string	str;

	if (index > 100)
		return (str);
	else
		return (this->_ideas[index]);
}

void		Brain::setIdeas(std::string str)
{
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = str;
	return ;
}

void		Brain::setIdea(std::string str, unsigned int index)
{
	if (index > 100)
		return ;
	else
		this->_ideas[index] = str;
	return ;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (unsigned int i = 0; i < 100; i++)
		this->setIdea(rhs.getIdea(i), i);
	return (*this);
}

