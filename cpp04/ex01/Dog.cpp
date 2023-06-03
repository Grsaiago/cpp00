/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:53:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:27:17 by gsaiago          ###   ########.fr       */
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

Dog::Dog(const Dog &cpy) : Animal()
{
	std::cout << "A Dog is being copy destructed" << std::endl;
	this->setType(cpy.getType());
	this->_brain = new Brain(*cpy._brain);
	return ;
}

Dog::~Dog(void)
{
	std::cout << "A Dog is being destructed" << std::endl;
	delete this->_brain;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->setType(rhs.getType());
	this->_brain = rhs._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << ": Woof Woof :D" << std::endl;
	return ;
}
