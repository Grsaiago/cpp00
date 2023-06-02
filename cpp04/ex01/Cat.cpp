/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 14:00:12 by gsaiago          ###   ########.fr       */
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

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "A Cat is being constructed" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
	return ;
}

Cat::~Cat(void)
{
	std::cout << "A Cat is being destructed" << std::endl;
	delete this->_brain;
	return ;
}

//Cat::Cat(const Animal &cpy)

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Meoooooow :3" << std::endl;
	return ;
}
