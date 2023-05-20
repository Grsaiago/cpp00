/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:16:12 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/20 10:21:42 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(class Fixed const &copy);
		Fixed(const int init);
		Fixed(const float init);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	&operator=(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator>(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	&operator--(void);
		Fixed	operator--(int);
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
	private:
		int	raw_value;
		static const int fraction = 8;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs);

#endif
