/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:58:09 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/08 14:44:24 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->str_list[0] = "DEBUG";
	this->str_list[1] = "INFO";
	this->str_list[2] = "WARNING";
	this->str_list[3] = "ERROR";
	this->f[0] = &Harl::debug;
	this->f[1] = &Harl::info;
	this->f[2] = &Harl::warning;
	this->f[3] = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < MAX_FUNCTIONS; i++)
	{
		if (level.compare(this->str_list[i]) == 0)
		{
			(this->*f[i])();
			return ;
		}
	}
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
