/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:00:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:22:02 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	this->setType(cpy.getType());
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Am i supposed to meow??" << std::endl;
	return ;
}
