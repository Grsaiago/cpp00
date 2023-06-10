/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:56:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/10 11:47:21 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"
#include "./ICharacter.hpp"
#include "./Character.hpp"
#include "./AMateria.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"
#include "./SingleList.hpp"
#include <iostream>

int	main(void)
{
	/*
	SingleList	*lst = new SingleList();

	lst->addBack(new SingleList());
	lst->addBack(new SingleList());
	lst->addBack(new SingleList());

	std::cout << "List size : " << lst->getSize() << std::endl;
	lst->clearList();
	return (0);
	*/

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("Cloud");
	ICharacter* you = new Character("Sephiroth");
	AMateria*	mat;
	AMateria*	ice = new Ice();
	AMateria*	cura = new Cure();

	std::cout <<"materia == ice" << std::endl;
	mat = ice;
	mat->use(*me);
	std::cout <<"materia == cura" << std::endl;
	mat = cura;
	mat->use(*me);

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *you);
	me->use(1, *you);
	me->use(4, *you);

	delete (src);
	delete (me);
	delete (you);

	return (0);
}
