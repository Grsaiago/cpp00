/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:59:25 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:50:17 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "AWrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public AWrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);
		WrongCat	&operator=(const WrongCat &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
