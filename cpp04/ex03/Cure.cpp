/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:35:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 22:08:22 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void) : AMateria("Cure") {}

Cure::Cure(const Cure &cpy) : AMateria("Cure")
{
	this->setType(cpy.getType());
}

Cure::~Cure(void) {};

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

AMateria	&Cure::operator=(const AMateria &rhs)
{
	return (*rhs.clone());
}
