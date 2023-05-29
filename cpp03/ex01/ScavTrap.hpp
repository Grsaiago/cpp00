/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:20:33 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/29 19:52:30 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap &cpy);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		void		setHitPoints(long int ammount);
		int			getEnergyPoints(void) const;
		void		setEnergyPoints(const unsigned int ammount);
		int			getAttackDamage(void) const;
		void		setAttackDamage(const unsigned int ammount);
		void		guardGate(void);
		ScavTrap	&operator=(ScavTrap &rhs);
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};
# endif
