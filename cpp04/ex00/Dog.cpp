/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:53:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 10:05:19 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->setType("Dog");
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->setType("Dog");
	return ;
}

Dog::~Dog(void)
{
	return ;
}

//Dog::Dog(const Dog &cpy)

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << ": Woof Woof :D" << std::endl;
	return ;
}
