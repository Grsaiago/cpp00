# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 20:29:23 by gsaiago           #+#    #+#              #
#    Updated: 2023/04/30 21:11:48 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS =	main.cpp\
	  	Contact.cpp\
	  	PhoneBook.cpp\

CC = g++

CFLAGS = -std=c++98 -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

.PHONY: all clean re
