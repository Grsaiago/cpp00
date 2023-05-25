/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/25 19:14:33 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(void) : _name(), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Hello, vault hunter! I have no idea who or what I am. Please end this torment" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Hello, vault hunter! My name is: " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) : _name(cpy.getName() + "_[clone]"),
	_hit_points(cpy.getHitPoints()), _energy_points(cpy.getEnergyPoints()), _attack_damage(cpy.getAttackDamage())
{
	std::cout << this->_name <<": Hello, vault hunter! I'm only a copy of: " << cpy.getName() << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap " << this->_name << " clocking out!" << std::endl;
	return ;
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to attack" << std::endl;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() < 0)
		std::cout<< this->_name << ": You <beep>ing idiot, shoot someone who's alive!!" << std::endl;
	else
		std::cout << this->_name << ": Ouch! You son of a <beep>, how dare you deal " << amount << " points of damage to the the mighty " << this->_name << "!" << std::endl;
	this->setHitPoints(this->getHitPoints() - amount);
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
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

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}


int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

void	ClapTrap::setHitPoints(long int amount)
{
	this->_hit_points = amount;
	return ;
}

void	ClapTrap::setEnergyPoints(const unsigned int amount)
{
	this->_energy_points = amount;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}
