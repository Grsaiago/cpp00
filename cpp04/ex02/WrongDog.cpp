/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:04:46 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:26:29 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

WrongDog::WrongDog(void) : WrongAnimal()
{
	std::cout << "A WrongDog is being constructed (?)" << std::endl;
	this->setType("WrongDog");
	this->_brain = new Brain();
	return ;
}

WrongDog::WrongDog(const WrongDog &cpy) : WrongAnimal()
{
	std::cout << "A WrongDog is being copy constructed (?)" << std::endl;
	this->setType(cpy.getType());
	this->_brain = new Brain(*cpy._brain);
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout << "A WrongDog is being destructed (?)" << std::endl;
	delete this->_brain;
	return ;
}

WrongDog	&WrongDog::operator=(const WrongDog &rhs)
{
	this->setType(rhs.getType());
	this->_brain = rhs._brain;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << this->getType() << ": Am I supposed to bark ??" << std::endl;
	return ;
}
