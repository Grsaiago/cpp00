/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:17:37 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/06 19:30:31 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &cpy) : AMateria("ice")
{
	this->setType(cpy.getType());
}

Ice::~Ice(void) {};

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) const
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria	&Ice::operator=(const AMateria &rhs)
{
	return (*rhs.clone());
}
