/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:40:49 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 23:01:30 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &cpy);
		virtual ~Cure(void);
		virtual AMateria	&operator=(const AMateria &rhs);

		virtual	AMateria	*clone(void);
		virtual	void		use(ICharacter &target);
};

#endif
