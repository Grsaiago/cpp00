/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:35:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/06 19:40:11 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H 
# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string typeInit);
		~Weapon(void);
		std::string const	&getType() const;
		void				setType(std::string str);
	private:
		std::string	type;
};

#endif
