# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 12:41:40 by gsaiago           #+#    #+#              #
#    Updated: 2023/05/29 13:02:06 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ScavTrap

SRCS = ./main.cpp\
	   ./ClapTrap.cpp\
	   ./ScavTrap.cpp\

CC = c++

CFLAGS = -std=c++98 -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

flcean: clean

.PHONY: all clean re fclean
