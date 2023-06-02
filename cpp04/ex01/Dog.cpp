/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:53:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 14:00:23 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "A Dog is being constructed" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "A Dog is being constructed" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void)
{
	std::cout << "A Dog is being destructed" << std::endl;
	delete this->_brain;
	return ;
}

//Dog::Dog(const Dog &cpy)

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << ": Woof Woof :D" << std::endl;
	return ;
}
