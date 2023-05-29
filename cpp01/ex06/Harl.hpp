/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:58:16 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/08 12:52:30 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

enum	e_harl
{
	MAX_FUNCTIONS = 4
};

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
	private:
		std::string		str_list[MAX_FUNCTIONS];
		void 			(Harl::*f[MAX_FUNCTIONS])(void) const;
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif
