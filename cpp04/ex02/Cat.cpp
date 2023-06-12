/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:45:20 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "A Cat is being constructed" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &cpy) : AAnimal(cpy.getType())
{
	std::cout << "A Cat is being copy constructed" << std::endl;
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
	*this->_brain = *rhs._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Meoooooow :3" << std::endl;
	return ;
}
