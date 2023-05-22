# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 12:41:40 by gsaiago           #+#    #+#              #
#    Updated: 2023/05/22 17:06:13 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 

SRCS = ./main.cpp\
	   ./ClapTrap.cpp\

CC = g++

CFLAGS = -std=c++98 -g -Wall -Wextra #-Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

.PHONY: all clean re
