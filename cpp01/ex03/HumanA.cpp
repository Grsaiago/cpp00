/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:05:25 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 20:13:35 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameInit, Weapon &weaponInit) : name(nameInit), weapon(weaponInit)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << ": " << "attacks with their " << this->weapon.getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &new_weapon)
{
	this->weapon = new_weapon;
}
