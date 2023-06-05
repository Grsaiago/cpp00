/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:20:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 17:26:38 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
