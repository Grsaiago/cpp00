/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:00:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:27:47 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "A WrongCat is being constructed (?)" << std::endl;
	this->setType("WrongCat");
	this->_brain = new Brain();
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	std::cout << "A WrongCat is being copy constructed (?)" << std::endl;
	this->setType(cpy.getType());
	this->_brain = cpy._brain;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A WrongCat is being destructed (?)" << std::endl;
	delete this->_brain;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->setType(rhs.getType());
	this->_brain = rhs._brain;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Am i supposed to meow??" << std::endl;
	return ;
}
