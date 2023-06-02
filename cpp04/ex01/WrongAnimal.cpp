/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:57:40 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 13:41:39 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

//WrognAnimal::WrongAnimal(const Animal &cpy)

std::string 	WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal is being destructed (?)" << std::endl;
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
