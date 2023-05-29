/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:49:34 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/29 16:33:42 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	complain;
	int			len;
	Harl		harl;

	if (argc != 2)
	{
		std::cout << "Invalid arguments! Input one param\n*\tDEBUB\n*\tINFO\n*\tWARNING\n*\tCOMPLAIN" <<std::endl;
		return (0);
	}
	complain = argv[1];
	len = complain.length();
	for (int i = 0; i < len; i++) {
		complain[i] = toupper(complain[i]);
	}
	harl.complain(complain);
	return (0);
}
