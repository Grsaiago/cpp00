/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:57:40 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 16:13:55 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "A WrongAnimal is being constructed (?)" << std::endl;
	this->setType(cpy.getType());
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal is being destructed (?)" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

std::string 	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}
