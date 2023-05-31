/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:20:33 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 16:51:46 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap &cpy);
		ScavTrap(std::string name);
		~ScavTrap(void);
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		virtual std::string	getName(void) const;
		virtual void		setName(std::string name);
		virtual int			getHitPoints(void) const;
		virtual void		setHitPoints(long int ammount);
		virtual int			getEnergyPoints(void) const;
		virtual void		setEnergyPoints(const unsigned int ammount);
		virtual int			getAttackDamage(void) const;
		virtual void		setAttackDamage(const unsigned int ammount);
		virtual void		guardGate(void);
		ScavTrap	&operator=(ScavTrap &rhs);
};
# endif
