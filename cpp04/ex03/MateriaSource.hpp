/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:22:12 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/03 17:30:59 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP 
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria 		*_materialst[4];
		unsigned int	learned_ammount;
	public:
		virtual ~MateriaSource(void);
		virtual void learnMateria(AMateria* learn);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
