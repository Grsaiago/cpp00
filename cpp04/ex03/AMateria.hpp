/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:36:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 21:37:59 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		std::string	const	&getType(void) const;
		void				setType(std::string const &newtype);
		virtual AMateria	&operator=(const AMateria &rhs);

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) const = 0;
};

#endif
