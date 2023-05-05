/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:54:12 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/04 23:24:12 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zlist;

	zlist = new Zombie[N];

	for (int i = 0; i < N; i++)
		zlist[i].setName(name);
	return (zlist);
}
