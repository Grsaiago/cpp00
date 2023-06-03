/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:51:47 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:12:01 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		virtual ~DiamondTrap(void);

		using ScavTrap::attack;
		virtual std::string	getName(void) const;
		virtual void		setName(std::string newname);
		std::string			getClapName(void) const;
		void				setClapName(std::string	newname);
		void				whoAmI(void) const;
	 	DiamondTrap			&operator=(const DiamondTrap &rhs);
	private:
		std::string	_name;
};

#endif
