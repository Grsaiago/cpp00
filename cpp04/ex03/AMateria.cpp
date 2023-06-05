/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:54:35 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 22:58:43 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "default";
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	return ;
}

AMateria::~AMateria(void) {};

std::string	const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::setType(std::string const &newtype)
{
	this->_type = newtype;
	return ;
}
