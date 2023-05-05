/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:54:13 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/04 23:25:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zlist;
	int	N;

	N = 20;
	zlist = zombieHorde(N, "Gabriel");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zumbi No " << i + 1 << ": " << std::endl;
		zlist[i].announce();
	}
	delete [] zlist;
}
