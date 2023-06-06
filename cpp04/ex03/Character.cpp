/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:51:58 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 23:23:41 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "SingleList.hpp"

SingleList *Character::_ground = NULL;
unsigned int Character::_party_members = 0;

Character::Character(void) : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_party_members++;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_party_members++;
	return ;
}

Character::Character(const Character &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy._inventory[i] != NULL)
			this->_inventory[i] = cpy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = cpy._name;
	this->_party_members++;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (_inventory[i]);
	}
	this->_party_members--;
	if (this->_party_members == 0 && this->_ground != NULL)
	{
		this->_ground->clearList();
		this->_ground = NULL;
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

void 	Character::equip(AMateria* materia)
{
	unsigned int idx;

	if (materia == NULL)
		return ;
	idx = 0;
	while (idx < 4)
	{
		if (this->_inventory[idx] == NULL)
			break ;
	}
	if (idx == 4)
	{
		delete materia;
		return ;
	}
	else
		this->_inventory[idx] = materia;
}

void 	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_ground == NULL)
		this->_ground = new SingleList(*this->_inventory[idx]);
	else
		this->_ground->addBack(new SingleList (*this->_inventory[idx]));
	this->_inventory[idx] = NULL;
	return ;
}

void 	Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Out of range spell" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->getName();
		this->_inventory[idx]->use(target);
	}
	return ;
}
