/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:31:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 12:22:26 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &cpy);
		Animal	&operator=(const Animal &rhs);
		virtual ~Animal(void);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};
#endif
