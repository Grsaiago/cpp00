/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:20:15 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/19 17:32:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw_value(0)
{
	return ;
}

Fixed::Fixed(class Fixed const &copy)
{
	this->raw_value = copy.getRawBits();
	return ;
}

Fixed::Fixed(const int init) : raw_value(init << 8)
{
	return ;
}

Fixed::Fixed(const float init)
{
	this->raw_value = roundf(init * (1 << this->fraction));
	return ;
}

Fixed::~Fixed(void)
{
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

/* comparadores */
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->raw_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs)
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return (this->getRawBits() != rhs.getRawBits());
}

/* operadores aritméticos */
Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	sum;

	sum.setRawBits(this->raw_value + rhs.getRawBits());
	return (sum);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	mult;

	mult.setRawBits(this->raw_value * rhs.toInt());
	return (mult);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	Fixed	tmp(this->getRawBits() / rhs.getRawBits());

	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	sub;

	sub.setRawBits(this->raw_value - rhs.getRawBits());
	return (sub);
}

/* incremento / decremento */

/* prefix */
Fixed	&Fixed::operator++(void)
{
	this->raw_value++;
	return (*this);
}

/*postfix*/
Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;

	this->raw_value++;
	return (temp);
}

/* prefix */
Fixed	&Fixed::operator--(void)
{
	this->raw_value--;
	return (*this);
}

/*postfix*/
Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;

	this->raw_value--;
	return (temp);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	double	result;
	
	result = (double)rhs.getRawBits() / (double)(1 << 8);
	os << result;
	return (os);
}
