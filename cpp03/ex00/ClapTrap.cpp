/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/22 18:28:48 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

std::vector<ClapTrap*> ClapTrap::_vec;

ClapTrap::ClapTrap(void) : _name(), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	_vec_index = this->_vec.size();
	std::cout << "Hello, vault hunter! I have no idea who or what I am. Please end this torment" << std::endl;
	this->_vec.push_back(this);
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Hello, vault hunter! My name is: " << this->_name << std::endl;
	_vec_index = this->_vec.size();
	this->_vec.push_back(this);
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) : /*_name(cpy.getName()),*/ _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Hello, vault hunter! My name is also: " << this->_name << std::endl;
	_vec_index = this->_vec.size();
	this->_vec.push_back(this);
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap " << this->_name << " clocking out!" << std::endl;
	this->_vec.erase(_vec.begin() + this->_vec_index);
	return ;
}

void			ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << this->_attack_damage << "points of damage!" << std::endl;
	return ;
}

void			ClapTrap::takeDamage(unsigned int amount)
{


}
//void			ClapTrap::beRepaired(unsigned int amount);
//unsigned int	ClapTrap::getHitPoints(void) const;
//void			ClapTrap::setHitPoints(void);
