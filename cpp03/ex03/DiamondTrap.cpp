/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:49:34 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:14:59 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

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
	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::setHitPoints(100);
	this->ScavTrap::setEnergyPoints(50);
	this->FragTrap::setAttackDamage(20);
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

void	DiamondTrap::setName(std::string newname)
{
	this->_name = newname;
	return ;
}

std::string	DiamondTrap::getClapName(void) const
{
	return (this->ClapTrap::getName());
}

void DiamondTrap::setClapName(std::string newname)
{
	this->ClapTrap::setName(newname);
	return ;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "< DimondTrap > " << "I am the mighty " << this->getName() << "! Son of "  << this->getClapName() << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->setClapName(rhs.getClapName());
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}
