/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:15:00 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 14:17:16 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(), _name("default_Frag")
{
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(20);
	std::cout << "Hello, vault hunter! I'm Scav: " << this->_name << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap	&cpy) : ClapTrap(), _name(cpy.getName() + "_clone")
{
	setHitPoints(cpy.getHitPoints());
	setEnergyPoints(cpy.getEnergyPoints());
	setAttackDamage(cpy.getAttackDamage());
	std::cout << "Hello, vault hunter! I'm Frag " << this->_name << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name)
{
	FragTrap::setHitPoints(100);
	FragTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage(20);
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
		std::cout << "FragTrap" << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->_name << ": Oof, I'm too <beep> tired to attack" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() < 0)
		std::cout<< this->_name << ": You <beep>ing idiot, shoot someone who's alive!!" << std::endl;
	else
		std::cout << this->_name << ": Ouch! You son of a <beep>, how dare you deal " << amount << " points of damage to the the mighty " << this->_name << "!" << std::endl;
	this->setHitPoints(this->getHitPoints() - amount);
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
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

std::string FragTrap::getName(void) const
{
	return (this->_name);
}

void FragTrap::setName(std::string name)
{
	this->_name = name;
	return ;
}

int	FragTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

void FragTrap::setHitPoints(long int amount)
{
	this->_hit_points = amount;
	return ;
}

void	FragTrap::setEnergyPoints(const unsigned int amount)
{
	this->_energy_points = amount;
}

int	FragTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	FragTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	FragTrap::setAttackDamage(const unsigned int ammount)
{
	this->_attack_damage = ammount;
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
