/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 22:09:10 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("default")
{
	std::cout << "An Animal is being constructed" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &cpy) : _type(cpy.getType())
{
	std::cout << "An Animal is being copy constructed" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "An Animal is being constructed" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "An Animal is being destructed" << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

std::string 	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}
