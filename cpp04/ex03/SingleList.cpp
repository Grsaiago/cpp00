/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SingleList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:06:24 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 22:29:59 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SingleList.hpp"
#include "AMateria.hpp"

SingleList::SingleList(void)
{
	this->_content = NULL;
	this->_next = NULL;
}

SingleList::SingleList(SingleList &cpy)
{
	if (cpy.getContent() == NULL)
		this->_content = NULL;
	else
		this->_content = cpy.getContent()->clone();
}

SingleList::~SingleList(void)
{
	if (this->_content != NULL)
		delete (this->_content);
	return ;
}

SingleList::SingleList(AMateria &content)
{
	this->setContent(content);
}

SingleList &SingleList::operator=(const SingleList &rhs)
{
	if (this->_content == NULL)
		delete (this->_content);
	this->_content = rhs._content->clone();
	return (*this);
}

void			SingleList::addBack(SingleList *newnode)
{
	SingleList	*node = this;

	while (node->_next)
		node = node->_next;
	node->_next = newnode;
	return ;
}

//void			SingleList::addFront(SingleList *node);

unsigned int	SingleList::getSize(void) const
{
	const SingleList	*node = this;
	unsigned int		size = 0;

	while (node != NULL)
	{
		size++;
		node = node->_next;
	}
	return (size);
}

AMateria	*SingleList::getContent(void)
{
	return (this->_content);
}

void	SingleList::setContent(AMateria &content)
{
	this->_content = &content;
	return ;
}

void	SingleList::clearContent(void)
{
	if (this->_content != NULL)
		delete (this->_content);
	return ;
}

SingleList	*SingleList::getNext(void) const
{
	return (this->_next);
}

void	SingleList::clearList(void)
{
	SingleList	*aux;
	SingleList	*node;

	node = this;
	while (node != NULL)
	{
		aux = node;
		node = node->_next;
		delete (aux);
	}
	return ;
}
