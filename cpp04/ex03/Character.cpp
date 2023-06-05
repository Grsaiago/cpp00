/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:51:58 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 23:10:09 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default")
{
	for (int i; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

//	Character(Character &cpy);

Character::~Character(void)
{
	//checagem de quantidade de party_members,
	//se for 0 limpar a linked list com as materias do chão.
	for (int i; i < 4; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete (_inventory[i]);
	}
	return ;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(const std::string newname)
{
	this->_name = newname;
	return ;
}
