/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:00:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 10:12:52 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->setType("WrongCat");
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

//WrongCat::WrongCat(const Animal &cpy)

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Am i supposed to meow??" << std::endl;
	return ;
}
