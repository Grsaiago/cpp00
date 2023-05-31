/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:30:54 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 11:55:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _name("default_Scav")
{
	ScavTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap	&cpy) : ClapTrap(), _name(cpy.getName() + "_clone")
{
	setHitPoints(cpy.getHitPoints());
	setEnergyPoints(cpy.getEnergyPoints());
	setAttackDamage(cpy.getAttackDamage());
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _name(name)
{
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
		std::cout << "ScavTrap" << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to attack" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() < 0)
		std::cout<< this->_name << ": You <beep>ing idiot, shoot someone who's alive!!" << std::endl;
	else
		std::cout << this->_name << ": Ouch! You son of a <beep>, how dare you deal " << amount << " points of damage to the the mighty " << this->_name << "!" << std::endl;
	this->setHitPoints(this->getHitPoints() - amount);
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0)
	{
		this->setHitPoints(this->getHitPoints() + amount);
		std::cout << this->_name <<": Aha! It was just a flesh wound! I'm repairing myself for " << amount << " of damage" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to repair myself" << std::endl;
}

std::string ScavTrap::getName(void) const
{
	return (this->_name);
}


int	ScavTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

void ScavTrap::setHitPoints(long int amount)
{
	this->_hit_points = amount;
	return ;
}

void	ScavTrap::setEnergyPoints(const unsigned int amount)
{
	this->_energy_points = amount;
}

int	ScavTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ScavTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	ScavTrap::setAttackDamage(const unsigned int ammount)
{
	this->_attack_damage = ammount;
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
