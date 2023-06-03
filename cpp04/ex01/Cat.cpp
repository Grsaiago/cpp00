/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:26:13 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "A Cat is being constructed" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &cpy) : Animal()
{
	std::cout << "A Cat is being copy constructed" << std::endl;
	this->setType(cpy.getType());
	this->_brain = new Brain(*cpy._brain);
	return ;
}

Cat::~Cat(void)
{
	std::cout << "A Cat is being destructed" << std::endl;
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->setType(rhs.getType());
	this->_brain = rhs._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Meoooooow :3" << std::endl;
	return ;
}
