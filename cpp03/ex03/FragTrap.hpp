/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:27:18 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 15:36:24 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap &cpy);
		FragTrap(std::string name);
		~FragTrap(void);
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		virtual std::string	getName(void) const;
		virtual void		setName(std::string name) const;
		virtual int			getHitPoints(void) const;
		virtual void		setHitPoints(long int ammount);
		virtual int			getEnergyPoints(void) const;
		virtual void		setEnergyPoints(const unsigned int ammount);
		virtual int			getAttackDamage(void) const;
		virtual void		setAttackDamage(const unsigned int ammount);
		virtual void		highFiveGuys(void);
		FragTrap	&operator=(FragTrap &rhs);
};
#endif
