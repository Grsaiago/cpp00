/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:02:38 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 19:40:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string typeInit) : type(typeInit)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	&Weapon::getType() const
{
	std::string const	&ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
	return ;
}
