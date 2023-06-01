/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 16:10:23 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		virtual ~ClapTrap(void);
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		virtual std::string	getName(void) const;
		void				setName(std::string name);
		int					getHitPoints(void) const;
		void				setHitPoints(long int ammount);
		int					getEnergyPoints(void) const;
		void				setEnergyPoints(const unsigned int ammount);
		int					getAttackDamage(void) const;
		void				setAttackDamage(const unsigned int ammount);
		ClapTrap			&operator=(ClapTrap const &rhs);
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

#endif
