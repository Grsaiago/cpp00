/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:30:14 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/04 23:39:05 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "str address: " << &str <<std::endl;
	std::cout << "what is stored in stringPTR: " << stringPTR <<std::endl;
	std::cout << "what is stored in stringREF: " << &stringREF <<std::endl;
	std::cout << "str value: " << str <<std::endl;
	std::cout << "str stringPTR points to: " << *stringPTR <<std::endl;
	std::cout << "str stringREF points to: " << stringREF <<std::endl;
	return (0);
}
