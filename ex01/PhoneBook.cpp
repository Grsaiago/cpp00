/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:29:37 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/01 18:55:29 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook(void) : contactCount(0), contactIterator(0)
{
	return ;
};

PhoneBook::~PhoneBook(void)
{
	return ;
};

void	PhoneBook::addContact(void)
{
	this->contactList[this->contactIterator].addContact();
	if (this->contactCount < PB_MAX_CONTACTS)
		this->contactCount++;
	this->contactIterator++;
	if (this->contactIterator == PB_MAX_CONTACTS)
		this->contactIterator = 0;
	return ;
}

void	PhoneBook::searchList(void)
{
	std::string		buff;
	unsigned int	pb_index;

	if (this->contactCount == 0)
	{
		std::cout << "Please add a contact before searching xD" << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < this->contactCount; i++)
	{
		std::cout << std::setw(PB_MAX_WIDTH) << std::setfill(' ') << std::right << i;
		std::cout << "|";
		this->contactList[i].printPreview();
		std::cout << std::endl;
	}
	std::cout << "Choose an index (0-7)" << std::endl;
	while (std::getline(std::cin, buff))
	{
		if (buff.length() > 1 || buff.find_first_of("01234567") == std::string::npos)
		{
			std::cout << "Invalid range! Please input a number between 0 and 7" << std::endl;
			continue ;
		}
		pb_index = atoi(buff.c_str());
		if (pb_index >= this->contactCount)
		{
			std::cout << "This contact doesn't exist, please input a valid index" << std::endl;
			continue ;
		}
		break ;
	}
	this->contactList[pb_index].printContact();
	return ;
}
