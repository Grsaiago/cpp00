/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:20:15 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/10 12:38:41 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* constructors / destructors */

Fixed::Fixed(void) : raw_value(0)
{
	return ;
}

Fixed::Fixed(Fixed const &copy)
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

/* non static member functions */

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

/* static member functions */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (b.getRawBits() > a.getRawBits())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
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
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
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
