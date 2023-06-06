/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:10:22 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 22:35:47 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	for (unsigned int i = 0; i < 4; i++)
		this->_materialst[i] = NULL;
	this->_last_learned = -1;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_materialst[i] != NULL)
			delete (this->_materialst[i]);
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (cpy._materialst[i] != NULL)
			this->_materialst[i] = cpy._materialst[i]->clone();
		else
			this->_materialst[i] = NULL;
	}
	this->_last_learned = cpy._last_learned;
}

void MateriaSource::learnMateria(AMateria* learn)
{
	unsigned int	i = 0;

	while (i < 4 && this->_materialst[i] != NULL)
		i++;
	if (i == 4)
	{
		delete (this->_materialst[this->_last_learned]);
		this->_materialst[_last_learned] = learn;
	}
	else
		this->_materialst[i] = learn;
	this->_last_learned++;
	if (this->_last_learned == 4)
		this->_last_learned = 0;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	unsigned int	i = 0;

	while (i < 4)
	{
		if (this->_materialst[i] != NULL
			&& this->_materialst[i]->getType() == type)
		{
				return (this->_materialst[i]->clone());
		}
		i++;
	}
	return (NULL);
}
