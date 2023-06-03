/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:12:32 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

void printName(ClapTrap *who);
void	printInfo(const DiamondTrap &who);

void	printInfo(const DiamondTrap &who)
{
	std::cout << who.getName() << ": Clap name > " << who.ClapTrap::getName() << std::endl;
	std::cout << who.getName() << ": Hit points > " << who.getHitPoints() << std::endl;
	std::cout << who.getName() << ": Energy points > " << who.getEnergyPoints() << std::endl;
	std::cout << who.getName() << ": Attack Damage > " << who.getAttackDamage() << std::endl;
}

void printName(ClapTrap *who)
{
	std::cout << who->getName() << std::endl;
}

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
		DiamondTrap	s2("s2");
		DiamondTrap *s3 = new DiamondTrap("s3");

		std::cout << "==== s2 info ====" << std::endl;
		printInfo(s2);
		std::cout << "==== s3 info ====" << std::endl;
		printInfo(*s3);
		std::cout << "==== s2 attack ====" << std::endl;
		s2.attack("o ar");
		std::cout << "==== 's2 = *s3' ====" << std::endl;
		s2 = *s3;
		std::cout << "==== s2 info ====" << std::endl;
		printInfo(s2);
		std::cout << "==== s3 info ====" << std::endl;
		printInfo(*s3);
		std::cout << "==== both whoAmI ====" << std::endl;
		s2.whoAmI();
		s3->whoAmI();
//		s2.highFiveGuys();
//		s2.guardGate();

		delete s3;
	}
	return (0);
}
