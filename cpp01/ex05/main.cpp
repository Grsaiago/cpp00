/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:49:34 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/08 14:43:02 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(void)
{
	std::string	complain;
	Harl		harl;

	complain = "DEBUG";
	harl.complain(complain);
	complain = "INFO";
	harl.complain(complain);
	complain = "WARNING";
	harl.complain(complain);
	complain = "ERROR";
	harl.complain(complain);
	return (0);
}
