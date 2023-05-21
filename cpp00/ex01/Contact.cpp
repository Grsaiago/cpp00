/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:29:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/21 20:53:20 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>
#include <ios>
#include <ostream>
#include <string>

static std::string	truncStr(std::string str, unsigned int width);

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::printContact(void) const
{

	std::cout << std::setw(17) << std::left << "First name:" << this->firstName << std::endl;
	std::cout << std::setw(17) << std::left << "Last name: " << this->lastName << std::endl;
	std::cout << std::setw(17) << std::left << "Nickname: " << this->nickname << std::endl;
	std::cout << std::setw(17) << std::left << "phoneNumber: " << this->phoneNumber << std::endl;
	std::cout << std::setw(17) << std::left << "Darkest secret: " << this->darkestSecret << std::endl;
}

void	Contact::printPreview(void) const
{
	std::string	aux;

	
	aux = truncStr(this->firstName, PB_MAX_WIDTH);
	std::cout << std::setw(PB_MAX_WIDTH) << std::setfill(' ') << std::right << aux;
	std::cout << "|";
	aux = truncStr(this->lastName, PB_MAX_WIDTH);
	std::cout << std::setw(PB_MAX_WIDTH) << std::setfill(' ') << std::right << aux;
	std::cout << "|";
	aux = truncStr(this->nickname, PB_MAX_WIDTH);
	std::cout << std::setw(PB_MAX_WIDTH) << std::setfill(' ') << std::right << aux;
	std::cout << "|";
	aux = truncStr(this->phoneNumber, PB_MAX_WIDTH);
	std::cout << std::setw(PB_MAX_WIDTH) << std::setfill(' ') << std::right << aux;
	std::cout << "|";
	return ;
}

static std::string	truncStr(std::string str, unsigned int width)
{
	std::string	aux;

	if (str.length() > width)
	{
		aux = str;
		aux = aux.substr(0, width);
		aux[aux.length() - 1] = '.';
	}
	else
		return (str);
	return (aux);
}

void	Contact::addContact(void)
{
	Contact::addFirstName();
	Contact::addLastName();
	Contact::addNickname();
	Contact::addPhoneNumber();
	Contact::addDarkestSecret();
	return ;
}

void	Contact::addFirstName(void)
{
	unsigned int	len;

	std::cout << "Choose your first name" << std::endl;
	do
	{
		std::getline(std::cin, this->darkestSecret);
	} while (!validateInput(this->darkestSecret, &isalpha));
	len = this->darkestSecret.length();
	for (unsigned int i = 1; i < len; i++)
		this->firstName[i] = tolower(this->firstName[i]);
	this->firstName[0] = toupper(this->firstName[0]);
	std::cout << ("Your name is: " + this->firstName) << std::endl;
	return ;
}

void	Contact::addLastName(void)
{
	unsigned int	len;

	std::cout << "Choose your last name" << std::endl;
	do
	{
		std::getline(std::cin, this->darkestSecret);
	} while (!validateInput(this->darkestSecret, &isalpha));
	len = this->darkestSecret.length();
	for (unsigned int i = 1; i < len; i++)
		this->lastName[i] = tolower(this->lastName[i]);
	this->lastName[0] = toupper(this->lastName[0]);
	std::cout << ("Your full name is: " + this->firstName + " " + this->lastName) << std::endl;
	return ;
}

void	Contact::addNickname(void)
{
	unsigned int	len;

	std::cout << "Choose your nickname" << std::endl;
	do
	{
		std::getline(std::cin, this->nickname);
	} while (!validateInput(this->nickname, &isalpha));
	len = this->nickname.length();
	for (unsigned int i = 1; i < len; i++)
		this->nickname[i] = tolower(this->nickname[i]);
	this->nickname[0] = toupper(this->nickname[0]);
	std::cout << ("Your nickname is: " + this->nickname) << std::endl;
	return ;
}

void	Contact::addPhoneNumber(void)
{
	do
	{
		std::getline(std::cin, this->phoneNumber);
	} while (!validateInput(this->phoneNumber, &isdigit));
	std::cout << ("Your number is: " + this->phoneNumber) << std::endl;
	return ;
}

void	Contact::addDarkestSecret(void)
{
	unsigned int	len;

	std::cout << "What weighs on your soul?" << std::endl;
	do
	{
		std::getline(std::cin, this->darkestSecret);
	} while (!validateInput(this->darkestSecret, &isalpha));
	len = this->darkestSecret.length();
	for (unsigned int i = 1; i < len; i++)
		this->darkestSecret[i] = tolower(this->darkestSecret[i]);
	this->darkestSecret[0] = toupper(this->darkestSecret[0]);
	std::cout << "Your secret is safe with me xD" << std::endl;
	return ;
}

bool	validateInput(std::string line, int (*f)(int))
{
	size_t	len;

	if (!std::cin.good())
	{
		std::cout << "Byeeeeee xD" << std::endl;
		exit(0);
	}
	if (line.empty())
	{
		std::cout << "Empty line is not a valid input" << std::endl;
		return (false);
	}
	len = line.length();
	for (size_t i = 0; i < len; i++)
	{
		if (f(line[i]) == 0)
		{
			std::cout << "Please input only numbers or only alpha" << std::endl;
			return (false);
		}
	}
	return (true);
}
