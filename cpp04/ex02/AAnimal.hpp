/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:31:27 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:42:53 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &cpy);
		AAnimal(std::string type);
		virtual ~AAnimal(void);
		AAnimal	&operator=(const AAnimal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
