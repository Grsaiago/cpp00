/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:20:52 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/29 16:56:40 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*runner;

	runner = newZombie("Splinter");
	randomChump("Leonardo");
	randomChump("Michelangelo");
	randomChump("Donatello");
	randomChump("Rafael");
	runner->announce();
	delete (runner);
	return (0);
}
