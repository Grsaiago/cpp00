/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 14:00:09 by gsaiago          ###   ########.fr       */
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
		~ClapTrap(void);
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		virtual std::string	getName(void) const;
		virtual int			getHitPoints(void) const;
		virtual void		setHitPoints(long int ammount);
		virtual int			getEnergyPoints(void) const;
		virtual void		setEnergyPoints(const unsigned int ammount);
		virtual int			getAttackDamage(void) const;
		virtual void		setAttackDamage(const unsigned int ammount);
		ClapTrap			&operator=(ClapTrap const &rhs);
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

#endif
