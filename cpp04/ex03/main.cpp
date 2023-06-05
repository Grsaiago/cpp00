/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:56:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 22:18:11 by gsaiago          ###   ########.fr       */
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
	SingleList	*lst = new SingleList();

	lst->addBack(new SingleList());
	lst->addBack(new SingleList());
	lst->addBack(new SingleList());

	std::cout << "List size : " << lst->getSize() << std::endl;
	lst->clearList();
	return (0);
}
