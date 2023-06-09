/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:20:15 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/09 17:44:40 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(class Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw_value = copy.getRawBits();
	return ;
}

Fixed::Fixed(const int init) : raw_value(init << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float init)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_value = roundf(init * (1 << this->fraction));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->raw_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_value = raw;
	return ;
}

int		Fixed::toInt(void) const
{
	return (this->raw_value >> this->fraction);
}

float	Fixed::toFloat(void) const
{
	float	ret;

	ret = (float)getRawBits() / (float)(1 << 8);
	return (ret);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->raw_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	double	result;
	
	result = (double)rhs.getRawBits() / (double)(1 << 8);
	os << result;
	return (os);
}
