/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:35:37 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:40:27 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &cpy);
		~Cat(void);
		Cat	&operator=(const Cat &rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
