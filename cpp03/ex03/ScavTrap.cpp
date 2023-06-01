/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:30:54 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 14:14:52 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	ScavTrap::setName("default_Scav");
	ScavTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap	&cpy) : ClapTrap()
{
	ScavTrap::setName(cpy.getName() + "_clone");
	ScavTrap::setHitPoints(cpy.getHitPoints());
	ScavTrap::setEnergyPoints(cpy.getEnergyPoints());
	ScavTrap::setAttackDamage(cpy.getAttackDamage());
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	ScavTrap::setName(name);
	ScavTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " Clocking out!:" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "< ScavTrap > " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to attack" << std::endl;
	return ;
}

void		ScavTrap::guardGate(void)
{
	std::cout << this->_name << ": Alright guys! I'm at the gate!" << std::endl;
	return ;
}


ScavTrap	&ScavTrap::operator=(ScavTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}
