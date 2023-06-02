/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:57:40 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 09:58:48 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	return ;
}

//WrognAnimal::WrongAnimal(const Animal &cpy)

std::string 	WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

void	WrongAnimal::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm literally just a wrong concept, come on..." << std::endl;
	return ;
}
