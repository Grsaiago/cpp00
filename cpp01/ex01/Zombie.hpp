/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:54:12 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/04 23:17:11 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP 
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);
	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif
