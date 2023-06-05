/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:28:47 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 17:39:58 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &cpy);
		virtual ~Ice(void);
		std::string	const	&getType(void) const;
		void				setType(std::string const &newtype);

		virtual	AMateria	*clone(void);
		virtual	void		use(ICharacter &target);
};

#endif
