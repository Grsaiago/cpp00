/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:52:50 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/02 13:40:15 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(std::string thought);
		virtual ~Brain(void);
		void	printIdea(void) const;
		void	printIdea(unsigned int index) const;
	protected:
		std::string	_ideas[100];
};

#endif
