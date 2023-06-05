/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SingleList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:26:53 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/04 22:13:51 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLELIST_HPP
# define SINGLELIST_HPP
# include "AMateria.hpp"

class SingleList
{
	public:
		SingleList(void);
		SingleList(SingleList &cpy);
		SingleList(AMateria &content);
		~SingleList(void);
		SingleList &operator=(const SingleList &rhs);
		void			addBack(SingleList *newnode);
	//	void			addFront(SingleList *newnode);
		unsigned int	getSize(void) const;
		AMateria 		*getContent(void);
		void			setContent(AMateria &content);
		void 			clearContent(void);
		SingleList		*getNext(void) const;
		void			clearList(void);
	protected:
		AMateria	*_content;
		SingleList	*_next;
};

#endif
