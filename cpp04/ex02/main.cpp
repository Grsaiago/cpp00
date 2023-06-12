/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:39:51 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:53:40 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AWrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	std::cout << "==== Test 1 =====" << std::endl;
	{
		//std::cout << "== Animal Creation ==" << std::endl;
		//const Animal* a1 = new Animal();
		std::cout << "== Cat Creation ==" << std::endl;
		const AAnimal* c1 = new Cat();
		std::cout << "== Dog Creation ==" << std::endl;
		const AAnimal* d1 = new Dog();

		std::cout << std::endl;

		std::cout << "== Calling makeSound ==" << std::endl;
		//a1->makeSound();
		c1->makeSound();
		d1->makeSound();

		std::cout << std::endl;

		//std::cout << "== Animal Destruction ==" << std::endl;
		//delete(a1);
		std::cout << "== Cat Destruction ==" << std::endl;
		delete(c1);
		std::cout << "== Dog Destruction ==" << std::endl;
		delete(d1);
		std::cout << std::endl;
	}
	std::cout << "==== Test 2 =====" << std::endl;
	{
		//std::cout << "== WrongAnimal Creation ==" << std::endl;
		//const WrongAnimal* a1 = new WrongAnimal();
		std::cout << "== WrongCat Creation ==" << std::endl;
		const AWrongAnimal* c1 = new WrongCat();
		std::cout << "== WrongDog Creation ==" << std::endl;
		const AWrongAnimal* d1 = new WrongDog();

		std::cout << std::endl;

		std::cout << "== Calling makeSound ==" << std::endl;
		//a1->makeSound();
		c1->makeSound();
		d1->makeSound();

		std::cout << std::endl;

		//std::cout << "== WrongAnimal Destruction ==" << std::endl;
		//delete(a1);
		std::cout << "== WrongCat Destruction ==" << std::endl;
		delete(c1);
		std::cout << "== WrongDog Destruction ==" << std::endl;
		delete(d1);
	}
	return (0);
}
