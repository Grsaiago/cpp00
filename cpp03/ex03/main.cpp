/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/31 12:14:46 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	/*
	std::cout << "== test case 1 ==" << std::endl;
	{
		ClapTrap	c1("Gabriel");
		ClapTrap	c2(c1);

		std::cout << "The mighty ClapTrap began his quest do destroy his evil clone" << std::endl;
		c1.attack("Gabriel_[clone]");
		c2.takeDamage(c1.getAttackDamage());
		c1.attack("Gabriel_[clone]");
		c2.takeDamage(c1.getAttackDamage());
		std::cout << "one... year... later..." << std::endl;
		c1.setEnergyPoints(1);
		std::cout << "And so it ends, ClapTrap can't deal enough damage on its evil clone" << std::endl;
		std::cout << c1.getName() << ": You son of a <beep>! I hate you so much that I'll clone myself out of spite" << std::endl;
		std::cout << c1.getName() << ": But I'll rest first" << std::endl;
		c1.setEnergyPoints(10);
		ClapTrap	c3 = c1;
		std::cout << c1.getName() << ": God <beep>ing dammit! Now there's two of you!!!" << std::endl;
	}
	*/

	std::cout << "== test case 2 ==" << std::endl;
	{
		FragTrap	s1;
		FragTrap	s2("nomeTeste");
		FragTrap	s3(s1);

		std::cout << s2.getName() << ": Hit points > " << s2.getHitPoints() << "\n" << "Energy points > " << s2.getEnergyPoints() << "\n" << "Attack damage > " << s2.getAttackDamage() << std::endl;
		s2.ClapTrap::attack("name");
		s2.highFiveGuys();
	}
	return (0);
}
