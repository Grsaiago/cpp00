/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:10:34 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 20:15:43 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameInit, Weapon &weaponInit) : name(nameInit), weapon(&weaponInit)
{
	return ;
}

HumanB::HumanB(std::string nameInit) : name(nameInit), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}

void	HumanB::attack(void) const
{
	if (this->weapon == NULL)
		std::cout << this->name << ": " << "is unnarmed and will probably be eaten by Zombies" << std::endl;
	else
		std::cout << this->name << ": " << "attacks with their " << this->weapon->getType() << std::endl;
	return ;
}
