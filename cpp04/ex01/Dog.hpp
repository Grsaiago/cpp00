/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:37:49 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 16:57:47 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &cpy);
		~Dog(void);
		Dog	&operator=(const Dog &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
