/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:35:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 23:03:40 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void)
{


}

Cure::Cure(const Cure &cpy);
Cure::~Cure(void);
std::string	const	&Cure::getType(void) const;
void	Cure::setType(std::string const &newtype);

AMateria	*Cure::clone(void);
void	Cure::use(ICharacter &target);
