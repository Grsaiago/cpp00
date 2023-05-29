# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 19:44:51 by gsaiago           #+#    #+#              #
#    Updated: 2023/05/29 17:00:47 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRCS = ./main.cpp\
	   ./Weapon.cpp\
	   ./HumanA.cpp\
	   ./HumanB.cpp\

CC = c++

CFLAGS = -std=c++98 -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

.PHONY: all clean re
