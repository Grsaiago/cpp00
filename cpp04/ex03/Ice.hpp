/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:28:47 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/10 11:44:35 by gsaiago          ###   ########.fr       */
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
		AMateria *operator=(const AMateria &rhs);

		virtual	AMateria	*clone(void) const;
		virtual	void		use(ICharacter &target) const;
};

#endif
