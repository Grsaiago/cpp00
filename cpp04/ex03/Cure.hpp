/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:40:49 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 17:41:24 by gsaiago          ###   ########.fr       */
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
		std::string	const	&getType(void) const;
		void				setType(std::string const &newtype);

		virtual	AMateria	*clone(void);
		virtual	void		use(ICharacter &target);
};

#endif
