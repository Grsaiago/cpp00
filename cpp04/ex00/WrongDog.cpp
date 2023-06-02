/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:04:46 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 16:53:42 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"


WrongDog::WrongDog(void) : WrongAnimal()
{
	this->setType("WrongDog");
	return ;
}

WrongDog::WrongDog(std::string type) : WrongAnimal(type)
{
	this->setType("WrongDog");
	return ;
}

WrongDog::~WrongDog(void)
{
	return ;
}

WrongDog::WrongDog(const WrongDog &cpy) : WrongAnimal()
{
	this->setType(cpy.getType());
	return ;
}

WrongDog	&WrongDog::operator=(const WrongDog &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << this->getType() << ": Am I supposed to bark ??" << std::endl;
	return ;
}
