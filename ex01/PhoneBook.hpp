/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:30:25 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/01 13:30:30 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>

enum	e_phoneBook
{
	PB_MAX_CONTACTS = 8,
	PB_MAX_WIDTH = 10
};

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	printContact(void);
		void	printPreview(void);
		void	addContact(void);
		void	addFirstName(void);
		void	addLastName(void);
		void	addNickname(void);
		void	addPhoneNumber(void);
		void	addDarkestSecret(void);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchList(void);
	private:
		Contact			contactList[PB_MAX_CONTACTS];
		unsigned int	contactCount;
		unsigned int	contactIterator;
};

void	printWelcome(void);

#endif
