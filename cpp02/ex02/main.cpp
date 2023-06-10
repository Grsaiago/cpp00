/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:19:18 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/10 12:47:40 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//#include <cassert>
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	a = Fixed(1234.4321f);

	/*
    Fixed a(10.5f), b(20.2f), c(10.5f), d(10);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


    // Comparation
    assert((a == c) == true);
    assert((a != b) == true);
    assert((a < b) == true);
    assert((a <= c) == true);
    assert((b > a) == true);
    assert((b >= a) == true);

    // Math
	assert((a * b) == 212.094f);
    assert((a / b) == 0.52079f);
    assert((a + b) == 30.7f);
    assert((a - b) == -9.7f);

    // Pre-increment and pre-decrement

    ++a;
    assert(a == 10.5039f);
    --a;
    assert(a == 10.5f);

    // Post-increment and post-decrement
    a++;
    assert(a == 10.5039f);
    a--;
    assert(a == 10.5f);

    // Min and Max
    Fixed d(15.8f), e(22.9f), f;
    f = Fixed::min(d, e);
    assert(f == d);
    f = Fixed::max(d, e);
    assert(f == e);
	*/
	return (0);
}
