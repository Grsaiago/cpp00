/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:29:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/21 12:43:57 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>
#include <ostream>

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
	char			err;

	std::cout << "Choose your first name" << std::endl;
	while (std::getline(std::cin, this->firstName))
	{
		err = 0;
		len = this->firstName.length();
		if (len < 1)
			continue ;
		for (unsigned int i = 0; i < len; i++)
		{
			if (!isalpha(this->firstName[i]))
			{
				err = 1;
				break;
			}
		}
		if (err)
		{
			std::cout << "There's a non alphacharacter\n"; 
			std::cout << "Pleas input a valid name: " << std::endl;
			continue ;
		}
		for (unsigned int i = 0; i < len; i++)
			this->firstName[i] = tolower(this->firstName[i]);
		this->firstName[0] = toupper(this->firstName[0]);
		std::cout << ("Your name is: " + this->firstName) << std::endl;
		return ;
	}
	return ;
}

void	Contact::addLastName(void)
{
	unsigned int	len;
	char			err;

	std::cout << "Choose your last name" << std::endl;
	while (std::getline(std::cin, this->lastName))
	{
		err = 0;
		len = this->lastName.length();
		if (len < 1)
			continue ;
		for (unsigned int i = 0; i < len; i++)
		{
			if (!isalpha(this->lastName[i]))
			{
				err = 1;
				break;
			}
		}
		if (err)
		{
			std::cout << "There's a non alphacharacter\n"; 
			std::cout << "Pleas input a valid name: " << std::endl;
			continue ;
		}
		for (unsigned int i = 0; i < len; i++)
			this->lastName[i] = tolower(this->lastName[i]);
		this->lastName[0] = toupper(this->lastName[0]);
		std::cout << ("Your full name is: " + this->firstName + " " + this->lastName) << std::endl;
		return ;
	}
	return ;
}

void	Contact::addNickname(void)
{
	unsigned int	len;
	char			err;

	std::cout << "Choose your nickname" << std::endl;
	while (std::getline(std::cin, this->nickname))
	{
		err = 0;
		len = this->nickname.length();
		if (len < 1)
			continue ;
		for (unsigned int i = 0; i < len; i++)
		{
			if (!isalpha(this->nickname[i]))
			{
				err = 1;
				break;
			}
		}
		if (err)
		{
			std::cout << "There's a non alphacharacter\n"; 
			std::cout << "Pleas input a valid nickname: " << std::endl;
			continue ;
		}
		for (unsigned int i = 0; i < len; i++)
			this->nickname[i] = tolower(this->nickname[i]);
		std::cout << ("Your nickname is: " + this->nickname) << std::endl;
		return ;
	}
	return ;
}

void	Contact::addPhoneNumber(void)
{
	unsigned int	len;
	char			err;

	std::cout << "Choose your phone number" << std::endl;
	while (std::getline(std::cin, this->phoneNumber))
	{
		err = 0;
		len = this->phoneNumber.length();
		if (len < 1)
			continue ;
		for (unsigned int i = 0; i < len; i++)
		{
			if (!isdigit(this->phoneNumber[i]))
			{
				err = 1;
				break;
			}
		}
		if (err)
		{
			std::cout << "There's a non digit character\n"; 
			std::cout << "Pleas input a valid number: " << std::endl;
			continue ;
		}
		for (unsigned int i = 0; i < len; i++)
			this->phoneNumber[i] = tolower(this->phoneNumber[i]);
		this->phoneNumber[0] = toupper(this->phoneNumber[0]);
		std::cout << ("Your number is: " + this->phoneNumber) << std::endl;
		return ;
	}
	return ;
}

void	Contact::addDarkestSecret(void)
{
	unsigned int	len;
	char			err;

	std::cout << "What weighs on your soul?" << std::endl;
	while (std::getline(std::cin, this->darkestSecret))
	{
		err = 0;
		len = this->darkestSecret.length();
		if (len < 1)
			continue ;
		for (unsigned int i = 0; i < len; i++)
		{
			if (!isalpha(this->darkestSecret[i]))
			{
				err = 1;
				break;
			}
		}
		if (err)
		{
			std::cout << "There's a non alphacharacter\n"; 
			std::cout << "Pleas input only alphabetic characters: " << std::endl;
			continue ;
		}
		for (unsigned int i = 0; i < len; i++)
			this->darkestSecret[i] = tolower(this->darkestSecret[i]);
		this->darkestSecret[0] = toupper(this->darkestSecret[0]);
		std::cout << "Your secret is safe with me xD" << std::endl;
		return ;
	}
	return ;
}
