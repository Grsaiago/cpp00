/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:15:00 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/10 16:31:28 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	FragTrap::setName("default_Frag");
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(100);
	FragTrap::setAttackDamage(30);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap	&cpy) : ClapTrap()
{
	FragTrap::setName(cpy.getName() + "_clone");
	setHitPoints(cpy.getHitPoints());
	setEnergyPoints(cpy.getEnergyPoints());
	setAttackDamage(cpy.getAttackDamage());
	std::cout << "Hello, vault hunter! I'm Frag " << this->_name << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	FragTrap::setName(name);
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(100);
	FragTrap::setAttackDamage(30);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Clocking out!:" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "< FragTrap > " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to attack" << std::endl;
	return ;
}
void		FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << ": Hey, guys! High Five" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}
