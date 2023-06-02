/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:04:46 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 13:55:35 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

WrongDog::WrongDog(void) : WrongAnimal()
{
	this->setType("WrongDog");
	this->_brain = new Brain();
	std::cout << "A WrongDog is being constructed (?)" << std::endl;
	return ;
}

WrongDog::WrongDog(std::string type) : WrongAnimal(type)
{
	this->setType("WrongDog");
	this->_brain = new Brain();
	std::cout << "A WrongDog is being constructed (?)" << std::endl;
	return ;
}

WrongDog::~WrongDog(void)
{
	delete this->_brain;
	std::cout << "A WrongDog is being destructed (?)" << std::endl;
	return ;
}

//WrongDog::WrongDog(const WrongDog &cpy)

void	WrongDog::makeSound(void) const
{
	std::cout << this->getType() << ": Am I supposed to bark ??" << std::endl;
	return ;
}
