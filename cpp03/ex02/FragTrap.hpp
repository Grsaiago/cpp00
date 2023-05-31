/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:27:18 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 14:17:43 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap &cpy);
		FragTrap(std::string name);
		~FragTrap(void);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
		void		setName(std::string name);
		int			getHitPoints(void) const;
		void		setHitPoints(long int ammount);
		int			getEnergyPoints(void) const;
		void		setEnergyPoints(const unsigned int ammount);
		int			getAttackDamage(void) const;
		void		setAttackDamage(const unsigned int ammount);
		void		highFiveGuys(void);
		FragTrap	&operator=(FragTrap &rhs);
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};
#endif
