/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 19:10:34 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->setType("Cat");
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->setType("Cat");
	return ;
}

Cat::~Cat(void)
{
	return ;
}

//Cat::Cat(const Animal &cpy)

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Meoooooow :3" << std::endl;
	return ;
}
