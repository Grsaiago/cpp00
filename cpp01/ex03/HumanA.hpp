/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:58:46 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 20:13:28 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string nameInit, Weapon &weapon);
		~HumanA(void);
		void		attack(void) const;
		void		setWeapon(Weapon &new_weapon);
	private:
		std::string	name;
		Weapon		&weapon;
};

#endif
