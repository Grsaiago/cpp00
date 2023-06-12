/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:55:57 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/11 21:50:03 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AWRONGANIMAL_HPP
# define AWRONGANIMAL_HPP
# include <iostream>
# include <string>

class AWrongAnimal
{
	public:
		AWrongAnimal(void);
		AWrongAnimal(const AWrongAnimal &cpy);
		AWrongAnimal(std::string type);
		virtual ~AWrongAnimal(void);
		AWrongAnimal	&operator=(const AWrongAnimal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
