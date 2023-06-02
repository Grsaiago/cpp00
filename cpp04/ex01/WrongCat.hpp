/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:59:25 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 17:01:02 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);
		WrongCat	&operator=(const WrongCat &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
