/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:27:18 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 14:19:50 by gsaiago          ###   ########.fr       */
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
		void		highFiveGuys(void);
		FragTrap	&operator=(FragTrap &rhs);
};
#endif
