/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:14:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 22:42:06 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "SingleList.hpp"
# include <string>

class Character : public ICharacter
{
	public :
		Character(void);
		Character(std::string name);
		Character(const Character &cpy);
		virtual ~Character(void);
		virtual std::string const	&getName(void) const;
		virtual void				setName(const std::string newname);
		virtual void 				equip(AMateria* materia);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);

	private:
		std::string			_name;
		AMateria			*_inventory[4];
		static SingleList	*_ground;
		static unsigned int	_party_members;
};

#endif
