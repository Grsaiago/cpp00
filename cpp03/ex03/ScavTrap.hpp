/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:20:33 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 15:39:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap &cpy);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		attack(const std::string& target);
		void		guardGate(void);
		ScavTrap	&operator=(ScavTrap &rhs);
};
# endif
