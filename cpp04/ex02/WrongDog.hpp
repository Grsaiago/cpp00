/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:03:13 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:53:23 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "AWrongAnimal.hpp"
# include "Brain.hpp"

class WrongDog : public AWrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(const WrongDog &cpy);
		~WrongDog(void);
		WrongDog	&operator=(const WrongDog &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
