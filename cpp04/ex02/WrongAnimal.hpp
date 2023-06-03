/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:55:57 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 16:13:39 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		std::string 	getType(void) const;
		void			setType(std::string new_type);
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
