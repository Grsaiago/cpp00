/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:58:56 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 20:13:49 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string nameInit, Weapon &weaponInit);
		HumanB(std::string nameInit);
		~HumanB(void);
		void		attack(void) const;
		void		setWeapon(Weapon &new_weapon);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
