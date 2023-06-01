/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:49:34 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 15:32:49 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	this->_name = "Default_Diamond";
	ClapTrap::_name = "Default_Clap";
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(20);
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(20);
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	return ;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "< DimondTrap > " << "I am the mighty " << this->getName() << "! Son of "  << ClapTrap::getName() << std::endl;
	return ;
}
